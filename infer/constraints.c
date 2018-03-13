#include "infer.h"


ConsList *infer_constraints(TypedAst *expr, bool *error) {
    ConsList *list = NULL;
    
    collect_cons(&list, expr, error);

    return list;
}

ConsList *cons_zip(TypeList *first, TypeList *second) {
    if (list_length(first) != list_length(second)) {
        return NULL;
    }

    ConsList *zipped = NULL;
    
    ListIterator it1, it2;
    list_iterate(&first, &it1);
    list_iterate(&second, &it2);

    while (list_iter_has_more(&it1) && list_iter_has_more(&it2)) {
        Type *type1 = list_iter_next(&it1);
        Type *type2 = list_iter_next(&it2);

        list_append(&zipped, cons_make(type1, type2));
    }

    return zipped;
}


void collect_cons_list(ConsList **lptr, TypedAstList *astlist, bool *error) {
    ListIterator it;
    list_iterate(&astlist, &it);

    while (list_iter_has_more(&it)) {
        TypedAst *ast = list_iter_next(&it);
        collect_cons(lptr, ast, error);
    }
}

void collect_cons(ConsList **lptr, TypedAst *ast, bool *error) {

    Type *xtype = ast->xtype;

    switch (ast->type) {
    case e_unit:
    case e_int:
    case e_float:
    case e_bool:
    case e_string:
    case e_var:
        break;
    case e_block:
        list_append(lptr, cons_make(xtype, ast->exprBlock->xtype));
        collect_cons(lptr, ast->exprBlock, error);
        break;
    case e_list:
    {
        // list type if the last expression
        TypedAst *last = list_last_data(ast->exprList);
        list_append(lptr, cons_make(xtype, last->xtype));
        collect_cons_list(lptr, ast->exprList, error);
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
        /*case et_natfun1:
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
            break;*/
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
                retType = type_fun(params, retType);
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

        collect_cons(lptr, func, error);
        collect_cons_list(lptr, args, error);
        
        break;
    }
    case e_let:
    {
        Type *declType = ast->exprLet.exprType;
        TypeList *params = ast->exprLet.params;

        TypedAst *expr = ast->exprLet.expr;
        TypedAst *block = ast->exprLet.block;
        
        Type *retType = expr->xtype;
        
        // in a function let the type is a function
        if (params != NULL) {
           retType = type_fun(params, retType);
        }
        
        // whether it's a let or a let-in, decl = ret
        list_append(lptr, cons_make(retType, declType));
        collect_cons(lptr, expr, error);
        
        if (block != NULL) { // let-in, match block
            retType = block->xtype;
            collect_cons(lptr, block, error);
        }
        
        list_append(lptr, cons_make(xtype, retType));

        break;
    }
    case e_if:
    {
        list_append(lptr, cons_make(tbool, ast->exprIf.cond->xtype));

        collect_cons(lptr, ast->exprIf.cond, error); 
        collect_cons(lptr, ast->exprIf.bIf, error);

        TypedAst *bElse = ast->exprIf.bElse;
        if (bElse != NULL) {
            list_append(lptr, cons_make(ast->exprIf.bIf->xtype, bElse->xtype));
            collect_cons(lptr, bElse, error);
        }

        list_append(lptr, cons_make(xtype, ast->exprIf.bIf->xtype));

        break;
    }
    case e_tuple:
        collect_cons_list(lptr, ast->exprTuple, error);
        break;
    default:
        IERR("Inference collect type not implemented");
        break;
    }

}
