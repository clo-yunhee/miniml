#include <stdio.h>
#include <stdlib.h>

#include "names.h"
#include "ast.h"

//make

astlist_t *alist_make(ast_t *head, astlist_t *tail) {
    astlist_t *lst = malloc(sizeof(astlist_t));
    if (lst == NULL) return NULL;
    lst->elem = head;
    lst->next = tail;
    return lst;
}

params_t *plist_make(int head, params_t *tail) {
    params_t *lst = malloc(sizeof(params_t));
    if (lst == NULL) return NULL;
    lst->name = head;
    lst->next = tail;
    return lst;
}

//make

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

//partprint

void alist_partprint(astlist_t *list) {
    if (list == NULL) return;

    ast_print(list->elem);
    if (list->next != NULL)
        printf(", ");

    alist_partprint(list->next);
}

void plist_partprint(params_t *list) {
    if (list == NULL) return;

    printf("%s", names_getnm(list->name));
    if (list->next != NULL)
        printf(", ");

    plist_partprint(list->next);
}

//print

void alist_print(astlist_t *list) {
    printf("[");
    alist_partprint(list);
    printf("]");
}

void plist_print(params_t *list) { 
    printf("(");
    plist_partprint(list);
    printf(")");
}
