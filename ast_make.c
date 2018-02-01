#include <stdio.h>
#include <stdlib.h>

#include "ast.h"

static inline ast_t *makeast(int type) {
    ast_t *__ast = malloc(sizeof(ast_t));
    __ast->type = type;
    return __ast;
}

MAKEAST(integer) (int value) {
    ast_t *ast = makeast(e_int);
    ast->exprInteger = value;
    return ast;
}

MAKEAST(variable) (int name) {
    ast_t *ast = makeast(e_var);
    ast->exprVariable = name;
    return ast;
}

MAKEAST(block) (ast_t *block) {
    ast_t *ast = makeast(e_block);
    ast->exprBlock = block;
    return ast;
}

MAKEAST(list) (astlist_t *list) {
    ast_t *ast = makeast(e_list);
    ast->exprList = list;
    return ast;
}

MAKEAST(funcall) (ast_t *fun, ast_t *expr) {
    ast_t *ast = makeast(e_funcall);
    ast->exprFunCall.function = fun;
    ast->exprFunCall.expr = expr;
    return ast;
}

MAKEAST(binary) (ast_t *left, int op, ast_t *right) {
    ast_t *ast = makeast(e_bin);
    ast->exprBinary.left = left;
    ast->exprBinary.op = op;
    ast->exprBinary.right = right;
    return ast;
}

MAKEAST(letvar) (int name, ast_t *expr) {
    ast_t *ast = makeast(e_letvar);
    ast->exprLetVar.name = name;
    ast->exprLetVar.expr = expr;
    return ast;
}

MAKEAST(letfun) (int name, struct paramlist *params, ast_t *expr) {
    ast_t *ast = makeast(e_letfun);
    ast->exprLetFun.name = name;
    ast->exprLetFun.params = params;
    ast->exprLetFun.expr = expr;
    return ast;
}




