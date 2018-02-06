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
    lst->elem = head;
    lst->next = tail;
    return lst;
}
