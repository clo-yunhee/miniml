%{
#include "list.h"
#include "names.h"
#include "ast.h"

extern int yylex(void);
extern int yylineno;

void yyerror(const char *);

extern AstList *prog;
%}

%error-verbose

/* token definitions */

%token LET IN FUN REC
%token IF ELSE THEN 
%token INT FLOAT BOOL STRING NAME
%token TWOSEMI SEMI LPAREN RPAREN TBEGIN TEND ARROW COMMA
%token PLUS MINUS MUL DIV FPLUS FMINUS FMUL FDIV
%token EQUAL NOTEQU NOT GT GTE LT LTE

/* precedence rules */

%nonassoc LET FUN
%nonassoc "below-semi"
%right SEMI
%nonassoc "simple-if"
%right ELSE 

%nonassoc COMMA RPAREN
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
    AstList *list;
    ast_t *ast;
    struct { NameList *names; bool rec; NameList *params; ast_t *expr; } let;
    NameList *names;
}

%type <list> program

%type <ast> instruction expr global_let
%type <ast> atom funcall_expr arith_expr let_expr fun_expr if_expr
%type <ast> exp_or exp_and exp_equ exp_rel exp_add exp_mul exp_un

%type <list> atom_list expr_list tuple_expr_list
%type <let> let_prefix let_binding
%type <names> parameter_list let_pattern tuple_name_list

%type <ival> PLUS MINUS MUL DIV
%type <ival> FPLUS FMINUS FMUL FDIV
%type <ival> EQUAL NOTEQU NOT OR AND
%type <ival> GT GTE LT LTE
%type <ival> operator

%type <ival> INT BOOL NAME
%type <fval> FLOAT
%type <sval> STRING

%%

program:
    program instruction error TWOSEMI   { prog = list_append(&prog, $2); }
  | program error TWOSEMI               { }
  | error TWOSEMI                       { }

  | program instruction TWOSEMI   { prog = list_append(&prog, $2); }
  | program TWOSEMI               { }
  | instruction TWOSEMI           { prog = list_new($1); }
  | TWOSEMI                       { }
  ;

instruction: expr | global_let ;


/* expr */

expr:
    funcall_expr
  | arith_expr              /* single atom is handled in this rule */
  | let_expr
  | fun_expr
  | if_expr
  ;

funcall_expr:
  atom atom_list %prec "funcall"  { $$ = ast_make_funcall($1, $2); }
  ;

arith_expr: exp_or ;

expr_list:
    expr %prec "below-semi"   { $$ = list_new($1); }
  | expr_list SEMI expr       { $$ = list_append(&$1, $3); }
  ;

let_expr:
  let_binding IN expr %prec "below-semi"   { $$ = ast_make_let($1.names, $1.rec, $1.params, $1.expr, $3); }
  ;

global_let:
  let_binding   { $$ = ast_make_let($1.names, $1.rec, $1.params, $1.expr, NULL); }
  ;

fun_expr:
  FUN parameter_list ARROW expr %prec "below-semi"   { $$ = ast_make_let(list_new(nmalloc(UNDEFINED)), false, $2, $4, NULL); }
  ;

if_expr:
    IF expr THEN expr %prec "simple-if"   { $$ = ast_make_if($2, $4, NULL); }
  | IF expr THEN expr ELSE expr           { $$ = ast_make_if($2, $4, $6); }
  ;


/* atom */

atom:
    INT                             { $$ = ast_make_integer($1); }
  | FLOAT                           { $$ = ast_make_float($1); }
  | BOOL                            { $$ = ast_make_bool($1); }
  | STRING                          { $$ = ast_make_string($1); }
  | NAME                            { $$ = ast_make_variable($1); }
  | LPAREN RPAREN                   { $$ = ast_make_unit(); }
  | TBEGIN TEND                     { $$ = ast_make_unit(); }
  | LPAREN operator RPAREN          { $$ = ast_make_variable($2); }
  | LPAREN expr RPAREN              { $$ = $2; }
  | LPAREN expr_list RPAREN         { $$ = ast_make_list($2); }
  | TBEGIN expr_list TEND           { $$ = ast_make_list($2); }
  | LPAREN tuple_expr_list RPAREN   { $$ = ast_make_tuple($2); }
  ;

atom_list:
    atom             { $$ = list_new($1); }
  | atom_list atom   { $$ = list_append(&$1, $2); }
  ;

tuple_expr_list:
    expr COMMA expr              { $$ = list_new($1); list_append(&$$, $3); }
  | tuple_expr_list COMMA expr   { $$ = list_append(&$1, $3); }


/* lets */

let_prefix:
    LET let_pattern       { $$.names = $2; $$.rec = false; }
  | LET REC let_pattern   { $$.names = $3; $$.rec = true; }
  ;

let_binding:
    let_prefix EQUAL expr                  { $$ = $1; $$.params = NULL; $$.expr = $3; }    
  | let_prefix parameter_list EQUAL expr   { $$ = $1; $$.params = $2; $$.expr = $4; }
  ;

let_pattern:
    NAME                                   { $$ = list_new(nmalloc($1)); }
  | LPAREN operator RPAREN                 { $$ = list_new(nmalloc($2)); }
  | LPAREN tuple_name_list RPAREN          { $$ = $2; }

tuple_name_list:
    NAME COMMA NAME              { $$ = list_new(nmalloc($1)); list_append(&$$, nmalloc($3)); }
  | tuple_name_list COMMA NAME   { $$ = list_append(&$1, nmalloc($3)); }

parameter_list:
    NAME                  { $$ = list_new(nmalloc($1)); }
  | parameter_list NAME   { $$ = list_append(&$1, nmalloc($2)); }
  ;


/* math expressions */

exp_or:
    exp_and
  | exp_or OR exp_and   { $$ = ast_make_binary($1, $2, $3); }
  ;

exp_and:
    exp_equ
  | exp_and AND exp_equ   { $$ = ast_make_binary($1, $2, $3); }
  ;

exp_equ:
    exp_rel
  | exp_equ EQUAL exp_rel    { $$ = ast_make_binary($1, $2, $3); }
  | exp_equ NOTEQU exp_rel   { $$ = ast_make_binary($1, $2, $3); }
  ;

exp_rel:
    exp_add
  | exp_rel GT exp_add    { $$ = ast_make_binary($1, $2, $3); }
  | exp_rel GTE exp_add   { $$ = ast_make_binary($1, $2, $3); }
  | exp_rel LT exp_add    { $$ = ast_make_binary($1, $2, $3); }
  | exp_rel LTE exp_add   { $$ = ast_make_binary($1, $2, $3); }
  ;

exp_add:
    exp_mul
  | exp_add PLUS exp_mul     { $$ = ast_make_binary($1, $2, $3); }
  | exp_add MINUS exp_mul    { $$ = ast_make_binary($1, $2, $3); }
  | exp_add FPLUS exp_mul    { $$ = ast_make_binary($1, $2, $3); }
  | exp_add FMINUS exp_mul   { $$ = ast_make_binary($1, $2, $3); }
  ;

exp_mul:
    exp_un
  | exp_mul MUL exp_un    { $$ = ast_make_binary($1, $2, $3); }
  | exp_mul DIV exp_un    { $$ = ast_make_binary($1, $2, $3); }
  | exp_mul FMUL exp_un   { $$ = ast_make_binary($1, $2, $3); }
  | exp_mul FDIV exp_un   { $$ = ast_make_binary($1, $2, $3); }
  ;

exp_un:
    atom
  | NOT atom      { $$ = ast_make_unary($1, $2); }
  | PLUS atom     { $$ = ast_make_unary($1, $2); }
  | MINUS atom    { $$ = ast_make_unary($1, $2); }
  | FPLUS atom    { $$ = ast_make_unary($1, $2); }
  | FMINUS atom   { $$ = ast_make_unary($1, $2); }
  ;


/* operators */

operator:
    PLUS | MINUS | MUL | DIV
  | FPLUS | FMINUS | FMUL | FDIV
  | NOT | EQUAL | NOTEQU
  | GT | GTE | LT | LTE ;


%%

void yyerror(const char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}

