#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "environment.h"
#include "ast.h"
#include "values.h"

#include "natives.h"


#define ADD(name, value) env = env_make(names_getid(name), value, env);

void addenv(env_t **, const char *name, value_t *value);


env_t *env_init(void) {
    // init standard objects
    env_t *env = NULL;

    ADD("+", value_make_natfun2(native_addi));
    ADD("-", value_make_natfun2(native_subi));
    ADD("*", value_make_natfun2(native_muli));
    ADD("/", value_make_natfun2(native_divi));

    ADD("+.", value_make_natfun2(native_addf)); 
    ADD("-.", value_make_natfun2(native_subf));
    ADD("*.", value_make_natfun2(native_mulf));
    ADD("/.", value_make_natfun2(native_divf));

    ADD("print_string", value_make_natfun1(native_print_string));

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



