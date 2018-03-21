#ifndef _RUN_H_
#define _RUN_H_

/*
 * The value flag specifies whether to compute the values or not.
 * Basically, whether we're interpreting or just doing analysis.
 * The error flag is a pointer, only set to true in case of an error.
 */

void run_list(AstList *list, bool do_value, bool *error);
void run_expr(Env **env, Ast *expr, bool do_value, bool *error);

NameList *ast_names(Ast *expr);

#endif // _RUN_H_
