#include "infer.h"


TypedAstList *annotate_list(Env *env, AstList *astlist, bool *error) {
    TypedAstList *typedlist = NULL;

    ListIterator it;
    list_iterate(&astlist, &it);

    // for each AST, process it and append to the new list
    while (list_iter_has_more(&it)) {
        Ast *ast = list_iter_next(&it);
        TypedAst *typed = infer_annotate(env, ast, error);

        list_append(&typedlist, typed);
    }

    return typedlist;
}


TypedAst *infer_annotate(Env *env, Ast *ast, bool *error) {
    // append uninitialized, to keep ordering
    TypedAst *typed = malloc(sizeof(TypedAst));
    typed->type = ast->type;

    Type *xtype = terror;

    switch (ast->type) {
    case e_unit:
        xtype = tunit;
        break;
    case e_int:
        typed->exprInteger = ast->exprInteger;
        xtype = tint;
        break;
    case e_float:
        typed->exprFloat = ast->exprFloat;
        xtype = tfloat;
        break;
    case e_bool:
        typed->exprBool = ast->exprBool;
        xtype = tbool;
        break;
    case e_string:
        typed->exprString = ast->exprString;
        xtype = tstring;
        break;
    case e_var:
    {
        int var = ast->exprVariable;
        typed->exprVariable = var;
        Env *entry = env_find(var, env);

        if (entry != NULL) {
            // filter any placeholders
            xtype = type_repoly(entry->type, error);
        } else {
            IERR2("Variable %s not found", names_getnm(var));
        }
        break;
    }
    case e_block:
        typed->exprBlock = infer_annotate(env, ast->exprBlock, error);
        xtype = new_poly();
        break;
    case e_list:
        typed->exprList = annotate_list(env, ast->exprList, error);
        xtype = new_poly();
        break;
    case e_funcall:
        typed->exprFunCall.function = infer_annotate(env, ast->exprFunCall.function, error);
        typed->exprFunCall.args = annotate_list(env, ast->exprFunCall.args, error);
        xtype = new_poly();
        break;
    case e_let:
    {
        bool rec = ast->exprLet.rec;
        NameList *names = ast->exprLet.names;
        Ast *block = ast->exprLet.block;
        NameList *params = ast->exprLet.params;

        unsigned int nameCount = list_length(names);

        typed->exprLet.rec = rec;
        typed->exprLet.params = NULL;
        typed->exprLet.block = NULL;
        typed->exprLet.expr = NULL;


        Env *envExpr = env;

        // poly if it's a variable let
        if (params == NULL) {
            if (rec) {
                IERR("Recursive variable bindings not supported");
                break;
            }

            if (nameCount > 1) { // tuple type
                TypeList *types = NULL;
                ListIterator it;
                list_iterate(&names, &it);
                while (list_iter_has_more(&it)) {
                    list_iter_next(&it);
                    list_append(&types, new_poly());
                }
                xtype = type_tuple(types);
            } else {
                xtype = new_poly();
            }
        } else {
            // generate argument type list and def site environment
            // check name and define it if it's recursive
            if (nameCount > 1) {
                IERR("Can't define tuple named functions");
                break;
            }
            
            TypeList *paramTypes = NULL;
            ListIterator it;
            list_iterate(&params, &it);
            while (list_iter_has_more(&it)) {
                int name = *(int *) list_iter_next(&it);
                Type *type = new_poly();

                envExpr = env_tmake(name, type, envExpr);
                list_append(&paramTypes, type);
            }

            typed->exprLet.params = paramTypes;
            xtype = type_fun(paramTypes, new_poly());
            
            // if it's recursive, we also add that definition to the environment
            if (rec && nameCount > 0) {
                int name = *(int *) list_data(names);
                envExpr = env_tmake(name, xtype, envExpr);
            }
        }

        typed->exprLet.expr = infer_annotate(envExpr, ast->exprLet.expr, error);
        typed->exprLet.exprType = xtype;

        // if it's a let-in, define the names
        if (block != NULL) {
            Env *envBlock = env;

            // if it defined a tuple, then copy xtype
            if (nameCount > 1) {
                ListIterator nameIt, typeIt;
                list_iterate(&names, &nameIt);
                list_iterate(&xtype->typeTuple, &typeIt);

                while (list_iter_has_more(&nameIt) && list_iter_has_more(&typeIt)) {
                    int name = *(int *) list_iter_next(&nameIt);
                    Type *type = list_iter_next(&typeIt);
                    
                    envBlock = env_tmake(name, type, envBlock);
                }
            } else {
                // else just the single type
                int name = *(int *) list_data(names);
                
                envBlock = env_tmake(name, xtype, envBlock);
            }

            typed->exprLet.block = infer_annotate(envBlock, ast->exprLet.block, error);
            xtype = new_poly();
        }

        break;
    }
    case e_if:
    {
        typed->exprIf.cond = infer_annotate(env, ast->exprIf.cond, error);
        typed->exprIf.bIf = infer_annotate(env, ast->exprIf.bIf, error);
        
        Ast *bElse = ast->exprIf.bElse;
        if (bElse != NULL) {
            typed->exprIf.bElse = infer_annotate(env, bElse, error);
        }

        xtype = new_poly();
        break;
    }
    case e_tuple:
    {
        typed->exprTuple = annotate_list(env, ast->exprTuple, error);

        TypeList *types = NULL;
        ListIterator it;
        list_iterate(&typed->exprTuple, &it);
        while (list_iter_has_more(&it)) {
            TypedAst *elem = list_iter_next(&it);
            list_append(&types, elem->xtype);
        }

        xtype = type_tuple(types);
        break;
    }
    default:
        IERR("Inference number type not implemented");
        break;
    }
   
    typed->xtype = xtype;

    return typed;
}


