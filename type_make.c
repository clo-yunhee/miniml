#include "common.h"


Type *new_type(TypeEnum et) {
    Type *type = malloc(sizeof(Type));
    if (type == NULL) return NULL;
    type->type = et;
    return type;
}


MAKETYPE(fun1) (Type *from, Type *to) {
    TypeList *args = list_new(from);
    return type_fun(args, to);
}

MAKETYPE(fun2) (Type *from1, Type *from2, Type *to) {
    TypeList *args = list_new(from1);
    list_append(&args, from2);
    return type_fun(args, to);
}

MAKETYPE(fun) (TypeList *args, Type *to) {
    Type *type = new_type(et_fun);
    type->typeFun.args = args;
    type->typeFun.to = to;
    return type;
}

MAKETYPE(tuple) (TypeList *elems) {
    Type *type = new_type(et_tuple);
    type->typeTuple = elems;
    return type;
}

MAKETYPE(poly) (int number) {
    Type *type = new_type(et_poly);
    type->typePoly = number;
    return type;
}


static Type _error  = { .type = et_error };
static Type _unit   = { .type = et_unit };
static Type _int    = { .type = et_int };
static Type _float  = { .type = et_float };
static Type _bool   = { .type = et_bool };
static Type _string = { .type = et_string };
static Type _poly   = { .type = et_poly, .typePoly = 0 };

Type *terror = &_error;
Type *tunit = &_unit;
Type *tint = &_int;
Type *tfloat = &_float;
Type *tbool = &_bool;
Type *tstring = &_string;
Type *tpoly = &_poly;


