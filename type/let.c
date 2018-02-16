#include "type.h"


TYPE(let) {
    NameList *names = let->exprLet.names;
    Type *typeExpr;

    unsigned int namecount = list_length(names);

    if (let->exprLet.params == NULL) { // it's a variable binding
        // don't support recursive variables
        if (let->exprLet.rec) {
            VERR("Recursive variable bindings aren't supported");
        }

        typeExpr = visit_type(env, let->exprLet.expr, NULL);
    } else { // it's a function binding
        
        // TODO: infer arguments types, for now only int
        
        Environment *bodyenv = env;
        TypeList *argtypes = NULL;
        NameList *params = let->exprLet.params;

        ListIterator paramIt;
        list_iterate(&params, &paramIt);
        while (list_iter_has_more(&paramIt)) {
            int param_name = *(int*) list_iter_next(&paramIt);

            Type *type = tint;
            list_prepend(&argtypes, type);

            bodyenv = Environmentmake(param_name, type, bodyenv);
        }

        if (let->exprLet.rec) {
            int name = *(int*) list_data(names);
            bodyenv = Environmentmake(name, type_fun(argtypes, tint), bodyenv);
        }

        Type *bodytype = visit_type(bodyenv, let->exprLet.expr, NULL);
        checkerr(bodytype);

        typeExpr = type_fun(argtypes, bodytype);
    }

    checkerr(typeExpr);

    if (let->exprLet.block != NULL) { // it's a let-in
        Environment *newEnv = env;

        if (namecount == 1) {
            int name = *(int*) list_data(names);
            newEnv = Environmentmake(name, typeExpr, newEnv);
        } else { // tuple binding
            // expr has to be a tuple as well, with the same length
            if (typeExpr->type != et_tuple) {
                VERR("Tuple binding type mismatch: expected tuple expression");
            }

            TypeList *tuple = typeExpr->typeTuple;
            if (list_length(tuple) != namecount) {
                VERR("Tuple binding type mismatch: expected tuple size");
            }
            
            newEnv = env_addlist(names, tuple, NULL, newEnv);
        }
        
        return visit_type(newEnv, let->exprLet.block, NULL);
    } else { // it's a global let
        // then set the value name
        setnames(names);
        return typeExpr;
    }
}


