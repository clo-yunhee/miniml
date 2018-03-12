#include "common.h"

#define P(x) (x)

#define ADD(n, t, v) env = env_make(n, t, v, env);

#define ADDNAT1(fn, tx, ty)        ADD(name_##fn, type_fun1(tx, ty), value_make_natfun1(native_##fn))
#define ADDNAT2(fn, tx, ty, tz)    ADD(name_##fn, type_fun2(tx, ty, tz), value_make_natfun2(native_##fn))

Env *env_init(void) {
    // init standard objects
    Env *env = NULL;

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
    ADDNAT2(compare, tpoly, tpoly, tint);
    ADDNAT2(equal, tpoly, tpoly, tbool);
    ADDNAT2(lt, tpoly, tpoly, tbool);
    ADDNAT2(lte, tpoly, tpoly, tbool);
    ADDNAT2(gt, tpoly, tpoly, tbool);
    ADDNAT2(gte, tpoly, tpoly, tbool);

    /* ( && ) : bool -> bool -> bool */
    /* ( || ) : bool -> bool -> bool */
    ADDNAT2(and, tbool, tbool, tbool);
    ADDNAT2(or, tbool, tbool, tbool);

    /* print_string : string -> unit */
    ADDNAT1(print_string, tstring, tunit);

    return env;
}

Env *env_make(int name, Type *type, Value *value, Env *tail) {
    Env *env = malloc(sizeof(Env));
    if (env == NULL) return NULL;
    env->name = name;
    env->type = type;
    env->value = value;
    env->next = tail;
    return env;
}

Env *env_addlist(NameList *names, TypeList *types, ValueList *values, Env *tail) {
    Env *env = tail;

    ListIterator nameIt, typeIt, valueIt;
    list_iterate(&names, &nameIt);
    list_iterate(&types, &typeIt);
    list_iterate(&values, &valueIt);

    int name;
    Type *type;
    Value *value;

    while (list_iter_has_more(&nameIt)
                && list_iter_has_more(&typeIt)
                && list_iter_has_more(&valueIt)) {
        name = *(int*) list_iter_next(&nameIt);
        type = list_iter_next(&typeIt);
        value = list_iter_next(&valueIt);

        env = env_make(name, type, value, env);
    }

    return env;
}

Env *env_find(int name, Env *env) {
    if (env == NULL) return NULL;
    
    if (env->name == name) return env;
    else return env_find(name, env->next);
}

void env_print(Env *env) {
    if (env->name == NO_NAME) {
        printf("-");
    } else {
        const char *name = names_getnm(env->name);
        
        printf("val ");

        // print parentheses if it's a special id
        printf(isalpha(name[0]) ? "%s" : "( %s )", name);
    }
    printf(" : ");
    type_print(env->type);
    printf(" = ");
    value_print(env->value);
    printf("\n");
}

void env_printrange(Env *env, Env *from) {
    if (env == NULL || env == from) return;
    env_printrange(env->next, from);
    env_print(env);
}

// print in postfix order, as the head is the last element added
void env_printall(Env *env) {
    env_printrange(env, NULL);
}
