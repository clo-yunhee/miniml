#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "ast.h"

void ast_print(ast_t *ast) {
    if (ast == NULL) {
        printf("<NULL>");
        return;
    }

    switch (ast->type) {
    case e_int:
        printf("Int %d", ast->exprInteger);
        break;
    case e_var:
        printf("Var %s", names_getnm(ast->exprVariable));
        break;
    case e_block:
        printf("Block (");
        ast_print(ast->exprBlock);
        printf(")");
        break;
    case e_list:
        printf("List ");
        alist_print(ast->exprList);
        break;
    case e_funcall:
        printf("FunCall (");
        ast_print(ast->exprFunCall.function);
        printf(", ");
        ast_print(ast->exprFunCall.expr);
        printf(")");
        break;
    case e_bin:
        printf("Binary (");
        ast_print(ast->exprBinary.left);
        printf(", %d, ", ast->exprBinary.op);
        ast_print(ast->exprBinary.right);
        printf(")");
        break;
    case e_let:
        printf("Let (%s", names_getnm(ast->exprLet.name));
        if (ast->exprLet.params != NULL) {
            plist_print(ast->exprLet.params);
        }
        printf(", ");
        ast_print(ast->exprLet.expr);
        printf(", ");
        ast_print(ast->exprLet.block);
        printf(")");
        break;
    default:
        printf("Unhandled");
        break;
    }

}
