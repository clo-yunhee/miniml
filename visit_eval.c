#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "ast.h"
#include "symbols.h"

#include "values.h"
#include "environment.h"
#include "visit.h"

#define VEVAL(type) value_t *eval_##type (env_t *env, ast_t * type )

VEVAL(var);
VEVAL(list);
VEVAL(funcall);
VEVAL(let);

#define VERR(str) do { fprintf(stderr, str "\n"); return value_make_unit(); } while (false)


// assumes all types are sound already
value_t *visit_eval(env_t *env, ast_t *expr) {
   
    switch (expr->type) {
    case e_int:
        return value_make_int(expr->exprInteger);
    case e_float:
        return value_make_float(expr->exprFloat);
    case e_bool:
        return value_make_bool(expr->exprBool);
    case e_string:
        return value_make_string(expr->exprString);
    case e_var:
        return eval_var(env, expr);
    case e_block:
        return visit_eval(env, expr->exprBlock);
    case e_list:
        return eval_list(env, expr);
    case e_funcall:
        return eval_funcall(env, expr);
    case e_let:
        return eval_let(env, expr);
    default:
        VERR("Not implemented yet");
    }

}


VEVAL(var) {
    while (env != NULL) {
        if (env->name == var->exprVariable)
            return env->value;
        env = env->next;
    }
    VERR("Undefined name");
}

VEVAL(list) {
    value_t *value;

    astlist_t *expr = list->exprList;
    while (expr != NULL) {
        value = visit_eval(env, list);
        expr = expr->next;
    }

    return value;
}

VEVAL(funcall) {
    value_t *func = visit_eval(env, funcall->exprFunCall.function);
    astlist_t *args = funcall->exprFunCall.args;

    switch (func->type) {
    case et_fun:
        // normal function
        break;
    case et_natfun1:
    {
        value_t *arg = visit_eval(env, args->elem);
        // there is only one argument
        if (args->next != NULL) {
            VERR("Too many arguments");
        }
        
        return (func->valNatfun1)(arg);
    }
    case et_natfun2:
    {
        value_t *arg1 = visit_eval(env, args->elem);
        args = args->next;
        // there are two arguments
        if (args == NULL) {
            VERR("Native functions cannot be curried");
        }
        value_t *arg2 = visit_eval(env, args->elem);
        if (args->next != NULL) {
            VERR("Too many arguments");
        }

        return (func->valNatfun2)(arg1, arg2);
    }
    default:
        VERR("Expression is not a function and cannot be applied");
    }

    env_t *callsite = func->valFun.defsite;
    
    params_t *params = func->valFun.params;
    while (args != NULL && params != NULL) {
        value_t *value = visit_eval(env, args->elem);

        callsite = env_make(params->name, value, callsite);
        
        args = args->next;
        params = params->next;
    }

    if (args == NULL && params == NULL) { // same number of args and params
        return visit_eval(callsite, func->valFun.body);
    }
    if (params != NULL) { // partial currying
        return value_make_fun(callsite, params, func->valFun.body);
    }
    // too many arguments
    VERR("Too many arguments");
}

VEVAL(let) {
    value_t *valExpr;

    if (let->exprLet.params == NULL) { // it's a variable binding
        // don't support recursive variables
        if (let->exprLet.rec) {
            VERR("Recursive variable bindings aren't supported");
        }
        
        valExpr = visit_eval(env, let->exprLet.expr);
    } else { // it's a function binding
        // a function is never evaluated before it's called
        // only pass the block
        
        valExpr = value_make_fun(env, let->exprLet.params, let->exprLet.expr);
    }

    if (let->exprLet.block != NULL) { // it's a let-in
        env_t *newEnv = env_make(let->exprLet.name, valExpr, env);
        return visit_eval(newEnv, let->exprLet.block);
    } else { // it's a global let
        return valExpr;
    }
}

