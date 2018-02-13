#ifndef _NAMES_H_
#define _NAMES_H_

#include <stddef.h>



#define UNDEFINED (-1)
#define NO_NAME 0

typedef struct namelist namelist_t;

struct namelist {
    size_t size;
    int name;
    struct namelist *next;
};

void names_init(void);
void names_free(void);

void names_settablecap(int capacity);

int names_getid(const char *name);
const char *names_getnm(int id);

int operator_id(int t);

/* list */

namelist_t *nmlist_make(int head, namelist_t *tail);
namelist_t *nmlist_rev(namelist_t *list);
void nmlist_free(namelist_t *list);
void nmlist_print(namelist_t *list);

/* standard name */

extern int name_addi, name_addf;
extern int name_subi, name_subf;
extern int name_muli, name_mulf;
extern int name_divi, name_divf;
extern int name_print_string;
extern int name_equal;
extern int name_lt, name_lte;
extern int name_gt, name_gte;
extern int name_compare;

#endif // _NAMES_H_
