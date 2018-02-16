#ifndef _VISIT_H_
#define _VISIT_H_

Type *visit_type(Environment *env, Ast *expr, NameList **nameptr);
Value *visit_eval(Environment *env, Ast *expr);

#endif // _VISIT_H_
