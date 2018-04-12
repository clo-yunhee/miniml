#include "common.h"

/*--- Cons functions ---*/

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
void native_cons(NativeDesc *fn, unsigned int i, unsigned int j) {
    struct natcons *cons = malloc(sizeof(struct natcons));
    cons->i = i;
    cons->j = j;

    list_append(&fn->consList, cons);
}

/**
 * Turns the index into a type or NULL if error
 */
Type *native_actual_type(NativeDesc *fn, unsigned int i) {
    if (i >= 1 && i <= list_length(fn->args)) { // arg count
        return list_nth_data(fn->args, i);
    } else if (i == 0) { // return type
        return fn->retType;
    }
    return NULL;
}

/**
 * Applies the function to the argument list
 */
Value *native_apply(NativeDesc *fn, ValueList *args) {
    fprintf(stderr, "<<< TODO native apply >>>\n");

    return vunit;
}

/*--- Add functions ---*/


static NatfnList *functions = NULL;


Env *natives_env(Env *env) {
    ListIterator it;
    list_iterate(&functions, &it);
    
    while (list_iter_has_more(&it)) {
        NativeDesc *fn = list_iter_next(&it);

        env = env_make(fn->name, type_native(fn), value_make_native(fn), env);
    }

    return env;
}

void natives_init() {
    NativeDesc *fn;
    
    fn = native_make("=", (native_func_t) native_equal);
    native_args(fn, tbool, tpoly, tpoly, NULL);
    native_cons(fn, 1, 2);
    list_append(&functions, fn);

    fn = native_make("hd", (native_func_t) native_hd);
    native_args(fn, tpoly, tpoly, NULL);
    list_append(&functions, fn);

    fn = native_make("tl", (native_func_t) native_tl);
    native_args(fn, tpoly, tpoly, NULL);
    native_cons(fn, 1, 0);
    list_append(&functions, fn);
}

