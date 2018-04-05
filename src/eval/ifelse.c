#include "eval.h"


EVAL(ifelse) {
    Value *cond = visit_eval(env, ifelse->exprIf.cond, error);
    
    if (cond->valBool) {
        return visit_eval(env, ifelse->exprIf.bIf, error);
    } else {
        return visit_eval(env, ifelse->exprIf.bElse, error);
    }
}
