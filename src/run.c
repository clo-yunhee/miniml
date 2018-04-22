#include "common.h" 

void run_list(AstList *list, bool do_value, bool *error) {
    /*
    alist_print(list);
    printf("\n\n");
    */

    Env *env = natives_env(NULL);

    ListIterator it;
    list_iterate(&list, &it);

    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        Env *start = env;
        run_expr(&env, expr, do_value, error);

        if (*error) {
            return;
        }

        if (do_value) {
            env_printrange(env, start);
        }
    } 
}

void run_expr(Env **env, Ast *expr, bool do_value, bool *error) {
    NameList *names;
    Type *type;
    Value *value;

    names = ast_names(expr);
    type = infer_type(*env, expr, error);

    if (*error) {
        return; // ignore if error
    }

    /* Default value to unit */
    value = do_value ? visit_eval(*env, expr, error) : vunit;

    if (*error) {
        return; // ignore if error
    }

    if (list_length(names) == 1) { // add one entry if it's a single name
        int name = *(int *) list_data(names);
        *env = env_make(name, type, value, *env);
    } else { // add whole tuple otherwise
        *env = env_addlist(
                names,
                type->typeTuple,
                /* Default values to unit in the env itself */
                do_value ? value->valTuple : NULL,
                *env 
        );
    }
}

NameList *ast_names(Ast *expr) {
    // needs to be a global let
    if (expr->type == e_let && expr->exprLet.block == NULL) {
        return expr->exprLet.names;
    } else {
        return list_new(nmalloc(NO_NAME));
    }
}
