#include "eval.h"

value_t *visit_eval(env_t *env, ast_t *expr, int *nameptr) {
   
    setname(NO_NAME); // default name

    switch (expr->type) {
    case e_unit:
        return value_make_unit();
    case e_int:
        return value_make_int(expr->exprInteger);
    case e_float:
        return value_make_float(expr->exprFloat);
    case e_bool:
        return value_make_bool(expr->exprBool);
    case e_string:
        return value_make_string(expr->exprString);
    case e_var:
        return eval_var(env, expr, nameptr);
    case e_block:
        return visit_eval(env, expr->exprBlock, nameptr);
    case e_list:
        return eval_list(env, expr, nameptr);
    case e_funcall:
        return eval_funcall(env, expr, nameptr);
    case e_let:
        return eval_let(env, expr, nameptr);
    case e_if:
        return eval_ifelse(env, expr, nameptr);
    case e_tuple:
        return eval_tuple(env, expr, nameptr);
    default:
        VERR("Evaluation not implemented yet");
    }

}

