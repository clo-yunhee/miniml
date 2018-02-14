#include "eval.h"


EVAL(funcall) {
    value_t *func = visit_eval(env, funcall->exprFunCall.function);
    astlist_t *args = funcall->exprFunCall.args;

    switch (func->type) {
    case et_fun:
        // normal function
        break;
    case et_natfun1:
    {
        value_t *arg = visit_eval(env, args->elem);
        
        return (func->valNatfun1)(arg);
    }
    case et_natfun2:
    {
        value_t *arg1 = visit_eval(env, args->elem);
        value_t *arg2 = visit_eval(env, args->next->elem);

        return (func->valNatfun2)(arg1, arg2);
    }
    default:
        VERR("Expression is not a function and cannot be applied");
    }

    env_t *callsite = func->valFun.defsite;    
    namelist_t *params = func->valFun.params;

    while (args != NULL && params != NULL) {
        value_t *value = visit_eval(env, args->elem);

        callsite = env_vmake(params->name, value, callsite);
        
        args = args->next;
        params = params->next;
    }

    if (params != NULL) { // partial currying
        return value_make_fun(callsite, params, func->valFun.body);
    } else {
        return visit_eval(callsite, func->valFun.body);
    }
}

