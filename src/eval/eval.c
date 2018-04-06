#include "eval.h"

Value *visit_eval(Env *env, Ast *expr, bool *error) {
    switch (expr->type) {
    case e_unit:
        return vunit;
    case e_int:
        return value_make_int(expr->exprInteger);
    case e_float:
        return value_make_float(expr->exprFloat);
    case e_bool:
        return value_make_bool(expr->exprBool);
    case e_string:
        return value_make_string(expr->exprString);
    case e_var:
        return eval_var(env, expr, error);
    case e_block:
        return visit_eval(env, expr->exprBlock, error);
    case e_seq:
        return eval_seq(env, expr, error);
    case e_funcall:
        return eval_funcall(env, expr, error);
    case e_let:
        return eval_let(env, expr, error);
    case e_if:
        return eval_ifelse(env, expr, error);
    case e_tuple:
        return eval_tuple(env, expr, error);
    case e_list:
        return eval_list(env, expr, error);
    default:
        VERR("Evaluation not implemented yet");
    }

}

