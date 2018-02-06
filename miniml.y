%{
#include "names.h"
#include "ast.h"

extern int yylex(void);
extern int yylineno;

void yyerror(const char *);
%}

/* token definitions */

%token LET IN EQUAL
%token TBEGIN TEND
%token INT NAME
%token TWOSEMI SEMI LPAREN RPAREN
%token PLUS MINUS MUL DIV

/* precendece rules */

%precedence LET
%right SEMI

%left OR
%left AND
%precedence NOT
%left GT GTE LT LTE EQU NEQ

%left PLUS MINUS
%left MUL DIV
%precedence PREFIX
%left FUNCALL

/* data holder */

%union {
    /* for lexer */
    int token;
    int ival;
    /* parser */
    astlist_t *prog;
    ast_t *ast;
    struct { int name; params_t *params; ast_t *expr; } let;
    params_t *params;
}

%type <prog> program
%type <ast> expr
%type <let> let_binding
%type <params> parameter_list

%type <ival> PLUS MINUS MUL DIV
%type <ival> INT NAME infix_op

%%

program: %empty                     { $$ = NULL; }
       | TWOSEMI program            { $$ = $2; }
       | expr TWOSEMI program       { $$ = alist_make($1, $3); }
       ;

expr: INT                           { $$ = ast_make_integer($1); }
    | NAME                          { $$ = ast_make_variable($1); }
    | LPAREN expr RPAREN            { $$ = ast_make_block($2); }
    | TBEGIN expr TEND              { $$ = ast_make_block($2); }
    | expr expr %prec FUNCALL       { $$ = ast_make_funcall($1, $2); }
    | expr infix_op expr            { $$ = ast_make_binary($1, $2, $3); }
    | expr SEMI expr                {
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
    | LET let_binding IN expr       { $$ = ast_make_let($2.name, $2.params, $2.expr, $4); }
    ;

let_binding: NAME EQUAL expr                    { $$.name = $1; $$.params = NULL; $$.expr = $3; }
           | NAME parameter_list EQUAL expr     { $$.name = $1; $$.params = $2; $$.expr = $4; }
           ;

parameter_list: NAME parameter_list             { $$ = plist_make($1, $2); }
              | NAME                            { $$ = plist_make($1, NULL); }
              ;

infix_op: PLUS | MINUS | MUL | DIV ;
%%

int main(int argc, char *argv[]) 
{
    //init code
    names_init();

    yyparse();

    astlist_t *prog = yylval.prog;

    // do whatever with the AST

    alist_free(prog);
    names_free();
}

void yyerror(const char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}
