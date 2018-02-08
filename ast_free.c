#include <stdlib.h>

#include "ast.h"

void ast_free(ast_t *ast) {
    if (ast == NULL) return;

    switch (ast->type) {
    case e_block:
        ast_free(ast->exprBlock);
        break;
    case e_list:
        alist_free(ast->exprList);
        break;
    case e_funcall:
        ast_free(ast->exprFunCall.function);
        alist_free(ast->exprFunCall.args);
        break;
    case e_bin:
        ast_free(ast->exprBinary.left);
        ast_free(ast->exprBinary.right);
        break;
    case e_let:
        plist_free(ast->exprLet.params);
        ast_free(ast->exprLet.expr);
        ast_free(ast->exprLet.block);
        break;
    default:
        break;
    }

    free(ast);
}
