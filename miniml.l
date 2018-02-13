%option yylineno
%{
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#include "names.h"
#include "ast.h"

#include "miniml.tab.h"

void yyerror(const char *s);

int stoi(const char *str);
float stof(const char *str);

#define TOKEN(tok)        (yylval.ival = (tok))
#define ITOKEN(tok)       (yylval.ival = stoi(yytext), (tok))
#define FTOKEN(tok)       (yylval.fval = stof(yytext), (tok))
#define NTOKEN(tok)       (yylval.ival = names_getid(yytext), (tok))
#define STOKEN(tok, str)  (yylval.sval = (str), (tok))

int comdp = 0;
%}
%x comment

whitespace          [ \t\r\n\f]+

integer             [[:digit:]]+
float               [[:digit:]]+("."[[:digit:]]*)?(("e"|"E")("+"|"-")?[[:digit:]]+)?
boolean             "true"|"false"

escape              \\([\\"'ntbr ])
string              \"({escape}|[^"\\])*\"

identifier          [[:alpha:]_][[:alnum:]_]*

%%

"let"               return TOKEN(LET);
"in"                return TOKEN(IN);
"begin"             return TOKEN(TBEGIN);
"end"               return TOKEN(TEND);
"if"                return TOKEN(IF);
"else"              return TOKEN(ELSE);
"then"              return TOKEN(THEN);
"function"          return TOKEN(FUN);
"rec"               return TOKEN(REC);

{integer}           return ITOKEN(INT);
{float}             return FTOKEN(FLOAT);
{boolean}           return ITOKEN(BOOL);
{string}            return STOKEN(STRING, strdup(yytext));
{identifier}        return NTOKEN(NAME);

";;"                return TOKEN(TWOSEMI);
";"                 return TOKEN(SEMI);
"("                 return TOKEN(LPAREN);
")"                 return TOKEN(RPAREN);
","                 return TOKEN(COMMA);
"->"                return TOKEN(ARROW);

"+"                 return NTOKEN(PLUS);
"-"                 return NTOKEN(MINUS);
"*"                 return NTOKEN(MUL);
"/"                 return NTOKEN(DIV);

"+."                return NTOKEN(FPLUS);
"-."                return NTOKEN(FMINUS);
"*."                return NTOKEN(FMUL);
"/."                return NTOKEN(FDIV);

"="                 return NTOKEN(EQUAL);
"<>"                return NTOKEN(NOTEQU);
"!"                 return NTOKEN(NOT);
">"                 return NTOKEN(GT);
">="                return NTOKEN(GTE);
"<"                 return NTOKEN(LT);
"<="                return NTOKEN(LTE);

{whitespace}        ;

"(*"                { BEGIN(comment); }
<comment>"(*"           { ++comdp; }
<comment>"*"+")"        { if (comdp == 0) BEGIN(INITIAL); else --comdp; }
<comment>"*"+           ;
<comment>[^(*\n]+       ;
<comment>[(]            ;
<comment>\n             ;

%%

int stoi(const char *str) {
    char *end;
    long v;
    
    errno = 0;
    v = strtol(str, &end, 10);

    if ((*end != '\0' || (errno == ERANGE
                && (v == LONG_MIN || v == LONG_MAX)))
            || (v < INT_MIN || v > INT_MAX)) {
        yyerror("Error converting string to int");
        exit(EXIT_FAILURE);
    }

    return v;
}

float stof(const char *str) {
    char *end;
    float v;

    errno = 0;
    v = strtof(str, &end);

    if (*end != '\0' || (errno == ERANGE && v == HUGE_VALF)) {
        yyerror("Error converting string to float");
        exit(EXIT_FAILURE);
    }

    return v;
}


