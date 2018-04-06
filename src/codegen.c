#include "common.h"

#include "../obj/codegen_main.xxd"


#define code_line()            fputc('\n', fout)
#define code_print(str)        fputs(str, fout)
#define code_println(str)      fputs(str "\n", fout)
#define code_printf(str, ...)  fprintf(fout, str, __VA_ARGS__)

void code_indent(void);
#define with_indent(call)  do { code_indent(); call; } while (false)

#define code_iprint(str)        with_indent(code_print(str))
#define code_iprintln(str)      with_indent(code_println(str))
#define code_iprintf(str, ...)  with_indent(code_printf(str, __VA_ARGS__))


void gen_list(AstList *astlist);
void gen_ast(Ast *ast);
void gen_names(NameList *names);


static int indent = 0;
static FILE *fout = NULL;


void generate_code(FILE *p_fout, AstList *astlist) {
    fout = p_fout;
    indent = 0;

    fwrite(obj_codegen_main_pre, sizeof(char), obj_codegen_main_pre_len, fout);
    code_line();
    code_line();
    
    code_iprintln("int main(void) {");
    ++indent;

    code_iprintln("/* Initialize the name table */");
    code_iprintln("names_init();");
    
    code_line();

    code_iprintln("/* Define the program statically */");
    code_iprint("AstList *prog = ");
    gen_list(astlist);
    code_println(";");
    
    code_line();

    code_iprintln("/* Execute the program */");
    code_iprintln("int error = 0;");
    code_line();
    code_iprintln("run_list(prog, 1, (_Bool *) &error);");

    code_line();

    code_iprintln("/* Check for errors */");
    code_iprintln("if (error) {");
    ++indent;
    code_iprintln("printf(\"An error occurred during the execution\\n\");");
    --indent;
    code_iprintln("}");

    code_iprintln("/* Free resources */");
    code_iprintln("alist_free(prog);");
    code_iprintln("names_free();");
    
    code_line();
    
    code_iprintln("return error;");
    --indent;
    code_iprintln("}");
    code_line();

    fout = NULL;

}

void gen_list(AstList *astlist) {
    if (astlist == NULL) {
        code_print("0");
        return;
    }

    code_println("list_from(");
    ++indent;

    // generate one definition for each
    ListIterator it;
    list_iterate(&astlist, &it);
    
    while (list_iter_has_more(&it)) {
        Ast *ast = list_iter_next(&it);
      
        code_indent();
        gen_ast(ast);
        code_println(",");
    }
    code_iprintln("0");

    --indent;
    code_iprint(")");
}


void gen_ast(Ast *ast) {
    if (ast == NULL) {
        code_print("0");
        return;
    }

    switch (ast->type) {
    case e_unit:
        code_print("ast_make_unit()");
        break;
    case e_int:
        code_printf("ast_make_integer(%d)", ast->exprInteger);
        break;
    case e_float:
        code_printf("ast_make_float(%fF)", ast->exprFloat);
        break;
    case e_bool:
        code_printf("ast_make_bool(%d)", ast->exprBool);
        break;
    case e_string:
        /* The string attribute already is escaped, with quotes.
         * Duplicate it because ast_free assumes it is malloc-ed. */
        code_printf("ast_make_string(strdup(\"%s\"))", escape(ast->exprString));
        break;
    case e_var:
        /* Rebuild the name table at the same time. */
        code_printf("ast_make_variable(names_getid(\"%s\"))",
                names_getnm(ast->exprVariable));
        break;
    case e_block:
        code_println("ast_make_block(");
        ++indent;
        code_indent();
        gen_ast(ast->exprBlock);
        --indent;
        code_line();
        code_iprint(")");
        break;
    case e_seq:
        code_println("ast_make_seq(");
        ++indent;
        code_indent();
        gen_list(ast->exprSeq);
        --indent;
        code_line();
        code_iprint(")");
        break;
    case e_funcall:
        code_println("ast_make_funcall(");
        ++indent;
        code_indent();
        gen_ast(ast->exprFunCall.function);
        code_println(",");
        code_indent();
        gen_list(ast->exprFunCall.args);
        --indent;
        code_line();
        code_iprint(")");
        break;
    case e_let:
        code_println("ast_make_let(");
        ++indent;
        code_indent();
        gen_names(ast->exprLet.names);
        code_println(",");
        code_iprintf("%d,\n", ast->exprLet.rec);
        code_indent();
        gen_names(ast->exprLet.params);
        code_println(",");
        code_indent();
        gen_ast(ast->exprLet.expr);
        code_println(",");
        code_indent();
        gen_ast(ast->exprLet.block);
        --indent;
        code_line();
        code_iprint(")");
        break;
    case e_if:
        code_println("ast_make_if(");
        ++indent;
        code_indent();
        gen_ast(ast->exprIf.cond);
        code_println(",");
        code_indent();
        gen_ast(ast->exprIf.bIf);
        code_println(",");
        code_indent();
        gen_ast(ast->exprIf.bElse);
        --indent;
        code_line();
        code_iprint(")");
        break;
    case e_tuple:
        code_println("ast_make_tuple(");
        ++indent;
        code_indent();
        gen_list(ast->exprTuple);
        --indent;
        code_line();
        code_iprint(")");
        break;
    default:
        fprintf(stderr, "Codegen ast type not implemented yet\n");
        break;
    }
}

void gen_names(NameList *names) {
    if (names == NULL) {
        code_print("0");
        return;
    }

    code_println("list_from(");
    ++indent;
    
    ListIterator it;
    list_iterate(&names, &it);

    while (list_iter_has_more(&it)) {
        int id = *(int *) list_iter_next(&it);

        /* Again, we redefine names. */
        const char *name = names_getnm(id);
        
        code_iprintf("nmalloc(names_getid(\"%s\")),\n", name);
    }
    code_iprintln("0");

    --indent;
    code_iprint(")");
}


#define TAB  "   "
#define PRETAB_COUNT 4        // exclusive

void code_indent(void) {
    static const char *indents[] = {
        TAB,
        TAB TAB,
        TAB TAB TAB,
        TAB TAB TAB TAB
    };
   
    int nb = indent;

    while (nb > PRETAB_COUNT) {
        fputs(indents[PRETAB_COUNT - 1], fout);
        nb -= PRETAB_COUNT;
    }

    if (nb > 0) {
        fputs(indents[nb - 1], fout);
    }
}
