#include <stdlib.h>

#include "names.h"
#include "ast.h"
#include "environment.h"
#include "types.h"
#include "values.h"


#define DECLVAL() \
    value_t *val = malloc(sizeof(value_t)); \
    if (val == NULL) return NULL;

MAKEVAL(unit) (void) {
    DECLVAL();
    val->type = type_make_unit();
    return val;
}

MAKEVAL(int) (int value) {
    DECLVAL();
    val->type = type_make_int();
    val->valInt = value;
    return val;
}

MAKEVAL(float) (float value) {
    DECLVAL();
    val->type = type_make_float();
    val->valFloat = value;
    return val;
}

MAKEVAL(bool) (bool value) {
    DECLVAL();
    val->type = type_make_bool();
    val->valBool = value;
    return val;
}

MAKEVAL(string) (char *value) {
    DECLVAL();
    val->type = type_make_string();
    val->valString = value;
    return val;
}

MAKEVAL(natfun1) (natfun1_t fun, typedata_t *from, typedata_t *to) {
    DECLVAL();
    val->type = type_make_natfun1(from, to);
    val->valNatfun1 = fun;
    return val;
}

MAKEVAL(natfun2) (natfun2_t fun, typedata_t *from1, typedata_t *from2, typedata_t *to) {
    DECLVAL();
    val->type = type_make_natfun2(from1, from2, to);
    val->valNatfun2 = fun;
    return val;
}

MAKEVAL(fun) (env_t *defsite, namelist_t *params, ast_t *body,
                              tdlist_t *args, typedata_t *to) {
    DECLVAL();
    val->type = type_make_fun(args, to);
    val->valFun.defsite = defsite;
    val->valFun.params = params;
    val->valFun.body = body;
    return val;
}

MAKEVAL(tuple) (vlist_t *elems, tdlist_t *types) {
    DECLVAL();
    val->type = type_make_tuple(types);
    val->valTuple = elems;
    return val;
}

