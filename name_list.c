#include <stdio.h>
#include <stdlib.h>

#include "names.h"


namelist_t *nmlist_make(int head, namelist_t *tail) {
    namelist_t *lst = malloc(sizeof(namelist_t));
    if (lst == NULL) return NULL;
    lst->size = (tail != NULL ? 1 + tail->size : 1);
    lst->name = head;
    lst->next = tail;
    return lst;
}

namelist_t *nmlist_revRec(namelist_t *list, namelist_t *acc) {
    if (list == NULL) return acc;
    namelist_t *revlst = nmlist_revRec(list->next, nmlist_make(list->name, acc));
    free(list);
    return revlst;
}

namelist_t *nmlist_rev(namelist_t *list) {
    return nmlist_revRec(list, NULL);
}

void nmlist_free(namelist_t *list) {
    if (list == NULL) return;
    nmlist_free(list->next);
    free(list);
}

void nmlist_partprint(namelist_t *list) {
    if (list == NULL) return;

    printf("%s", names_getnm(list->name));
    if (list->next != NULL)
        printf(", ");
    
    nmlist_partprint(list->next);
}

void nmlist_print(namelist_t *list) {
    printf("(");
    nmlist_partprint(list);
    printf(")");
}
