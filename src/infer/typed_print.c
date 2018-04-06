#include "infer.h"

void talist_print(TypedAstList *astlist) {
    list_print(astlist, (ListPrintFunc) typed_print, "[", ", ", "]");
}

void typed_print(TypedAst *ast) {
    if (ast == NULL) {
        printf("<NULL>");
        return;
    }

    printf("<");
    type_print(ast->xtype);
    printf("> ");

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
        printf("String (%s)", ast->exprString);
        break;
    case e_var:
        printf("Var %s", names_getnm(ast->exprVariable));
        break;
    case e_block:
        printf("Block (");
        typed_print(ast->exprBlock);
        printf(")");
        break;
    case e_seq:
        printf("Seq ");
        talist_print(ast->exprSeq);
        break;
    case e_funcall:
        printf("FunCall (");
        typed_print(ast->exprFunCall.function);
        printf(", ");
        printf("Args ");
        talist_print(ast->exprFunCall.args);
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
        if (ast->exprLet.exprType != NULL) {
            type_print(ast->exprLet.exprType);
            printf(", ");
        }
        if (ast->exprLet.params != NULL) {
            printf("Params ");
            tdlist_print(ast->exprLet.params, "(", ", ", ")");
            printf(", ");
        }
        typed_print(ast->exprLet.expr);
        if (ast->exprLet.block != NULL) {
            printf(", ");
            typed_print(ast->exprLet.block);
        }
        printf(")");
        break;
    case e_if:
        printf("If");
        if (ast->exprIf.bElse != NULL) {
            printf("Else");
        }
        printf(" (");
        typed_print(ast->exprIf.cond);
        printf(", ");
        typed_print(ast->exprIf.bIf);
        if (ast->exprIf.bElse != NULL) {
            printf(", ");
            typed_print(ast->exprIf.bElse);
        }
        printf(")");
        break;
    case e_tuple:
        printf("Tuple ");
        talist_print(ast->exprTuple);
        break;
    case e_list:
        printf("List ");
        if (ast->exprList.head == NULL) {
            printf("[]");
        }
        else {
            printf("(");
            typed_print(ast->exprList.head);
            printf(" :: ");
            typed_print(ast->exprList.tail);
            printf(")");
        }
        break;
    default:
        printf("Unhandled");
        break;
    }

}
