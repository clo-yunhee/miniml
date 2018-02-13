#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "environment.h"
#include "ast.h"
#include "types.h"
#include "values.h"

#include "natives.h"


#define ADD(n, v) env = env_make(n, v, env);


env_t *env_init(void) {
    // init standard objects
    env_t *env = NULL;

    ADD(name_addi, value_make_natfun2(native_addi, type_make_int(), type_make_int(), type_make_int()));
    ADD(name_subi, value_make_natfun2(native_subi, type_make_int(), type_make_int(), type_make_int()));
    ADD(name_muli, value_make_natfun2(native_muli, type_make_int(), type_make_int(), type_make_int()));
    ADD(name_divi, value_make_natfun2(native_divi, type_make_int(), type_make_int(), type_make_int()));

    ADD(name_addf, value_make_natfun2(native_addf, type_make_float(), type_make_float(), type_make_float())); 
    ADD(name_subf, value_make_natfun2(native_subf, type_make_float(), type_make_float(), type_make_float()));
    ADD(name_mulf, value_make_natfun2(native_mulf, type_make_float(), type_make_float(), type_make_float()));
    ADD(name_divf, value_make_natfun2(native_divf, type_make_float(), type_make_float(), type_make_float()));

    ADD(name_compare, value_make_natfun2(native_compare, type_make_poly(0), type_make_poly(0), type_make_bool()));
    ADD(name_equal, value_make_natfun2(native_equal, type_make_poly(0), type_make_poly(0), type_make_bool()));
    ADD(name_lt, value_make_natfun2(native_lt, type_make_poly(0), type_make_poly(0), type_make_bool()));
    ADD(name_lte, value_make_natfun2(native_lte, type_make_poly(0), type_make_poly(0), type_make_bool()));
    ADD(name_gt, value_make_natfun2(native_gt, type_make_poly(0), type_make_poly(0), type_make_bool()));
    ADD(name_gte, value_make_natfun2(native_gte, type_make_poly(0), type_make_poly(0), type_make_bool()));

    ADD(name_print_string, value_make_natfun1(native_print_string, type_make_string(), type_make_unit()));

    return env;
}

env_t *env_make(int name, value_t *value, env_t *tail) {
    env_t *env = malloc(sizeof(env_t));
    if (env == NULL) return NULL;
    env->name = name;
    env->value = value;
    env->next = tail;
    return env;
}


