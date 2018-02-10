#include <stdlib.h>

#include "symbols.h"


symlist_t *symlist_make(symbol_t *head, symlist_t *tail) {
    symlist_t *lst = malloc(sizeof(symlist_t));
    if (lst == NULL) return NULL;
    lst->elem = head;
    lst->next = tail;
    lst->size = tail != NULL ? (1 + tail->size) : 0;
    return lst;
}

symlist_t *symlist_revRec(symlist_t *list, symlist_t *acc) {
    if (list == NULL) return acc;
    symlist_t *revlst = symlist_revRec(list->next, symlist_make(list->elem, acc));
    free(list);
    return revlst;
}

symlist_t *symlist_rev(symlist_t *list) {
    return symlist_revRec(list, NULL);
}

void symlist_free(symlist_t *list) {
    if (list == NULL) return;
    // don't free the symbol itself
    symlist_free(list->next);
    free(list);
}
