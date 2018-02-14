#include "type.h"


TYPE(let) {
    namelist_t *names = let->exprLet.names;

    typedata_t *typeExpr;

    if (let->exprLet.params == NULL) { // it's a variable binding
        // don't support recursive variables
        if (let->exprLet.rec) {
            VERR("Recursive variable bindings aren't supported");
        }

        typeExpr = visit_type(env, let->exprLet.expr, NULL);
    } else { // it's a function binding
        
        // TODO: infer arguments types, for now only int
        
        env_t *bodyenv = env;
        tdlist_t *argtypes = NULL;
        namelist_t *params = let->exprLet.params;
        while (params != NULL) {
            argtypes = tdlist_make(tint, argtypes);

            bodyenv = env_tmake(params->name, argtypes->elem, bodyenv);
            params = params->next;
        }

        if (let->exprLet.rec) {
            // TODO: infer when recursive
            bodyenv = env_tmake(names->name, type_fun(argtypes, tint), bodyenv);
        }

        typedata_t *bodytype = visit_type(bodyenv, let->exprLet.expr, NULL);
        checkerr(bodytype);

        typeExpr = type_fun(argtypes, bodytype);
    }

    checkerr(typeExpr);

    if (let->exprLet.block != NULL) { // it's a let-in
        env_t *newEnv = env;

        if (names->next == NULL) {
            newEnv = env_tmake(names->name, typeExpr, newEnv);
        } else { // tuple binding
            // expr has to be a tuple as well, with the same length
            if (typeExpr->type != et_tuple) {
                VERR("Tuple binding type mismatch: expected tuple expression");
            }
            if (typeExpr->typeTuple->size != names->size) {
                VERR("Tuple binding type mismatch: expected tuple size");
            }
            
            newEnv = env_addlist(names, typeExpr->typeTuple, NULL, newEnv);
        }
        
        return visit_type(newEnv, let->exprLet.block, NULL);
    } else { // it's a global let
        // then set the value name
        setnames(names);
        return typeExpr;
    }
}


