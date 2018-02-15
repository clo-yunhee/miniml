#include <stdlib.h>

#include "list.h"
#include "names.h"
#include "ast.h"

void ast_free(ast_t *ast) {
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
