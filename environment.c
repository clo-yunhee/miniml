#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "environment.h"
#include "ast.h"
#include "types.h"
#include "values.h"

#include "natives.h"

#define P(x) (x)

#define ADD(n, t, v) env = env_make(n, t, v, env);

#define ADDNAT1(fn, tx, ty)        ADD(name_##fn, type_natfun1(tx, ty), value_make_natfun1(native_##fn))
#define ADDNAT2(fn, tx, ty, tz)    ADD(name_##fn, type_natfun2(tx, ty, tz), value_make_natfun2(native_##fn))

env_t *env_init(void) {
    // init standard objects
    env_t *env = NULL;

    /* ( + ) : int -> int -> int */
    /* ( - ) : int -> int -> int */
    /* ( * ) : int -> int -> int */ 
    /* ( / ) : int -> int -> int */    
    ADDNAT2(addi, tint, tint, tint);
    ADDNAT2(subi, tint, tint, tint);
    ADDNAT2(muli, tint, tint, tint);
    ADDNAT2(divi, tint, tint, tint);

    /* ( +. ) : float -> float -> float */
    /* ( -. ) : float -> float -> float */
    /* ( *. ) : float -> float -> float */
    /* ( /. ) : float -> float -> float */
    ADDNAT2(addf, tfloat, tfloat, tfloat);
    ADDNAT2(subf, tfloat, tfloat, tfloat);
    ADDNAT2(mulf, tfloat, tfloat, tfloat);
    ADDNAT2(divf, tfloat, tfloat, tfloat);

    /* compare : 'a -> 'a -> int */
    /* ( = ) : 'a -> 'a -> bool  */
    /* ( < ) : 'a -> 'a -> bool  */
    /* ( <= ) : 'a -> 'a -> bool */
    /* ( > ) : 'a -> 'a -> bool  */
    /* ( >= ) : 'a -> 'a -> bool */
    ADDNAT2(compare, tpoly1, tpoly1, tint);
    ADDNAT2(equal, tpoly1, tpoly1, tbool);
    ADDNAT2(lt, tpoly1, tpoly1, tbool);
    ADDNAT2(lte, tpoly1, tpoly1, tbool);
    ADDNAT2(gt, tpoly1, tpoly1, tbool);
    ADDNAT2(gte, tpoly1, tpoly1, tbool);

    /* print_string : string -> unit */
    ADDNAT1(print_string, tstring, tunit);

    return env;
}

env_t *env_make(int name, typedata_t *type, value_t *value, env_t *tail) {
    env_t *env = malloc(sizeof(env_t));
    if (env == NULL) return NULL;
    env->name = name;
    env->type = type;
    env->value = value;
    env->next = tail;
    return env;
}

env_t *env_addlist(namelist_t *names, tdlist_t *types, vlist_t *values, env_t *tail) {
    env_t *env = tail;

    int name;
    typedata_t *type;
    value_t *value;

    while (names != NULL) {
        name = names->name;
        type = (types != NULL ? types->elem : NULL);
        value = (values != NULL ? values->elem : NULL);

        env = env_make(name, type, value, env);
    
        if (types != NULL) types = types->next;
        if (values != NULL) values = values->next;
        names = names->next;
    }

    return env;
}

void env_print(env_t *env) {
    if (env->name == NO_NAME) {
        printf("-");
    } else {
        printf("val %s", names_getnm(env->name));
    }
    printf(" : ");
    type_print(env->type);
    printf(" = ");
    value_print(env->value);
    printf("\n");
}

void env_printrange(env_t *env, env_t *from) {
    if (env == NULL || env == from) return;
    env_printrange(env->next, from);
    env_print(env);
}

// print in postfix order, as the head is the last element added
void env_printall(env_t *env) {
    env_printrange(env, NULL);
}
