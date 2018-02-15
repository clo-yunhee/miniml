#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "names.h"
#include "ast.h"

void alist_free(AstList *list) {
    list_foreach(list, (ListConsumer) ast_free);
    list_free(list);
}

void alist_print(AstList *list) {
    list_print(list, (ListPrintFunc) ast_print, "[", ", ", "]");
}
