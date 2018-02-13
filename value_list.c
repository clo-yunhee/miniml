#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "ast.h"
#include "environment.h"
#include "values.h"

vlist_t *vlist_make(value_t *head, vlist_t *tail) {
    vlist_t *lst = malloc(sizeof(vlist_t));
    if (lst == NULL) return NULL;
    lst->size = (tail != NULL ? 1 + tail->size : 1);
    lst->elem = head;
    lst->next = tail;
    return lst;
}

vlist_t *vlist_revRec(vlist_t *list, vlist_t *acc) {
    if (list == NULL) return acc;
    vlist_t *revlst = vlist_revRec(list->next, vlist_make(list->elem, acc));
    free(list);
    return revlst;
}

vlist_t *vlist_rev(vlist_t *list) {
    return vlist_revRec(list, NULL);
}

void vlist_free(vlist_t *list) {
    if (list == NULL) return;
    value_free(list->elem);
    vlist_free(list->next);
    free(list);
}

void vlist_partprint(vlist_t *list) {
    if (list == NULL) return;

    value_print(list->elem);
    if (list->next != NULL)
        printf(", ");

    vlist_partprint(list->next);
}

void vlist_print(vlist_t *list) {
    printf("(");
    vlist_partprint(list);
    printf(")");
}
