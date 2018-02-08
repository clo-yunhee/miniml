%expect 29
%{
#include "names.h"
#include "ast.h"

extern int yylex(void);
extern int yylineno;

void yyerror(const char *);

extern astlist_t *prog;
%}

/* token definitions */

%token LET IN FUN REC
%token IF ELSE THEN 
%token INT FLOAT BOOL STRING NAME
%token TWOSEMI SEMI LPAREN RPAREN TBEGIN TEND ARROW
%token PLUS MINUS MUL DIV FPLUS FMINUS FMUL FDIV
%token EQUAL NOTEQU NOT GT GTE LT LTE

/* precedence rules */

%nonassoc LET FUN
%nonassoc "below-semi"
%right SEMI
%nonassoc "simple-if"
%right ELSE 

%left OR
%left AND
%left GT GTE LT LTE EQUAL NOTEQU
%right NOT

%left PLUS MINUS FPLUS FMINUS
%left MUL DIV FMUL FDIV
%right "prefix"
%left "funcall"

/* data holder */

%union {
    /* for lexer */
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

%type <list> atom_list expr_list
%type <let> let_prefix let_binding
%type <params> parameter_list

%type <ival> PLUS MINUS MUL DIV
%type <ival> FPLUS FMINUS FMUL FDIV
%type <ival> EQUAL NOTEQU NOT
%type <ival> GT GTE LT LTE
%type <ival> infix_op prefix_op operator

%type <ival> INT BOOL NAME
%type <fval> FLOAT
%type <sval> STRING

/* TODO: Break down infix_op rule to enforce precedence 
simple_expr: or_expr
or_expr: and_expr | and_expr OR and_expr
and_expr: equ_expr | equ_expr OR equ_expr
equ_expr: rel_expr | rel_expr == != rel_expr
rel_expr: add_expr | add_expr < <= > >= add_expr
add_expr: mul_expr | mul_xpr + - mul_expr
mul_expr: atom | atom / * atom
*/

%%

program: %empty                         { prog = NULL; }
       | TWOSEMI program                { prog = prog; }
       | top_expr TWOSEMI program       { prog = alist_make($1, prog); }

top_expr: expr | let_expr             


/* expr */

expr: atom                          
    | atom atom_list %prec "funcall"        { $$ = ast_make_funcall($1, $2); }
    | TBEGIN expr_list TEND                 { $$ = ast_make_list($2); }
    | prefix_op expr                        { $$ = ast_make_unary($1, $2); }
    | expr infix_op expr                    { $$ = ast_make_binary($1, $2, $3); }
    | letin_expr                   
    | fun_expr
    | if_expr                       


expr_list: expr                      { $$ = alist_make($1, NULL); }
         | expr SEMI expr_list       { $$ = alist_make($1, $3); }



if_expr: IF expr THEN expr %prec "simple-if"  { $$ = ast_make_if($2, $4, NULL); }
       | IF expr THEN expr ELSE expr          { $$ = ast_make_if($2, $4, $6); }


/* atom */

atom: INT                       { $$ = ast_make_integer($1); }
    | FLOAT                     { $$ = ast_make_float($1); }
    | BOOL                      { $$ = ast_make_bool($1); }
    | STRING                    { $$ = ast_make_string($1); }
    | NAME                      { $$ = ast_make_variable($1); }
    | LPAREN operator RPAREN    { $$ = ast_make_variable($2); }
    | LPAREN expr RPAREN        { $$ = $2; }
    | LPAREN expr_list RPAREN   { $$ = ast_make_list($2); }

atom_list: atom                 { $$ = alist_make($1, NULL); }
         | atom atom_list       { $$ = alist_make($1, $2); }



/* lets */

let_expr:   let_binding                             { $$ = ast_make_let($1.name, $1.rec, $1.params, $1.expr, NULL); }
letin_expr: let_binding IN expr %prec "below-semi"  { $$ = ast_make_let($1.name, $1.rec, $1.params, $1.expr, $3); }

let_prefix: LET NAME              { $$.name = $2; $$.rec = false; }
          | LET REC NAME          { $$.name = $3; $$.rec = true; }
let_binding: let_prefix EQUAL expr                  { $$ = $1; $$.params = NULL; $$.expr = $3; }
           | let_prefix parameter_list EQUAL expr   { $$ = $1; $$.params = $2; $$.expr = $4; }


/* functions */

fun_expr: FUN parameter_list ARROW expr %prec "below-semi"      { $$ = ast_make_let(-1, false, $2, $4, NULL); }

parameter_list: NAME                            { $$ = plist_make($1, NULL); }
              | NAME parameter_list             { $$ = plist_make($1, $2); }


/* operators */

operator: PLUS | MINUS | MUL | DIV
        | FPLUS | FMINUS | FMUL | FDIV
        | NOT | EQUAL | NOTEQU
        | GT | GTE | LT | LTE

prefix_op: PLUS | MINUS | FPLUS | FMINUS | NOT

infix_op: PLUS | MINUS | MUL | DIV
        | FPLUS | FMINUS | FMUL | FDIV
        | EQUAL | NOTEQU | GT | GTE | LT | LTE

%%

void yyerror(const char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}

