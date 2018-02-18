#ifndef _VISIT_H_
#define _VISIT_H_

Type *visit_type(Env *env, Ast *expr, NameList **nameptr);
Value *visit_eval(Env *env, Ast *expr);

#endif // _VISIT_H_
