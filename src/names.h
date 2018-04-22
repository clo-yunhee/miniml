#ifndef _NAMES_H_
#define _NAMES_H_

#include <stddef.h>

#define NO_NAME 0

void names_init(void);
void names_free(void);

void names_settablecap(int capacity);

int names_getid(const char *name);
const char *names_getnm(int id);

int operator_id(int t);

/* list */

void nmlist_free(NameList *list);
void nmlist_print(NameList *list);


#endif // _NAMES_H_
