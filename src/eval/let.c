#include "eval.h"


EVAL(let) {
    NameList *names = let->exprLet.names;

    Value *valExpr;

    if (let->exprLet.params == NULL) { // it's a variable binding
        valExpr = visit_eval(env, let->exprLet.expr, error);
    } else { // it's a function binding
        // a function is never evaluated before it's called
        // only pass the block
        
        valExpr = value_make_fun(env, let->exprLet.params, let->exprLet.expr);

        // if it's recursive, the function exists from the start of the body
        if (let->exprLet.rec) {
            int name = *(int*) list_data(names);
            valExpr->valFun.defsite = env_vmake(name, valExpr, valExpr->valFun.defsite);
        }
    }

    if (let->exprLet.block != NULL) { // it's a let-in
        Env *newEnv = env;

        if (list_length(names) == 1) { // single name
            int name = *(int*) list_data(names);
            newEnv = env_vmake(name, valExpr, newEnv);
        } else { // tuple binding
            newEnv = env_addlist(names, NULL, valExpr->valTuple, newEnv);
        }
        
        return visit_eval(newEnv, let->exprLet.block, error);
    } else { // it's a global let
        return valExpr;
    }
}


