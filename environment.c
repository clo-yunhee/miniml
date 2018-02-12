#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "environment.h"
#include "ast.h"
#include "values.h"

#include "natives.h"


#define ADD(value) env = env_make(value, env);


env_t *env_init(void) {
    // init standard objects
    env_t *env = NULL;

    ADD(value_make_natfun2(name_addi, native_addi));
    ADD(value_make_natfun2(name_subi, native_subi));
    ADD(value_make_natfun2(name_muli, native_muli));
    ADD(value_make_natfun2(name_divi, native_divi));

    ADD(value_make_natfun2(name_addf, native_addf)); 
    ADD(value_make_natfun2(name_subf, native_subf));
    ADD(value_make_natfun2(name_mulf, native_mulf));
    ADD(value_make_natfun2(name_divf, native_divf));

    ADD(value_make_natfun1(name_print_string, native_print_string));

    return env;
}

env_t *env_make(value_t *value, env_t *tail) {
    env_t *env = malloc(sizeof(env_t));
    if (env == NULL) return NULL;
    env->value = value;
    env->next = tail;
    return env;
}


env_t *env_addvalue(value_t *value, env_t *tail) {
    return NULL;
}

