#include <stdlib.h>

#include "names.h"
#include "ast.h"
#include "values.h"


#define DECLVAL(t, n) \
    value_t *val = malloc(sizeof(value_t)); \
    if (val == NULL) return NULL; \
    val->name = n; \
    val->type = t;

MAKEVAL(unit) (void) {
    DECLVAL(et_unit, NO_NAME);
    return val;
}

MAKEVAL(int) (int name, int value) {
    DECLVAL(et_int, name);
    val->valInt = value;
    return val;
}

MAKEVAL(float) (int name, float value) {
    DECLVAL(et_float, name);
    val->valFloat = value;
    return val;
}

MAKEVAL(bool) (int name, bool value) {
    DECLVAL(et_bool, name);
    val->valBool = value;
    return val;
}

MAKEVAL(string) (int name, char *value) {
    DECLVAL(et_string, name);
    val->valString = value;
    return val;
}

MAKEVAL(natfun1) (int name, natfun1_t fun) {
    DECLVAL(et_natfun1, name);
    val->valNatfun1 = fun;
    return val;
}

MAKEVAL(natfun2) (int name, natfun2_t fun) {
    DECLVAL(et_natfun2, name);
    val->valNatfun2 = fun;
    return val;
}

MAKEVAL(fun) (int name, env_t *defsite, namelist_t *params, ast_t *body) {
    DECLVAL(et_fun, name);
    val->valFun.defsite = defsite;
    val->valFun.params = params;
    val->valFun.body = body;
    return val;
}

MAKEVAL(tuple) (int name, vlist_t *elems) {
    DECLVAL(et_tuple, name);
    val->valTuple = elems;
    return val;
}
