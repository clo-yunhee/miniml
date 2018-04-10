#include "eval.h"


EVAL(funcall) {
    Value *func = visit_eval(env, funcall->exprFunCall.function, error);
    AstList *args = funcall->exprFunCall.args;

    switch (func->type) {
    case et_fun:
        // normal function
        break;
    case et_natfun:
    {
        ValueList *argValues = NULL;

        ListIterator it;
        list_iterate(&args, &it);
        while (list_iter_has_more(&it)) {
            Ast *arg = list_iter_next(&it);

            list_append(&argValues, visit_eval(env, arg, error));
        }

        return native_apply(func->valNative, argValues);
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

        Value *value = visit_eval(env, arg, error);

        callsite = env_vmake(param_name, value, callsite); 
    }

    if (list_iter_has_more(&paramIt)) { // partial currying
        return value_make_fun(callsite, params, func->valFun.body);
    } else {
        return visit_eval(callsite, func->valFun.body, error);
    }
}

