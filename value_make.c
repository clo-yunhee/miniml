#include "common.h"


#define DECLVAL(t) \
    value_t *val = malloc(sizeof(value_t)); \
    if (val == NULL) return NULL; \
    val->type = t;

MAKEVAL(unit) (void) {
    DECLVAL(et_unit);
    return val;
}

MAKEVAL(int) (int value) {
    DECLVAL(et_int);
    val->valInt = value;
    return val;
}

MAKEVAL(float) (float value) {
    DECLVAL(et_float);
    val->valFloat = value;
    return val;
}

MAKEVAL(bool) (bool value) {
    DECLVAL(et_bool);
    val->valBool = value;
    return val;
}

MAKEVAL(string) (char *value) {
    DECLVAL(et_string);
    val->valString = value;
    return val;
}

MAKEVAL(natfun1) (natfun1_t fun) {
    DECLVAL(et_natfun1);
    val->valNatfun1 = fun;
    return val;
}

MAKEVAL(natfun2) (natfun2_t fun) {
    DECLVAL(et_natfun2);
    val->valNatfun2 = fun;
    return val;
}

MAKEVAL(fun) (env_t *defsite, NameList *params, ast_t *body) {
    DECLVAL(et_fun);
    val->valFun.defsite = defsite;
    val->valFun.params = params;
    val->valFun.body = body;
    return val;
}

MAKEVAL(tuple) (ValueList *elems) {
    DECLVAL(et_tuple);
    val->valTuple = elems;
    return val;
}

MAKEVAL(error) (void) {
    DECLVAL(et_error);
    return val;
}
