#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "names.h"
#include "ast.h"
#include "environment.h"
#include "values.h"

void vlist_free(ValueList *list) {
    ListIterator it;
    list_iterate(&list, &it);
    while (list_iter_has_more(&it)) {
        value_t *value = list_iter_next(&it);
    
        value_free(value);    

        list_iter_remove(&it);
    }
    list_free(list);
}

void vlist_print(ValueList *list) {
    list_print(list, (ListPrintFunc) value_print, "(", ", ", ")");
}
