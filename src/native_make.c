#include "common.h"

/**
 * Initialises a native function entry, types not initialised
 */
NativeDesc *native_make(const char *name, native_func_t func) {
    NativeDesc *fn = malloc(sizeof(NativeDesc));
    memset(fn, 0, sizeof(NativeDesc));

    fn->name = names_getid(name);
    fn->func = func;
    fn->consList = NULL;

    return fn;
}

/**
 * Sets argument types, NULL terminated vararg list
 */
void native_args(NativeDesc *fn, Type *out, ...) {
    va_list ap;
    va_start(ap, out);

    fn->retType = out;
    fn->args = NULL;

    Type *arg;
    while ((arg = va_arg(ap, Type *)) != NULL) {
        list_append(&fn->args, arg);
    }

    va_end(ap);
}

/**
 * Sets argument type constraints
 */
void native_cons(NativeDesc *fn, Type *first, Type *second) {
    struct native_cons *cons = malloc(sizeof(struct native_cons));
    cons->first = first;
    cons->second = second;

    list_append(&fn->consList, cons);
}
