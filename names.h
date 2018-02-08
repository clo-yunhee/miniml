#ifndef _NAMES_H_
#define _NAMES_H_

void names_init();
void names_free();

int names_settablecap(int capacity);

int names_getid(const char *name);
const char *names_getnm(int id);

int operator_id(int t);

#endif // _NAMES_H_
