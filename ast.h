#ifndef _AST_H_
#define _AST_H_

#include <stdbool.h>
#include <stddef.h>

typedef struct ast Ast;

typedef enum ast_type { 
    e_unit, e_int, e_float, e_bool,
    e_string, e_var,
    e_block, e_list,
    e_funcall,
    e_let, e_if, e_tuple
} AstType;

struct ast {
    AstType type;
    union {
        // e_int
        int exprInteger;
        // e_float
        float exprFloat;
        // e_bool
        bool exprBool;
        // e_string
        char *exprString;
        // e_var
        int exprVariable;
        // e_block
        Ast *exprBlock;
        // e_list
        AstList *exprList;
        // e_funcall
        struct { Ast *function;
                 AstList *args; } exprFunCall;
        // e_let
        struct { NameList *names;
                 bool rec;
                 NameList *params;
                 Ast *expr;
                 Ast *block; } exprLet;
        // e_if
        struct { Ast *cond;
                 Ast *bIf;
                 Ast *bElse; } exprIf;
        // e_tuple
        AstList *exprTuple;
    };
};

/* token */

const char *token_name(int t);
void token_print(int t);

char *escape(const char *str);
char *unescape(const char *str);

/* list */

void alist_free(AstList *list);
void alist_print(AstList *list);

/* ast */

#define MAKEAST(type) Ast *ast_make_##type 

MAKEAST(unit) (void);
MAKEAST(integer) (int value);
MAKEAST(float) (float value);
MAKEAST(bool) (bool value);
MAKEAST(string) (char *value);
MAKEAST(variable) (int name);

MAKEAST(block) (Ast *ast);
MAKEAST(list) (AstList *list);

MAKEAST(funcall) (Ast *fun, AstList *args);
MAKEAST(unary) (int op, Ast *right);
MAKEAST(binary) (Ast *left, int op, Ast *right);

MAKEAST(let) (NameList *names, // name == -1  ->  anonymous decl
              bool rec, NameList *params, // params != NULL  ->  fun decl
              Ast *expr, Ast *block); // block != NULL  ->  let in

MAKEAST(if) (Ast *cond, Ast *bIf,
                          Ast *bElse); // bElse != NULL  ->  if-else

MAKEAST(tuple) (AstList *elems);

void ast_free(Ast *ast);
void ast_print(Ast *ast);

#endif // _AST_H_
