#ifndef _AST_H_
#define _AST_H_

typedef struct ast ast_t;
typedef struct astlist astlist_t;

struct astlist {
    ast_t *elem;
    astlist_t *next;
}

struct paramlist {
    int name;
    struct paramlist *next;
}

struct ast {
    enum {
        e_int, e_var,
        e_block, e_list
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
                 ast_t *expr; } exprFuncall;
        // e_bin
        struct { ast_t *left;
                 int op;
                 ast_t *right; } exprBinary;
        // e_letvar
        struct { int name;
                 ast_t *expr; } exprLetVar;
        // e_letfun
        struct { int name;
                 struct paramlist *params;
                 ast_t *expr; } exprLetFun;
    };
};

/* astlist */

/* paramlist */

/* ast */

#define MAKEAST(type) ast_t *ast_make_##type 

MAKEAST(integer) (int value);
MAKEAST(variable) (int name);
MAKEAST(block) (ast_t *ast);
MAKEAST(list) (astlist_t *list);
MAKEAST(funcall) (ast_t *fun, ast_t *expr);
MAKEAST(binary) (ast_t *left, int op, ast_t *right);
MAKEAST(letvar) (int name, ast_t *expr);
MAKEAST(letfun) (int name, struct paramlist *params, ast_t *expr);


#endif // _AST_H_
