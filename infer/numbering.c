#include "infer.h"

TypedAstList *number_list(Env *env, ArrayList *list, AstList *astlist);
TypedAst *number_ast(Env *env, ArrayList *list, Ast *ast);

static int poly;
inline static Type *new_poly() {
    return type_poly(poly++);
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
    arraylist_append(list, typed);

    Type *xtype;

    switch (typed->type) {
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
        typed->exprVariable = ast->exprVariable;
        xtype = env_find(ast->exprVariable, env)->type;
        break;
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
        typed->exprLet.names = ast->exprLet.names;
        typed->exprLet.rec = ast->exprLet.rec;
        typed->exprLet.params = ast->exprLet.params;
        // TODO: environments for predefinition
        typed->exprLet.expr = number_ast(env, list, ast->exprLet.expr);
        typed->exprLet.block = number_ast(env, list, ast->exprLet.block);
        xtype = new_poly();
        break;
    case e_if:
        typed->exprIf.cond = number_ast(env, list, ast->exprIf.cond);
        typed->exprIf.bIf = number_ast(env, list, ast->exprIf.bIf);
        typed->exprIf.bElse = number_ast(env, list, ast->exprIf.bElse);
        xtype = new_poly();
        break;
    case e_tuple:
        typed->exprTuple = number_list(env, list, ast->exprTuple);
        xtype = new_poly();
    default:
        xtype = terror;
        break;
    }
   
    typed->type = ast->type;
    typed->xtype = xtype;

    return typed;
}


ArrayList *infer_numbering(Env *env, Ast *expr) {
    ArrayList *list = arraylist_new(0);
    poly = 0;

    number_ast(env, list, expr);

    return list;
}
