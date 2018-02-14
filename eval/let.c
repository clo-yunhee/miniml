#include "eval.h"


EVAL(let) {
    namelist_t *names = let->exprLet.names;

    value_t *valExpr;

    if (let->exprLet.params == NULL) { // it's a variable binding
        valExpr = visit_eval(env, let->exprLet.expr);
    } else { // it's a function binding
        // a function is never evaluated before it's called
        // only pass the block
        
        valExpr = value_make_fun(env, let->exprLet.params, let->exprLet.expr);

        // if it's recursive, the function exists from the start of the body
        if (let->exprLet.rec) {
            valExpr->valFun.defsite = env_vmake(
                names->name, valExpr, valExpr->valFun.defsite);
        }
    }

    if (let->exprLet.block != NULL) { // it's a let-in
        env_t *newEnv = env;

        if (names->next == NULL) { // single name
            newEnv = env_vmake(names->name, valExpr, newEnv);
        } else { // tuple binding
            newEnv = env_addlist(names, NULL, valExpr->valTuple, newEnv);
        }
        
        return visit_eval(newEnv, let->exprLet.block);
    } else { // it's a global let
        return valExpr;
    }
}


