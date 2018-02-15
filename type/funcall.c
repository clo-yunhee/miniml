#include "type.h"


TYPE(funcall) {
    typedata_t *func = visit_type(env, funcall->exprFunCall.function, NULL);
    AstList *args = funcall->exprFunCall.args;

    unsigned int argcount = list_length(args);

    switch (func->type) {
    case et_fun:
        // normal function
        break;
    case et_natfun1:
    {
        if (argcount > 1) {
            VERR("Too many arguments"); 
        }
        
        typedata_t *arg = visit_type(env, list_data(args), NULL);
        checkerr(arg);
        checktypes(func->typeNatfun1.from, arg, "Argument type mismatch");

        return func->typeNatfun1.to;
    }
    case et_natfun2:
    {
        if (argcount < 2) {
            VERR("Native functions cannot be curried");
        }
        if (argcount > 2) {
            VERR("Too many arguments");
        }

        typedata_t *arg1 = visit_type(env, list_nth_data(args, 0), NULL);
        checkerr(arg1);
        checktypes(func->typeNatfun2.from1, arg1, "Argument type mismatch");

        typedata_t *arg2 = visit_type(env, list_nth_data(args, 1), NULL);
        checkerr(arg2);
        checktypes(func->typeNatfun2.from2, arg2, "Argument type mismatch");

        return func->typeNatfun2.to;
    }
    default:
        VERR("Expression is not a function and cannot be applied");
    }

    TypeList *params = func->typeFun.args;

    unsigned int paramcount = list_length(params);

    if (argcount > paramcount) {
        VERR("Too many arguments");
    }

    TypeList *argtypes = NULL;

    int lastIndex = 0;

    ListIterator argIt, paramIt;
    list_iterate(&args, &argIt);
    list_iterate(&params, &paramIt);
    while (list_iter_has_more(&argIt) && list_iter_has_more(&paramIt)) {
        ast_t *arg = list_iter_next(&argIt);
        typedata_t *param = list_iter_next(&paramIt);
        
        typedata_t *type = visit_type(env, arg, NULL);

        list_prepend(&argtypes, type);
        checkerr(type);
        checktypes(type, param, "Argument type mismatch");

        lastIndex++;
    }

    if (list_iter_has_more(&paramIt)) { // partial currying
        // get last params
        TypeList *curried_params = list_nth_entry(params, lastIndex);
        return type_fun(curried_params, func->typeFun.to);
    } else {
        // get type of function body
        return func->typeFun.to;
    }
}

