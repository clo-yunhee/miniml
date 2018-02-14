#ifndef _VISIT_H_
#define _VISIT_H_

typedata_t *visit_type(env_t *env, ast_t *expr, int *nameptr);
value_t *visit_eval(env_t *env, ast_t *expr, int *nameptr);

#endif // _VISIT_H_
