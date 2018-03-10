#include "infer.h"

TypedAstList *number_list(Env *env, ArrayList *list, AstList *astlist);
TypedAst *number_ast(Env *env, ArrayList *list, Ast *ast);

static int poly;
inline static Type *new_poly() {
    return type_poly(poly++);
}


ArrayList *infer_numbering(Env *env, Ast *expr) {
    ArrayList *list = arraylist_new(0);
    poly = 0;

    number_ast(env, list, expr);

    return list;
}



TypedAstList *number_list(Env *env, ArrayList *list, AstList *astlist) {
    TypedAstList *typedlist = NULL;

    ListIterator it;
    list_iterate(&astlist, &it);

    // for each AST, process it and append to the new list
    while (list_iter_has_more(&it)) {
        Ast *ast = list_iter_next(&it);
        TypedAst *typed = number_ast(env, list, ast);

        list_append(&typedlist, typed);
    }

    return typedlist;
}


TypedAst *number_ast(Env *env, ArrayList *list, Ast *ast) {
    // append uninitialized, to keep ordering
    TypedAst *typed = malloc(sizeof(TypedAst));
    typed->type = ast->type;

    arraylist_append(list, typed);

    Type *xtype;

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
            xtype = entry->type;
        } else {
            IERR2("Variable %s not found", names_getnm(var));
            xtype = terror;
        }
        break;
    }
    case e_block:
        typed->exprBlock = number_ast(env, list, ast->exprBlock);
        xtype = new_poly();
        break;
    case e_list:
        typed->exprList = number_list(env, list, ast->exprList);
        xtype = new_poly();
        break;
    case e_funcall:
        typed->exprFunCall.function = number_ast(env, list, ast->exprFunCall.function);
        typed->exprFunCall.args = number_list(env, list, ast->exprFunCall.args);
        xtype = new_poly();
        break;
    case e_let:
    {
        bool rec = ast->exprLet.rec;
        NameList *names = ast->exprLet.names;
        Ast *block = ast->exprLet.block;
        NameList *params = ast->exprLet.params;

        typed->exprLet.names = names;
        typed->exprLet.rec = rec;
        typed->exprLet.params = params;
        typed->exprLet.block = NULL;
        typed->exprLet.expr = NULL;

        // poly if it's a variable let
        if (params == NULL) {
            if (rec) {
                IERR("Recursive variable bindings not supported");
                xtype = terror;
                break;
            }

            if (list_length(names) > 1) { // tuple type
                TypeList *types = NULL;
                ListIterator it;
                list_iterate(&names, &it);
                while (list_iter_has_more(&it)) {
                    (void) list_iter_next(&it);
                    list_append(&types, new_poly());
                }
                xtype = type_tuple(types);
            } else { 
                xtype = new_poly();
            }

            typed->exprLet.expr = number_ast(env, list, ast->exprLet.expr);
        } else {
            // generate argument type list and def site environment
            Env *envExpr = env;

            // check name and define it if it's recursive
            unsigned int nameCount = list_length(names);
            if (nameCount > 1) {
                IERR("Can't define tuple named functions");
                xtype = terror;
                break;
            }
            if (rec && nameCount > 0) {
                int name = *(int *) list_data(names);
                envExpr = env_tmake(name, new_poly(), envExpr);
            }

            TypeList *args = NULL;
            ListIterator it;
            list_iterate(&params, &it);
            while (list_iter_has_more(&it)) {
                int name = *(int *) list_iter_next(&it);
                Type *type = new_poly();

                envExpr = env_tmake(name, type, envExpr);
                list_append(&args, type);
            }

            typed->exprLet.expr = number_ast(envExpr, list, ast->exprLet.expr);
            xtype = type_fun(args, new_poly());
        }

        // if it's a let-in, define the names
        if (block != NULL) {
            Env *envBlock = env;

            ListIterator it;
            list_iterate(&names, &it);
            while (list_iter_has_more(&it)) {
                int name = *(int *) list_iter_next(&it);
                Type *type = new_poly();
                
                envBlock = env_tmake(name, type, envBlock);
            }

            typed->exprLet.block = number_ast(envBlock, list, ast->exprLet.block);
            xtype = new_poly();
        }

        break;
    }
    case e_if:
    {
        typed->exprIf.cond = number_ast(env, list, ast->exprIf.cond);
        typed->exprIf.bIf = number_ast(env, list, ast->exprIf.bIf);
        
        Ast *bElse = ast->exprIf.bElse;
        if (bElse != NULL) {
            typed->exprIf.bElse = number_ast(env, list, bElse);
        }

        xtype = new_poly();
        break;
    }
    case e_tuple:
    {
        typed->exprTuple = number_list(env, list, ast->exprTuple);

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
        xtype = terror;
        break;
    }
   
    typed->xtype = xtype;

    return typed;
}


