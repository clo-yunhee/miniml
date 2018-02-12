#ifndef _AST_H_
#define _AST_H_

#include <stdbool.h>
#include <stddef.h>

typedef struct ast ast_t;
typedef struct astlist astlist_t;

struct astlist {
    size_t size;
    ast_t *elem;
    struct astlist *next;
};

struct ast {
    enum {
        e_unit, e_int, e_float, e_bool,
        e_string, e_var,
        e_block, e_list,
        e_funcall,
        e_let, e_if, e_tuple
    } type;
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
        ast_t *exprBlock;
        // e_list
        astlist_t *exprList;
        // e_funcall
        struct { ast_t *function;
                 astlist_t *args; } exprFunCall;
        // e_let
        struct { namelist_t *names;
                 bool rec;
                 namelist_t *params;
                 ast_t *expr;
                 ast_t *block; } exprLet;
        // e_if
        struct { ast_t *cond;
                 ast_t *bIf;
                 ast_t *bElse; } exprIf;
        // e_tuple
        astlist_t *exprTuple;
    };
};

/* token */
const char *token_name(int t);
void token_print(int t);

/* astlist */

astlist_t *alist_make(ast_t *head, astlist_t *tail);
astlist_t *alist_rev(astlist_t *list);
void alist_free(astlist_t *list);
void alist_print(astlist_t *list);

/* ast */

#define MAKEAST(type) ast_t *ast_make_##type 

MAKEAST(unit) (void);
MAKEAST(integer) (int value);
MAKEAST(float) (float value);
MAKEAST(bool) (bool value);
MAKEAST(string) (char *value);
MAKEAST(variable) (int name);

MAKEAST(block) (ast_t *ast);
MAKEAST(list) (astlist_t *list);

MAKEAST(funcall) (ast_t *fun, astlist_t *args);
MAKEAST(unary) (int op, ast_t *right);
MAKEAST(binary) (ast_t *left, int op, ast_t *right);

MAKEAST(let) (namelist_t *names, // name == -1  ->  anonymous decl
              bool rec, namelist_t *params, // params != NULL  ->  fun decl
              ast_t *expr, ast_t *block); // block != NULL  ->  let in

MAKEAST(if) (ast_t *cond, ast_t *bIf,
                          ast_t *bElse); // bElse != NULL  ->  if-else

MAKEAST(tuple) (astlist_t *elems);

void ast_free(ast_t *ast);
void ast_print(ast_t *ast);

#endif // _AST_H_
