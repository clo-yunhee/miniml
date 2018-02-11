#ifndef _ENVIRONMENT_H_
#define _ENVIRONMENT_H_

typedef struct env env_t;
typedef struct expr_value value_t;

struct env {
    int name;
    value_t *value;    

    struct env *next;
};

env_t *env_init(void);

env_t *env_make(int name, value_t *value, env_t *tail);

#endif // _ENVIRONMENT_H_
