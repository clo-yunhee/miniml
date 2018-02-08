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
        e_let
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
                 astlist_t *args; } exprFunCall;
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

/* token */
const char *token_name(int t);
void token_print(int t);

/* astlist */

astlist_t *alist_make(ast_t *head, astlist_t *tail);
void alist_free(astlist_t *list);
void alist_print(astlist_t *list);

/* paramlist */

params_t *plist_make(int head, params_t *tail);
void plist_free(params_t *list);
void plist_print(params_t *list);

/* ast */

#define MAKEAST(type) ast_t *ast_make_##type 

MAKEAST(integer) (int value);
MAKEAST(variable) (int name);
MAKEAST(block) (ast_t *ast);
MAKEAST(list) (astlist_t *list);
MAKEAST(funcall) (ast_t *fun, astlist_t *args);
MAKEAST(binary) (ast_t *left, int op, ast_t *right);
MAKEAST(let) (int name, params_t *params,
              ast_t *expr, ast_t *block);

void ast_free(ast_t *ast);
void ast_print(ast_t *ast);

#endif // _AST_H_
