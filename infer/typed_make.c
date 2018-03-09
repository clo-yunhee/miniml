#include "infer.h"


TypedAst *typed_make(Ast *ast, int number, Type *xtype) {
    TypedAst *typed = malloc(sizeof(TypedAst));

    memcpy(typed, ast, sizeof(Ast));
    typed->xtype = xtype;

    return typed;
}
