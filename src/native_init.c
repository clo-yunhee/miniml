#include "common.h"


static NatfnList *functions = NULL;


#define arg(n) (type_poly(n))

#define mk_nat(name, func, ...) do { \
        fn = native_make((name), (native_func_t) native_##func ); \
        native_args(fn, __VA_ARGS__, NULL); \
    } while (false)

#define PUSH  list_append(&functions, fn)

#define mk_snat(name, ...) mk_nat(#name, name , __VA_ARGS__)

void natives_init() {
    NativeDesc *fn;
 
    //-- integer ops

    mk_nat("+", addi, tint, tint, tint); PUSH;
    mk_nat("-", subi, tint, tint, tint); PUSH;
    mk_nat("*", muli, tint, tint, tint); PUSH;
    mk_nat("/", divi, tint, tint, tint); PUSH;

    //-- float ops

    mk_nat("+.", addf, tfloat, tfloat, tfloat); PUSH;
    mk_nat("-.", subf, tfloat, tfloat, tfloat); PUSH;
    mk_nat("*.", mulf, tfloat, tfloat, tfloat); PUSH;
    mk_nat("/.", divf, tfloat, tfloat, tfloat); PUSH;

    //-- comparison

    mk_snat(compare, tint, tpoly, tpoly);
    native_cons(fn, arg(1), arg(2));
    PUSH;

    mk_nat("=", equal, tbool, tpoly, tpoly);
    native_cons(fn, arg(1), arg(2));
    PUSH;

    mk_nat("<", lt, tbool, tpoly, tpoly);
    native_cons(fn, arg(1), arg(2));
    PUSH;

    mk_nat("<=", lte, tbool, tpoly, tpoly);
    native_cons(fn, arg(1), arg(2));
    PUSH;

    mk_nat(">", gt, tbool, tpoly, tpoly);
    native_cons(fn, arg(1), arg(2));
    PUSH;

    mk_nat(">=", gte, tbool, tpoly, tpoly);
    native_cons(fn, arg(1), arg(2));
    PUSH;

    //-- and/or

    mk_nat("&&", and, tbool, tbool, tbool); PUSH;
    mk_nat("||", or, tbool, tbool, tbool); PUSH;

    //-- print
    
    mk_snat(print_string, tunit, tstring); PUSH;
    mk_snat(print_int, tunit, tint); PUSH;
    mk_snat(print_float, tunit, tfloat); PUSH;
    mk_snat(print_bool, tunit, tbool); PUSH;

    //-- conversion

    mk_snat(int_of_float, tint, tfloat); PUSH;
    mk_snat(float_of_int, tfloat, tint); PUSH;

    //-- lists

    mk_snat(hd, tpoly, tlist); PUSH;
    native_cons(fn, arg(1), type_list(arg(0)));
    PUSH;

    mk_snat(tl, tlist, tlist); PUSH;
    native_cons(fn, arg(0), arg(1));
    PUSH;
}


Env *natives_env(Env *env) {
    ListIterator it;
    list_iterate(&functions, &it);
    
    while (list_iter_has_more(&it)) {
        NativeDesc *fn = list_iter_next(&it);

        env = env_make(fn->name, type_native(fn), value_make_native(fn), env);
    }

    return env;
}

