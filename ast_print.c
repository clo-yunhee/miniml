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
    case e_unit:
        printf("Unit");
        break;
    case e_int:
        printf("Int %d", ast->exprInteger);
        break;
    case e_float:
        printf("Float %g", ast->exprFloat);
        break;
    case e_bool:
        printf("Bool %s", ast->exprBool ? "true" : "false");
        break;
    case e_string:
        printf("String (\"%s\")", ast->exprString);
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
        printf("Params ");
        alist_print(ast->exprFunCall.args);
        printf(")");
        break;
    case e_let:
        printf("Let");
        if (ast->exprLet.rec) {
            printf("Rec");
        }
        if (ast->exprLet.params == NULL) {
            printf("Var");
        } else {
            printf("Fun");
        }
        if (ast->exprLet.block != NULL) {
            printf("In");
        }
        printf(" (");
        if (ast->exprLet.names->name != -1) {
            nmlist_print(ast->exprLet.names);
            printf(", ");
        }
        if (ast->exprLet.params != NULL) {
            printf("Params ");
            nmlist_print(ast->exprLet.params);
            printf(", ");
        }
        ast_print(ast->exprLet.expr);
        if (ast->exprLet.block != NULL) {
            printf(", ");
            ast_print(ast->exprLet.block);
        }
        printf(")");
        break;
    case e_if:
        printf("If");
        if (ast->exprIf.bElse != NULL) {
            printf("Else");
        }
        printf(" (");
        ast_print(ast->exprIf.cond);
        printf(", ");
        ast_print(ast->exprIf.bIf);
        if (ast->exprIf.bElse != NULL) {
            printf(", ");
            ast_print(ast->exprIf.bElse);
        }
        printf(")");
        break;
    case e_tuple:
        printf("Tuple ");
        alist_print(ast->exprTuple);
        break;
    default:
        printf("Unhandled");
        break;
    }

}
