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

    et_poly
} type_t;

typedef value_t * (*natfun1_t)(value_t *);
typedef value_t * (*natfun2_t)(value_t *, value_t *);

/* env */

struct env {
    int name;
    value_t *value; 

    struct env *next;
};

env_t *env_init(void);

env_t *env_make(int name, value_t *value, env_t *tail);
env_t *env_addvalue(int name, value_t *value, env_t *tail);

#endif // _ENVIRONMENT_H_
