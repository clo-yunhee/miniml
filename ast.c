#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "ast.h"


static inline ast_t *makeast(int type) {
    ast_t *ast = malloc(sizeof(ast_t));
    ast->type = type;
    return ast;
}

MAKEAST(integer) (int value) {
    ast_t *ast = makeast(e_int);
    ast->exprInteger = value;
    return ast;
}

MAKEAST(variable) (int name) {
    ast_t *ast = makeast(e_var);
    ast->exprVariable = name;
    return ast
}

MAKEAST(block) (ast_t *ast) {
    ast_t *ast = makeast(e_block);
    ast->exprBlock = ast;
    return ast;
}

MAKEAST(list) (astlist_t *list) {
    ast_t *ast = makeast(e_list);
    ast->exprList = list;
    return ast;
}

MAKEAST(funcall) (ast_t *fun, ast_t *expr) {
    ast_t *ast = makeast(e_funcall);
    ast->function = fun;
    ast->expr = expr;
    return ast;
}

MAKEAST(binary) (ast_t *left, int op, ast_t *right) {
    ast_t *ast = makeast(e_bin);
    ast->left = left;
    ast->op = op;
    ast->right = right;
    return ast;
}

MAKEAST(letvar) (int name, ast_t *expr) {
    ast_t *ast = makeast(e_letvar);
    ast->name = name;
    ast->expr = expr;
    return ast;
}

MAKEAST(letfun) (int name, struct paramlist *params, ast_t *expr) {
    ast_t *ast = makeast(e_letfun);
    ast->name = name;
    ast->params = params;
    ast->expr = expr;
    return ast;
}




