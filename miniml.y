%{
extern int yylex(void);
void yyerror(const char *);
%}

%token LET IN EQUAL
%token TBEGIN TEND
%token INT NAME
%token TWOSEMI SEMI LPAREN RPAREN
%token PLUS MINUS MUL DIV


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


%union {
    int token;
    int ival;
    const char *sval;
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

void yyerror(const char *s) {
    fprintf(stderr, "%s", s);
}

