#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "environment.h"
#include "ast.h"
#include "values.h"

#include "natives.h"


#define ADD(n, v) env = env_make(n, v, env);


env_t *env_init(void) {
    // init standard objects
    env_t *env = NULL;

    ADD(name_addi, value_make_natfun2(native_addi));
    ADD(name_subi, value_make_natfun2(native_subi));
    ADD(name_muli, value_make_natfun2(native_muli));
    ADD(name_divi, value_make_natfun2(native_divi));

    ADD(name_addf, value_make_natfun2(native_addf)); 
    ADD(name_subf, value_make_natfun2(native_subf));
    ADD(name_mulf, value_make_natfun2(native_mulf));
    ADD(name_divf, value_make_natfun2(native_divf));

    ADD(name_compare, value_make_natfun2(native_compare));
    ADD(name_equal, value_make_natfun2(native_equal));
    ADD(name_lt, value_make_natfun2(native_lt));
    ADD(name_lte, value_make_natfun2(native_lte));
    ADD(name_gt, value_make_natfun2(native_gt));
    ADD(name_gte, value_make_natfun2(native_gte));

    ADD(name_print_string, value_make_natfun1(native_print_string));

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


env_t *env_addvalue(int name, value_t *value, env_t *tail) {
    return NULL;
}

