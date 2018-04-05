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


static Type t_error  = { .type = et_error };
static Type t_unit   = { .type = et_unit };
static Type t_int    = { .type = et_int };
static Type t_float  = { .type = et_float };
static Type t_bool   = { .type = et_bool };
static Type t_string = { .type = et_string };
static Type t_poly   = { .type = et_poly, .typePoly = 0 };

Type *terror = &t_error;
Type *tunit = &t_unit;
Type *tint = &t_int;
Type *tfloat = &t_float;
Type *tbool = &t_bool;
Type *tstring = &t_string;
Type *tpoly = &t_poly;


