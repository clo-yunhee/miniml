#include "type.h"


TYPE(funcall) {
    typedata_t *func = visit_type(env, funcall->exprFunCall.function, NULL);
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
        
        typedata_t *arg = visit_type(env, args->elem, NULL);
        checkerr(arg);
        checktypes(func->typeNatfun1.from, arg, "Argument type mismatch");

        return func->typeNatfun1.to;
    }
    case et_natfun2:
    {
        if (args->size < 2) {
            VERR("Native functions cannot be curried");
        }
        if (args->size > 2) {
            VERR("Too many arguments");
        }

        typedata_t *arg1 = visit_type(env, args->elem, NULL);
        checkerr(arg1);
        checktypes(func->typeNatfun2.from1, arg1, "Argument type mismatch");

        typedata_t *arg2 = visit_type(env, args->next->elem, NULL);
        checkerr(arg2);
        checktypes(func->typeNatfun2.from2, arg2, "Argument type mismatch");

        return func->typeNatfun2.to;
    }
    default:
        VERR("Expression is not a function and cannot be applied");
    }

    tdlist_t *params = func->typeFun.args;

    if (args->size > params->size) {
        VERR("Too many arguments");
    }

    tdlist_t *argtypes = NULL;

    while (args != NULL) {
        typedata_t *type = visit_type(env, args->elem, NULL);

        argtypes = tdlist_make(type, argtypes);
        checkerr(argtypes->elem);
        checktypes(argtypes->elem, params->elem, "Argument type mismatch");
        
        args = args->next;
        params = params->next;
    }

    if (params != NULL) { // partial currying
        return type_fun(params, func->typeFun.to);
    } else {
        // get type of function body
        return func->typeFun.to;
    }
}

