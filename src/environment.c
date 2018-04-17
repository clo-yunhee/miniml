#include "common.h"

Env *env_init(void) {
    return natives_env(NULL);
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
