#include "common.h"

Env *run_list(AstList *list) {
    Env *env = env_init();

    ListIterator it;
    list_iterate(&list, &it);

    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        Env *start = env;
        run_expr(&env, expr);

        env_printrange(env, start);
    }

    return env;
}

void run_expr(Env **env, Ast *expr) {
    NameList *names;
    Type *type = visit_type(*env, expr, &names);

    if (type_equ(type, terror)) return; // ignore if error

    Value *value = visit_eval(*env, expr);

    if (list_length(names) == 1) { // add one entry if it's a single name
        int name = *(int *) list_data(names);
        *env = env_make(name, type, value, *env);
    } else { // add whole tuple otherwise
        *env = env_addlist(names, type->typeTuple, value->valTuple, *env);
    }
}

