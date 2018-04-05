#include "infer.h"


#define apply(expr)   infer_apply(subs, expr, error)
#define applyl(list)  apply_list(subs, list, error)


Type *apply_one(SubstList *subs, Type *type, bool *error) {
    if (subs == NULL) return type;

    Substitution *first = list_data(subs);
    SubstList *next = list_next(subs);

    return subst_sub(first, apply_one(next, type, error), error);
}


void apply_list(SubstList *subs, TypedAstList *list, bool *error) {
    ListIterator it;
    list_iterate(&list, &it);

    while (list_iter_has_more(&it)) {
        TypedAst *ast = list_iter_next(&it);
        apply(ast);
    }
}


TypedAst *infer_apply(SubstList *subs, TypedAst *expr, bool *error) {
    
    switch (expr->type) {
    case e_unit:
    case e_int:
    case e_float:
    case e_bool:
    case e_string:
    case e_var:
        break;
    case e_block:
        apply(expr->exprBlock);
        break;
    case e_list:
        applyl(expr->exprList);
        break;
    case e_funcall:
        apply(expr->exprFunCall.function);
        applyl(expr->exprFunCall.args);
        break;
    case e_let:
    {
        apply(expr->exprLet.expr);
        
        TypedAst *block = expr->exprLet.block;
        if (block != NULL) {
            apply(block);
        }
        break;
    }
    case e_if:
    {
        apply(expr->exprIf.cond);
        apply(expr->exprIf.bIf);
        
        TypedAst *bElse = expr->exprIf.bElse;
        if (bElse) {
            apply(bElse);
        }
        break;
    }
    case e_tuple:
        applyl(expr->exprTuple);
        break;
    default:
        IERR("Inference apply type not implemented");
        break;
    }

    expr->xtype = apply_one(subs, expr->xtype, error);

    return expr;

}


