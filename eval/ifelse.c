#include "eval.h"


EVAL(ifelse) {
    value_t *cond = visit_eval(env, ifelse->exprIf.cond);
    
    if (cond->valBool) {
        return visit_eval(env, ifelse->exprIf.bIf);
    } else {
        return visit_eval(env, ifelse->exprIf.bElse);
    }
}
