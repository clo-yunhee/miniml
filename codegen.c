#include "common.h"

#include "codegen_main.xxd"

#define gprintln()          fputs("\n", fout)
#define gprint(line)        fputs(line "\n", fout)
#define gprintf(line, ...)  fprintf(fout, line "\n", __VA_ARGS__)
#define gprintast(field)     codegen_def_ast(fout, field )
#define gprintastlist(field) codegen_def_astlist(fout, field )
#define gprintnames(field)   codegen_def_names(fout, field )

void codegen_def_astlist(FILE *fout, AstList *astlist);
void codegen_def_ast(FILE *fout, Ast *ast);
void codegen_def_names(FILE *fout, NameList *names);

void generate_code(FILE *fout, AstList *astlist) {

    fwrite(codegen_main_pre, sizeof(char), codegen_main_pre_len, fout);
    gprintln();
    gprintln();
    
    gprint("int main(void) {");

    gprint("/* Initialize the name table */");
    gprint("names_init();");
    gprintln();

    gprint("/* Define the program statically */");
    gprint("AstList *prog = ");
    codegen_def_astlist(fout, astlist);
    gprint(";");
    gprintln();

    gprint("/* Execute the program */");
    gprint("run_list(prog);");
    gprintln();

    gprint("/* Free resources */");
    gprint("alist_free(prog);");
    gprint("names_free();");

    gprint("}");
    gprintln();

}

void codegen_def_astlist(FILE *fout, AstList *astlist) {
    if (astlist == NULL) {
        gprint("((AstList *) 0)");
        return;
    }

    gprint("((AstList *) list_from(");
    
    // generate one definition for each
    ListIterator it;
    list_iterate(&astlist, &it);
    
    while (list_iter_has_more(&it)) {
        Ast *ast = list_iter_next(&it);
       
        codegen_def_ast(fout, ast);
        gprint(",");
    }

    gprint("0))");
}


void codegen_def_ast(FILE *fout, Ast *ast) {
    if (ast == NULL) {
        gprint("0");
        return;
    }

    switch (ast->type) {
    case e_unit:
        gprint("ast_make_unit()");
        break;
    case e_int:
        gprintf("ast_make_integer(%d)", ast->exprInteger);
        break;
    case e_float:
        gprintf("ast_make_float(%fF)", ast->exprFloat);
        break;
    case e_bool:
        gprintf("ast_make_bool(%d)", ast->exprBool);
        break;
    case e_string:
        /* The string attribute already is escaped, with quotes.
         * Duplicate it because ast_free assumes it is malloc-ed. */
        gprintf("ast_make_string(strdup(%s))", ast->exprString);
        break;
    case e_var:
        /* Rebuild the name table at the same time. */
        gprintf("ast_make_variable(names_getid(\"%s\"))",
                names_getnm(ast->exprVariable));
        break;
    case e_block:
        gprint("ast_make_block(");
        gprintast(ast->exprBlock);
        gprint(")");
        break;
    case e_list:
        gprint("ast_make_list(");
        gprintastlist(ast->exprList);
        gprint(")");
        break;
    case e_funcall:
        gprint("ast_make_funcall(");
        gprintast(ast->exprFunCall.function);
        gprint(",");
        gprintastlist(ast->exprFunCall.args);
        gprint(")");
        break;
    case e_let:
        gprint("ast_make_let(");
        gprintnames(ast->exprLet.names);
        gprintf(", %d,", ast->exprLet.rec);
        gprintnames(ast->exprLet.params);
        gprint(",");
        gprintast(ast->exprLet.expr);
        gprint(",");
        gprintast(ast->exprLet.block);
        gprint(")");
        break;
    case e_if:
        gprint("ast_make_if(");
        gprintast(ast->exprIf.cond);
        gprint(",");
        gprintast(ast->exprIf.bIf);
        gprint(",");
        gprintast(ast->exprIf.bElse);
        gprint(")");
        break;
    case e_tuple:
        gprint("ast_make_tuple(");
        gprintastlist(ast->exprTuple);
        gprint(")");
        break;
    default:
        fprintf(stderr, "Codegen ast type not implemented yet\n");
        break;
    }
}

void codegen_def_names(FILE *fout, NameList *names) {
    if (names == NULL) {
        gprint("((NameList *) 0)");
        return;
    }

    gprint("((NameList *) list_from(");
    
    ListIterator it;
    list_iterate(&names, &it);

    while (list_iter_has_more(&it)) {
        int id = *(int *) list_iter_next(&it);

        /* Again, we redefine names. */
        const char *name = names_getnm(id);

        gprintf("nmalloc(names_getid(\"%s\")),", name);
    }

    gprint("0))");
}
