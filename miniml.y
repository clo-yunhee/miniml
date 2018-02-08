%expect 33
%{
#include "names.h"
#include "ast.h"

extern int yylex(void);
extern int yylineno;

void yyerror(const char *);

extern astlist_t *prog;
%}

/* token definitions */

%token-table
%token LET IN FUN REC
%token IF ELSE THEN 
%token INT FLOAT BOOL STRING NAME
%token TWOSEMI SEMI LPAREN RPAREN TBEGIN TEND ARROW
%token PLUS MINUS MUL DIV FPLUS FMINUS FMUL FDIV
%token EQUAL NOTEQU NOT

/* precedence rules */

%nonassoc LET FUN
%right SEMI
%nonassoc _IFX
%nonassoc ELSE 

%left OR
%left AND
%right NOT
%left GT GTE LT LTE EQUAL NOTEQU

%left PLUS MINUS FPLUS FMINUS
%left MUL DIV FMUL FDIV
%right _PREFIX
%left _FUNCALL

/* data holder */

%union {
    /* for lexer */
    int token;
    int ival;
    float fval;
    char *sval;
    /* parser */
    astlist_t *list;
    ast_t *ast;
    struct { int name; bool rec; params_t *params; ast_t *expr; } let;
    params_t *params;
}

%type <ast> top_expr expr atom
%type <ast> let_expr letin_expr if_expr fun_expr

%type <list> atom_list
%type <let> let_pref let_binding
%type <params> parameter_list

%type <ival> PLUS MINUS MUL DIV
%type <ival> FPLUS FMINUS FMUL FDIV
%type <ival> EQUAL NOTEQU NOT
%type <ival> INT BOOL NAME infix_op prefix_op
%type <fval> FLOAT
%type <sval> STRING

%%

program: %empty                         { prog = NULL; }
       | TWOSEMI program                { prog = prog; }
       | top_expr TWOSEMI program       { prog = alist_make($1, prog); }

top_expr: expr | let_expr             


expr: atom                          
    | atom atom_list %prec _FUNCALL  { $$ = ast_make_funcall($1, $2); }
    | TBEGIN expr TEND               { $$ = ast_make_block($2); }
    | prefix_op expr %prec _PREFIX   { $$ = ast_make_unary($1, $2); }
    | expr infix_op expr             { $$ = ast_make_binary($1, $2, $3); }
    | expr SEMI expr                 {
                                        astlist_t *tail;
                                        // if the tail is a list, append to that list
                                        // instead of nesting like a tree
                                        if ($3->type == e_list) {
                                            tail = $3->exprList;
                                        } else {
                                            tail = alist_make($3, NULL);
                                        }
                                        $$ = ast_make_list(alist_make($1, tail));
                                     }
    | letin_expr                   
    | fun_expr
    | if_expr                       

if_expr: IF expr THEN expr %prec _IFX   { $$ = ast_make_if($2, $4, NULL); }
       | IF expr THEN expr ELSE expr    { $$ = ast_make_if($2, $4, $6); }



atom: INT                       { $$ = ast_make_integer($1); }
    | FLOAT                     { $$ = ast_make_float($1); }
    | BOOL                      { $$ = ast_make_bool($1); }
    | STRING                    { $$ = ast_make_string($1); }
    | NAME                      { $$ = ast_make_variable($1); }
    | LPAREN expr RPAREN        { $$ = ast_make_block($2); }

atom_list: atom                 { $$ = alist_make($1, NULL); }
         | atom atom_list       { $$ = alist_make($1, $2); }


let_expr:   let_binding           { $$ = ast_make_let($1.name, $1.rec, $1.params, $1.expr, NULL); }
letin_expr: let_binding IN expr   { $$ = ast_make_let($1.name, $1.rec, $1.params, $1.expr, $3); }

let_pref: LET NAME              { $$.name = $2; $$.rec = false; }
        | LET REC NAME          { $$.name = $3; $$.rec = true; }
let_binding: let_pref EQUAL expr                  { $$ = $1; $$.params = NULL; $$.expr = $3; }
           | let_pref parameter_list EQUAL expr   { $$ = $1; $$.params = $2; $$.expr = $4; }

fun_expr: FUN parameter_list ARROW expr         { $$ = ast_make_let(-1, false, $2, $4, NULL); }

parameter_list: NAME                            { $$ = plist_make($1, NULL); }
              | NAME parameter_list             { $$ = plist_make($1, $2); }


prefix_op: PLUS | MINUS | FPLUS | FMINUS | NOT

infix_op: PLUS | MINUS | MUL | DIV
        | FPLUS | FMINUS | FMUL | FDIV
        | EQUAL | NOTEQU

%%

void yyerror(const char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}

const char *token_name(int t) {
    return yytname[YYTRANSLATE(t)];
}
