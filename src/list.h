#ifndef _LIST_H_
#define _LIST_H_

#include <libcalg.h>

typedef void (*ListPrintFunc)(ListValue value);
typedef void (*ListConsumer)(ListValue value);

ListEntry *list_new(ListValue value);
ListEntry *list_from(ListValue first, ...);

ListEntry *list_concat(ListEntry *first, ListEntry *second);

ListEntry *list_last_entry(ListEntry *list);
ListValue list_last_data(ListEntry *list);

void list_foreach(ListEntry *list, ListConsumer func);
void list_print(ListEntry *list, ListPrintFunc func,
        const char *pref, const char *delim, const char *suff);

void arraylist_foreach(ArrayList *list, ListConsumer func);

typedef ListEntry AstList;
typedef ListEntry NameList;
typedef ListEntry TypeList;
typedef ListEntry ValueList;

typedef ListEntry TypedAstList;
typedef ListEntry ConsList;
typedef ListEntry SubstList;

void *nmalloc(int name);

#endif // _LIST_H_
