#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "ast.h"
#include "environment.h"
#include "types.h"

tdlist_t *tdlist_make(typedata_t *head, tdlist_t *tail) {
    tdlist_t *lst = malloc(sizeof(tdlist_t));
    if (lst == NULL) return NULL;
    lst->size = (tail != NULL ? 1 + tail->size : 1);
    lst->elem = head;
    lst->next = tail;
    return lst;
}

tdlist_t *tdlist_revRec(tdlist_t *list, tdlist_t *acc) {
    if (list == NULL) return acc;
    tdlist_t *revlst = tdlist_revRec(list->next, tdlist_make(list->elem, acc));
    free(list);
    return revlst;
}

tdlist_t *tdlist_rev(tdlist_t *list) {
    return tdlist_revRec(list, NULL);
}

void tdlist_free(tdlist_t *list) {
    if (list == NULL) return;
    type_free(list->elem);
    tdlist_free(list->next);
    free(list);
}

void tdlist_partprint(tdlist_t *list, const char *delim) {
    if (list == NULL) return;

    type_print(list->elem);
    if (list->next != NULL)
        printf(" %s ", delim);

    tdlist_partprint(list->next, delim);
}

void tdlist_print(tdlist_t *list, const char *pref, const char *delim, const char *suff) {
    printf("%s", pref);
    tdlist_partprint(list, delim);
    printf("%s", suff);
}

bool tdlist_equ(tdlist_t *first, tdlist_t *second) {
    if (first->size != second->size) return false;
    
    while (first != NULL) {
        if (!type_equ(first->elem, second->elem))
            return false;
        first = first->next;
        second = second->next;
    }

    return true;
}
