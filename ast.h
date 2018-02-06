#ifndef _AST_H_
#define _AST_H_

typedef struct ast ast_t;
typedef struct astlist astlist_t;
typedef struct paramlist params_t;

struct astlist {
    ast_t *elem;
    struct astlist *next;
};

struct paramlist {
    int name;
    struct paramlist *next;
};

struct ast {
    enum {
        e_int, e_var,
        e_block, e_list,
        e_funcall, e_bin,
        e_letvar, e_letfun
    } type;
    union {
        // e_int
        int exprInteger;
        // e_var
        int exprVariable;
        // e_block
        ast_t *exprBlock;
        // e_list
        astlist_t *exprList;
        // e_funcall
        struct { ast_t *function;
                 ast_t *expr; } exprFunCall;
        // e_bin
        struct { ast_t *left;
                 int op;
                 ast_t *right; } exprBinary;
        // e_let
        struct { int name;
                 params_t *params;
                 ast_t *expr;
                 ast_t *block; } exprLet;
    };
};

/* astlist */

astlist_t *alist_make(ast_t *head, astlist_t *tail);

/* paramlist */

params_t *plist_make(int head, params_t *tail);

/* ast */

#define MAKEAST(type) ast_t *ast_make_##type 

MAKEAST(integer) (int value);
MAKEAST(variable) (int name);
MAKEAST(block) (ast_t *ast);
MAKEAST(list) (astlist_t *list);
MAKEAST(funcall) (ast_t *fun, ast_t *expr);
MAKEAST(binary) (ast_t *left, int op, ast_t *right);
MAKEAST(let) (int name, params_t *params,
              ast_t *expr, ast_t *block);

#endif // _AST_H_
