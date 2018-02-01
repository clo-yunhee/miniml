%{
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
    const char *sval;
    /* parser */
    ast_t *ast;
}

%%

program: %empty
       | TWOSEMI program
       | expr TWOSEMI program
       ;

expr: INT
    | NAME
    | LPAREN expr RPAREN
    | TBEGIN expr TEND
    | expr expr %prec FUNCALL
    | expr infix_op expr
    | expr SEMI expr
    | LET let_binding IN expr
    ;

let_binding: NAME EQUAL expr
           | NAME parameter_list EQUAL expr
           ;

parameter_list: NAME parameter_list
              | NAME
              ;

infix_op: PLUS | MINUS | MUL | DIV ;

%%

#include "names.h"

int main(int argc, char *argv[]) 
{
    //init code
    names_init();

    yyparse();
}

void yyerror(const char *s) {
    fprintf(stderr, "line %d: %s", yylineno, s);
}
