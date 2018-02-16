#include "common.h"


#define DECLTYPE(t) \
    Type *type = malloc(sizeof(Type)); \
    if (type == NULL) return NULL; \
    type->type = t;

MAKETYPE(unit) (void) {
    DECLTYPE(et_unit);
    return type;
}

MAKETYPE(int) (void) {
    DECLTYPE(et_int);
    return type;
}

MAKETYPE(float) (void) {
    DECLTYPE(et_float);
    return type;
}

MAKETYPE(bool) (void) {
    DECLTYPE(et_bool);
    return type;
}

MAKETYPE(string) (void) {
    DECLTYPE(et_string);
    return type;
}

MAKETYPE(natfun1) (Type *from, Type *to) {
    DECLTYPE(et_natfun1);
    type->typeNatfun1.from = from;
    type->typeNatfun1.to = to;
    return type;
}

MAKETYPE(natfun2) (Type *from1, Type *from2, Type *to) {
    DECLTYPE(et_natfun2);
    type->typeNatfun2.from1 = from1;
    type->typeNatfun2.from2 = from2;
    type->typeNatfun2.to = to;
    return type;
}

MAKETYPE(fun) (TypeList *args, Type *to) {
    DECLTYPE(et_fun);
    type->typeFun.args = args;
    type->typeFun.to = to;
    return type;
}

MAKETYPE(tuple) (TypeList *elems) {
    DECLTYPE(et_tuple);
    type->typeTuple = elems;
    return type;
}

MAKETYPE(poly) (int number) {
    DECLTYPE(et_poly);
    type->typePoly = number;
    return type;
}

MAKETYPE(error) (void) {
    DECLTYPE(et_error);
    return type;
}
