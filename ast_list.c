#include <stdlib.h>

#include "ast.h"

astlist_t *alist_make(ast_t *head, astlist_t *tail) {
    astlist_t *lst = malloc(sizeof(astlist_t));
    lst->elem = head;
    lst->next = tail;
    return lst;
}

params_t *plist_make(int head, params_t *tail) {
    params_t *lst = malloc(sizeof(params_t));
    lst->name = head;
    lst->next = tail;
    return lst;
}

void alist_free(astlist_t *list) {
    if (list == NULL) return;

    ast_free(list->elem);
    alist_free(list->next);
    free(list);
}

void plist_free(params_t *list) {
    if (list == NULL) return;

    plist_free(list->next);
    free(list);
}
