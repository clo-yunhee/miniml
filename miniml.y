%{
#include "names.h"
#include "ast.h"

extern int yylex(void);
extern int yylineno;

void yyerror(const char *);

#define SET_AST(type) $$ = ast_make_##type 
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

expr: INT                           { SET_AST(integer) ($1); }
    | NAME                          { SET_AST(variable) ($1); }
    | LPAREN expr RPAREN            { SET_AST(block) ($2); }
    | TBEGIN expr TEND              { SET_AST(block) ($2); }
    | expr expr %prec FUNCALL       { SET_AST(funcall) ($1, $2); }
    | expr infix_op expr            { SET_AST(binary) ($1, $2, $3); }
    | expr SEMI expr                {
                                        astlist_t *tail;
                                        // if the tail is a list, append to that list
                                        // instead of nesting like a tree
                                        if ($3->type == e_list) {
                                            tail = $3->exprList;
                                        } else {
                                            tail = alist_make($3, NULL);
                                        }
                                        SET_AST(list) (alist_make($1, tail));
                                    }
    | LET let_binding IN expr       { SET_AST(let) ($2.name, $2.params, $2.expr, $4); }
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
}

void yyerror(const char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}
