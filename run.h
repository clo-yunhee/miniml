#ifndef _RUN_H_
#define _RUN_H_

Env *run_list(AstList *list);
void run_expr(Env **env, Ast *expr);

NameList *ast_names(Ast *expr);

#endif // _RUN_H_
