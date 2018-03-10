#include "infer.h"


TypedAst *typed_make(Ast *ast, int number, Type *xtype) {
    TypedAst *typed = malloc(sizeof(TypedAst));
    if (typed == NULL) return NULL;

    memcpy(typed, ast, sizeof(Ast));
    typed->xtype = xtype;

    return typed;
}


Substitution *subst_make(int name, Type *type) {
    Substitution *st = malloc(sizeof(Substitution));
    if (st == NULL) return NULL;

    st->name = name;
    st->type = type;
    return st;
}


Constraint *cons_make(Type *first, Type *second) {
    Constraint *cons = malloc(sizeof(Constraint));
    if (cons == NULL) return NULL;

    cons->first = first;
    cons->second = second;

    return cons;
}

