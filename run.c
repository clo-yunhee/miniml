#include "common.h" 

void run_list(AstList *list) {
    /*
    alist_print(list);
    printf("\n\n");
    */

    Env *env = env_init();

    ListIterator it;
    list_iterate(&list, &it);

    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        Env *start = env;
        run_expr(&env, expr);

        env_printrange(env, start);
    }
}

void run_expr(Env **env, Ast *expr) {
    NameList *names = ast_names(expr);
    Type *type = infer_type(*env, expr);

    if (type_equ(type, terror)) {
        fprintf(stderr, "Typing error\n");
        return; // ignore if error
    }

    Value *value = visit_eval(*env, expr);

    if (list_length(names) == 1) { // add one entry if it's a single name
        int name = *(int *) list_data(names);
        *env = env_make(name, type, value, *env);
    } else { // add whole tuple otherwise
        *env = env_addlist(names, type->typeTuple, value->valTuple, *env);
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
