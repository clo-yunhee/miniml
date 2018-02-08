#include <stdio.h>
#include <stdlib.h>

#include "ast.h"

#define DECLAST(t) \
    ast_t *ast = malloc(sizeof(ast_t)); \
    if (ast == NULL) return NULL; \
    ast->type = t;


MAKEAST(integer) (int value) {
    DECLAST(e_int);
    ast->exprInteger = value;
    return ast;
}

MAKEAST(variable) (int name) {
    DECLAST(e_var);
    ast->exprVariable = name;
    return ast;
}

MAKEAST(block) (ast_t *block) {
    DECLAST(e_block);
    ast->exprBlock = block;
    return ast;
}

MAKEAST(list) (astlist_t *list) {
    DECLAST(e_list);
    ast->exprList = list;
    return ast;
}

MAKEAST(funcall) (ast_t *fun, astlist_t *args) {
    DECLAST(e_funcall);
    ast->exprFunCall.function = fun;
    ast->exprFunCall.args = args;
    return ast;
}

MAKEAST(binary) (ast_t *left, int op, ast_t *right) {
    DECLAST(e_bin);
    ast->exprBinary.left = left;
    ast->exprBinary.op = op;
    ast->exprBinary.right = right;
    return ast;
}

MAKEAST(let) (int name, struct paramlist *params,
              ast_t *expr, ast_t *block) {
    DECLAST(e_let);
    ast->exprLet.name = name;
    ast->exprLet.params = params;
    ast->exprLet.expr = expr;
    ast->exprLet.block = block;
    return ast;
}




