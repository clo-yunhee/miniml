#include "eval.h"


EVAL(funcall) {
    value_t *func = visit_eval(env, funcall->exprFunCall.function, NULL);
    astlist_t *args = funcall->exprFunCall.args;

    switch (func->type) {
    case et_fun:
        // normal function
        break;
    case et_natfun1:
    {
        if (args->size > 1) {
            VERR("Too many arguments"); 
        }
        
        value_t *arg = visit_eval(env, args->elem, NULL);
        
        return (func->valNatfun1)(arg);
    }
    case et_natfun2:
    {
        if (args->size < 2) {
            VERR("Native functions cannot be curried");
        }
        if (args->size > 2) {
            VERR("Too many arguments");
        }

        value_t *arg1 = visit_eval(env, args->elem, NULL);
        value_t *arg2 = visit_eval(env, args->next->elem, NULL);

        return (func->valNatfun2)(arg1, arg2);
    }
    default:
        VERR("Expression is not a function and cannot be applied");
    }

    env_t *callsite = func->valFun.defsite;    
    namelist_t *params = func->valFun.params;

    if (args->size > params->size) {
        VERR("Too many arguments");
    }

    while (args != NULL && params != NULL) {
        value_t *value = visit_eval(env, args->elem, NULL);

        callsite = env_vmake(params->name, value, callsite);
        
        args = args->next;
        params = params->next;
    }

    if (params != NULL) { // partial currying
        return value_make_fun(callsite, params, func->valFun.body);
    } else {
        return visit_eval(callsite, func->valFun.body, nameptr);
    }
}

