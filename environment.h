#ifndef _ENVIRONMENT_H_
#define _ENVIRONMENT_H_

typedef struct env env_t;

typedef struct expr_value value_t;
typedef struct expr_valuelist vlist_t;

typedef struct expr_typedata typedata_t;
typedef struct expr_typedata_list tdlist_t;

/* expr */

typedef enum expr_type {
    et_unit,
    et_int, et_float, et_bool, et_string,
    et_natfun1, et_natfun2,
    et_fun, et_tuple,

    et_poly, et_error
} type_t;

typedef value_t * (*natfun1_t)(value_t *);
typedef value_t * (*natfun2_t)(value_t *, value_t *);

/* env */

struct env {
    int name;
    typedata_t *type;
    value_t *value; 

    struct env *next;
};

env_t *env_init(void);

env_t *env_make(int name, typedata_t *type, value_t *value, env_t *tail);
env_t *env_addlist(namelist_t *names, tdlist_t *types, vlist_t *values, env_t *tail);


void env_print(env_t *env);
void env_printrange(env_t *env, env_t *from);
void env_printall(env_t *env);

#define env_tmake(name, type, tail)   env_make(name, type, NULL, tail)
#define env_vmake(name, value, tail)  env_make(name, NULL, value, tail)

#endif // _ENVIRONMENT_H_
