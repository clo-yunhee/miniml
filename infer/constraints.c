#include "infer.h"

void collect_cons(ConsList **lptr, TypedAst *ast);
void collect_cons_list(ConsList **lptr, TypedAstList *astlist);


ConsList *infer_constraints(Env *env, ArrayList *astlist) {
    ConsList *list = NULL;
    TypedAst *expr = astlist->data[0];

    collect_cons(&list, expr);

    return list;
}


void collect_cons_list(ConsList **lptr, TypedAstList *astlist) {
    ListIterator it;
    list_iterate(&astlist, &it);

    while (list_iter_has_more(&it)) {
        TypedAst *ast = list_iter_next(&it);
        collect_cons(lptr, ast);
    }
}

void collect_cons(ConsList **lptr, TypedAst *ast) {

    Type *xtype = ast->xtype;

    switch (ast->type) {
    case e_unit:
    case e_int:
    case e_float:
    case e_bool:
    case e_string:
    case e_var:
    case e_tuple:
        break;
    case e_block:
        list_append(lptr, cons_make(xtype, ast->exprBlock->xtype));
        collect_cons(lptr, ast->exprBlock);
        break;
    case e_list:
    {
        // list type if the last expression
        TypedAst *last = list_last_data(ast->exprList);
        list_append(lptr, cons_make(xtype, last->xtype));
        collect_cons_list(lptr, ast->exprList);
        break;
    }
    case e_funcall:
    {
        TypedAstList *args = ast->exprFunCall.args;
        unsigned int argCount = list_length(args);

        TypedAst *func = ast->exprFunCall.function;
        Type *fntype = func->xtype;

        /* the function expression can be:
           1. a function : we match each (param, arg) pair and the return types
           2. a curried function : we match some (param, arg) pairs and the return type is the remaining pairs
           3. a poly type : constraint the function expression to match the args and return types
           4. neither : throw an error  */
        switch (fntype->type) {
        case et_natfun1:
            if (argCount == 1) {
                list_append(lptr, cons_make(list_nth_data(args, 0), fntype->typeNatfun1.from));
                list_append(lptr, cons_make(xtype, fntype->typeNatfun1.to));
            } else {
                IERR("Too many arguments");
            }
            break;
        case et_natfun2:
            if (argCount == 2) {
                list_append(lptr, cons_make(list_nth_data(args, 0), fntype->typeNatfun2.from1)); 
                list_append(lptr, cons_make(list_nth_data(args, 1), fntype->typeNatfun2.from2));
                list_append(lptr, cons_make(xtype, fntype->typeNatfun2.to));
            } else if (argCount < 2) {
                IERR("Native functions cannot be curried");
            } else {
                IERR("Too many arguments");
            }
            break;
        case et_fun:
        {
            TypeList *params = fntype->typeFun.args;
            Type *retType = fntype->typeFun.to;

            unsigned int paramCount = list_length(params);
            if (argCount > paramCount) {
                IERR("Too many arguments");
                return; 
            }

            ListIterator argIt;
            list_iterate(&args, &argIt);
           
            while (list_iter_has_more(&argIt) && params != NULL) {
                TypedAst *arg = list_iter_next(&argIt);
                Type *paramType = list_data(params);

                list_append(lptr, cons_make(paramType, arg->xtype));
                
                params = list_next(params);
            }

            // if partial currying, match the return type with the curried function
            if (params != NULL) {
                retType = type_fun(list_data(params), retType);
            }

            list_append(lptr, cons_make(retType, xtype));

            break;
        }
        case et_poly:
        {
            TypeList *params = NULL;
            ListIterator it;
            list_iterate(&args, &it);
            while (list_iter_has_more(&it)) {
                TypedAst *arg = list_iter_next(&it);

                list_append(&params, arg->xtype);
            }

            Type *dedfntype = type_fun(params, xtype);

            list_append(lptr, cons_make(fntype, dedfntype));

            break;
        }
        default:
            IERR("Expression is not a function and cannot be applied");
            break;
        }

        collect_cons(lptr, func);
        collect_cons_list(lptr, args);
        
        break;
    }
    /*case e_let:
    {
        bool rec = ast->exprLet.rec;
        NameList *params = ast->exprLet.params;
        TypedAst *expr = ast->exprLet.expr;
        TypedAst *block = ast->exprLet.block;

        Type *retType;

        // variable let
        if (params == NULL) {
            retType = expr->xtype;
        } else {
            
        }

        break;
    }*/
    case e_if:
    {
        list_append(lptr, cons_make(tbool, ast->exprIf.cond->xtype));

        collect_cons(lptr, ast->exprIf.cond); 
        collect_cons(lptr, ast->exprIf.bIf);

        TypedAst *bElse = ast->exprIf.bElse;
        if (bElse != NULL) {
            list_append(lptr, cons_make(ast->exprIf.bIf->xtype, bElse->xtype));
            collect_cons(lptr, bElse);
        }

        break;
    }
    default:
        IERR("Inference collect type not implemented");
        break;
    }

}
