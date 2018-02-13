#include "eval.h"


EVAL(ifelse) {
    value_t *cond = visit_eval(env, ifelse->exprIf.cond, NULL);
    
    if (cond->valBool) {
        return visit_eval(env, ifelse->exprIf.bIf, NULL);
    } else {
        return visit_eval(env, ifelse->exprIf.bElse, NULL);
    }
}
