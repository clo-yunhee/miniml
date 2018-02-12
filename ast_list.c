#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "ast.h"


astlist_t *alist_make(ast_t *head, astlist_t *tail) {
    astlist_t *lst = malloc(sizeof(astlist_t));
    if (lst == NULL) return NULL;
    lst->size = (tail != NULL ? 1 + tail->size : 1);
    lst->elem = head;
    lst->next = tail;
    return lst;
}

astlist_t *alist_revRec(astlist_t *list, astlist_t *acc) {
    if (list == NULL) return acc;
    astlist_t *revlst = alist_revRec(list->next, alist_make(list->elem, acc));
    free(list);
    return revlst;
}

astlist_t *alist_rev(astlist_t *list) {
    return alist_revRec(list, NULL);
}

void alist_free(astlist_t *list) {
    if (list == NULL) return;
    ast_free(list->elem);
    alist_free(list->next);
    free(list);
}

void alist_partprint(astlist_t *list) {
    if (list == NULL) return;

    ast_print(list->elem);
    if (list->next != NULL)
        printf(", \n");

    alist_partprint(list->next);
}

void alist_print(astlist_t *list) {
    printf("[");
    alist_partprint(list);
    printf("]");
}
