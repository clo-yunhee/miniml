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
    case e_seq:
        alist_free(ast->exprSeq);
        break;
    case e_funcall:
        ast_free(ast->exprFunCall.function);
        alist_free(ast->exprFunCall.args);
        break;
    case e_let:
        nmlist_free(ast->exprLet.params);
        ast_free(ast->exprLet.expr);
        ast_free(ast->exprLet.block);
        break;
    case e_if:
        ast_free(ast->exprIf.cond);
        ast_free(ast->exprIf.bIf);
        ast_free(ast->exprIf.bElse);
        break;
    case e_tuple:
        alist_free(ast->exprTuple);
        break;
    case e_list:
        ast_free(ast->exprList.head);
        ast_free(ast->exprList.tail);
        break;
    default:
        break;
    }

    free(ast);
}
