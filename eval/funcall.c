#include "eval.h"


EVAL(funcall) {
    Value *func = visit_eval(env, funcall->exprFunCall.function);
    AstList *args = funcall->exprFunCall.args;

    switch (func->type) {
    case et_fun:
        // normal function
        break;
    case et_natfun1:
    {
        Value *arg = visit_eval(env, list_data(args));
        
        return (func->valNatfun1)(arg);
    }
    case et_natfun2:
    {
        Value *arg1 = visit_eval(env, list_nth_data(args, 0));
        Value *arg2 = visit_eval(env, list_nth_data(args, 1));

        return (func->valNatfun2)(arg1, arg2);
    }
    default:
        VERR("Expression is not a function and cannot be applied");
    }

    Env *callsite = func->valFun.defsite;    
    NameList *params = func->valFun.params;

    ListIterator argIt, paramIt;
    list_iterate(&args, &argIt);
    list_iterate(&params, &paramIt);
    while (list_iter_has_more(&argIt)) {
        Ast *arg = list_iter_next(&argIt);
        int param_name = *(int*) list_iter_next(&paramIt);

        Value *value = visit_eval(env, arg);

        callsite = env_vmake(param_name, value, callsite); 
    }

    if (list_iter_has_more(&paramIt)) { // partial currying
        return value_make_fun(callsite, params, func->valFun.body);
    } else {
        return visit_eval(callsite, func->valFun.body);
    }
}

