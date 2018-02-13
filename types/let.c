#include "eval.h"


EVAL(let) {
    namelist_t *names = let->exprLet.names;

    value_t *valExpr;

    if (let->exprLet.params == NULL) { // it's a variable binding
        // don't support recursive variables
        if (let->exprLet.rec) {
            VERR("Recursive variable bindings aren't supported");
        }

        valExpr = visit_eval(env, let->exprLet.expr, NULL);
    } else { // it's a function binding
        // a function is never evaluated before it's called
        // only pass the block
        
        valExpr = value_make_fun(env, let->exprLet.params, let->exprLet.expr);

        // if it's recursive, the function exists from the start of the body
        if (let->exprLet.rec) {
            valExpr->valFun.defsite = env_make(
                names->name, valExpr, valExpr->valFun.defsite);
        }
    }

    if (let->exprLet.block != NULL) { // it's a let-in
        env_t *newEnv = env;

        if (names->next == NULL) { // single name
            newEnv = env_make(names->name, valExpr, newEnv);
        } else { // tuple binding
            // expr has to be a tuple as well, with the same length
            if (valExpr->type != et_tuple) {
                VERR("Tuple binding must match with a tuple expression");
            }
            if (names->size != valExpr->valTuple->size) {
                VERR("Tuple lengths must match in tuple binding");
            }
            
            vlist_t *elems = valExpr->valTuple;
            while (names != NULL) {
                newEnv = env_make(names->name, elems->elem, newEnv);

                names = names->next;
            }
        }
        
        return visit_eval(newEnv, let->exprLet.block, NULL);
    } else { // it's a global let
        // then set the value name
        setname(names->name);
        return valExpr;
    }
}


