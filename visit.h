#ifndef _VISIT_H_
#define _VISIT_H_

typedata_t *visit_type(env_t *env, ast_t *expr, namelist_t **nameptr);
value_t *visit_eval(env_t *env, ast_t *expr);

#endif // _VISIT_H_
