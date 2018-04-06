#include "common.h"


#define DECLVAL(t) \
    Value *val = malloc(sizeof(Value)); \
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

MAKEVAL(float) (double value) {
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

MAKEVAL(natfun1) (NativeFunc1 fun) {
    DECLVAL(et_natfun1);
    val->valNatfun1 = fun;
    return val;
}

MAKEVAL(natfun2) (NativeFunc2 fun) {
    DECLVAL(et_natfun2);
    val->valNatfun2 = fun;
    return val;
}

MAKEVAL(fun) (Env *defsite, NameList *params, Ast *body) {
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

MAKEVAL(list) (Value *head, Value *tail) {
    DECLVAL(et_list);
    val->valList.head = head;
    val->valList.tail = tail;
    return val;
}

MAKEVAL(error) (void) {
    DECLVAL(et_error);
    return val;
}


static Value v_unit = { .type = et_unit };
static Value v_error = { .type = et_error };

Value *vunit = &v_unit;
Value *verror = &v_error;


