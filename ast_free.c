#include "common.h"

void alist_free(AstList *list) {
    list_foreach(list, (ListConsumer) ast_free);
    list_free(list);
}

void ast_free(Ast *ast) {
    if (ast == NULL) return;

    switch (ast->type) {
    case e_string:
        free(ast->exprString);
        break;
    case e_block:
        ast_free(ast->exprBlock);
        break;
    case e_list:
        list_free(ast->exprList);
        break;
    case e_funcall:
        ast_free(ast->exprFunCall.function);
        list_free(ast->exprFunCall.args);
        break;
    case e_let:
        list_free(ast->exprLet.params);
        ast_free(ast->exprLet.expr);
        ast_free(ast->exprLet.block);
        break;
    default:
        break;
    }

    free(ast);
}
