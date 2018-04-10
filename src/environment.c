#include "common.h"

#define ADD(n, t, v) //env = env_make(n, t, v, env);

#define ADDNAT1(fn, tx, ty)        ADD(name_##fn, type_fun1(tx, ty), value_make_natfun1(native_##fn))
#define ADDNAT2(fn, tx, ty, tz)    ADD(name_##fn, type_fun2(tx, ty, tz), value_make_natfun2(native_##fn))

Env *env_init(void) {
    // init standard objects
    Env *env = NULL;

    env = natives_env(env);

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
    /* print_int : int -> unit       */
    /* print_float : float -> unit   */
    /* print_bool : bool -> unit     */
    ADDNAT1(print_string, tstring, tunit);
    ADDNAT1(print_int, tint, tunit);
    ADDNAT1(print_float, tfloat, tunit);
    ADDNAT1(print_bool, tbool, tunit);

    /* int_of_float : float -> int */
    /* float_of_int : int -> float */
    ADDNAT1(int_of_float, tfloat, tint);
    ADDNAT1(float_of_int, tint, tfloat);

    /* hd : 'a list -> 'a      */
    /* tl : 'a list -> 'a list */
    ADDNAT1(hd, type_list(tpoly), tpoly);
    ADDNAT1(tl, type_list(tpoly), type_list(tpoly));

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
    Value *value = vunit;

    while (list_iter_has_more(&nameIt)) {
        name = *(int*) list_iter_next(&nameIt);
        type = list_iter_next(&typeIt);
        /* this is needed for a type-environment */
        if (values != NULL) {
            value = list_iter_next(&valueIt);
        }

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

void env_free(Env *env) {
    if (env == NULL) return;
    env_free(env->next);
    free(env);
}
