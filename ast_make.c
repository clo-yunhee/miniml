#include "common.h"

#define DECLAST(t) \
    ast_t *ast = malloc(sizeof(ast_t)); \
    if (ast == NULL) return NULL; \
    ast->type = t;


MAKEAST(unit) (void) {
    DECLAST(e_unit);
    return ast;
}

MAKEAST(integer) (int value) {
    DECLAST(e_int);
    ast->exprInteger = value;
    return ast;
}

MAKEAST(float) (float value) {
    DECLAST(e_float);
    ast->exprFloat = value;
    return ast;
}

MAKEAST(bool) (bool value) {
    DECLAST(e_bool);
    ast->exprBool = value;
    return ast;
}

MAKEAST(string) (char *value) {
    DECLAST(e_string);
    ast->exprString = value;
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

MAKEAST(list) (AstList *list) {
    DECLAST(e_list);
    ast->exprList = list;
    return ast;
}

MAKEAST(funcall) (ast_t *fun, AstList *args) {
    DECLAST(e_funcall);
    ast->exprFunCall.function = fun;
    ast->exprFunCall.args = args;
    return ast;
}

MAKEAST(unary) (int op, ast_t *right) {
    // an unary operator is an infix function with one parameter
    return ast_make_funcall(ast_make_variable(op), list_new(right));
}

MAKEAST(binary) (ast_t *left, int op, ast_t *right) {
    // a binary operator is an infix function with two parameters
    AstList *args = list_new(left);
    list_append(&args, right);
    return ast_make_funcall(ast_make_variable(op), args);
}

MAKEAST(let) (NameList *names,
              bool rec, NameList *params,
              ast_t *expr, ast_t *block) {
    DECLAST(e_let);
    ast->exprLet.names = names;
    ast->exprLet.rec = rec;
    ast->exprLet.params = params;
    ast->exprLet.expr = expr;
    ast->exprLet.block = block;
    return ast;
}

MAKEAST(if) (ast_t *cond, ast_t *bIf,
                          ast_t *bElse) {
    DECLAST(e_if);
    ast->exprIf.cond = cond;
    ast->exprIf.bIf = bIf;
    ast->exprIf.bElse = bElse;
    return ast;
}

MAKEAST(tuple) (AstList *exprs) {
    DECLAST(e_tuple);
    ast->exprTuple = exprs;
    return ast;
}


