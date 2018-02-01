%{
#include "miniml.tab.h"

#include "names.h"

char *strdup(const char *);

#define TOKEN(tok)      (yylval.token = tok)
#define ITOKEN(tok)     (yylval.ival = atoi(yytext), tok)
#define STOKEN(tok)     (yylval.sval = strdup(yytext), tok)

int comdp = 0;
%}
%x comment

whitespace          [ \t\r\n\f]+
number              [[:digit:]]+
identifier          [[:alpha:]][[:alnum:]]*


%%

"let"               return TOKEN(LET);
"in"                return TOKEN(IN);
"begin"             return TOKEN(TBEGIN);
"end"               return TOKEN(TEND);
{number}            return ITOKEN(INT);
{identifier}        { yylval.ival = names_getid(yytext); return NAME; }
";;"                return TOKEN(TWOSEMI);
";"                 return TOKEN(SEMI);
"("                 return TOKEN(LPAREN);
")"                 return TOKEN(RPAREN);
"+"                 return TOKEN(PLUS);
"-"                 return TOKEN(MINUS);
"*"                 return TOKEN(MUL);
"/"                 return TOKEN(DIV);
"="                 return TOKEN(EQUAL);
{whitespace}        ;

"(*"                { BEGIN(comment); }
<comment>{
    "(*"            { ++comdp; }
    "*"+")"            { if (comdp == 0) BEGIN(INITIAL); else --comdp; }
    "*"+            ;
    [^(*\n]+        ;
    [(]             ;
    \n              ;
}


%%


