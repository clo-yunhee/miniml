#include "common.h"

void vlist_free(ValueList *list) {
    list_foreach(list, (ListConsumer) value_free);
    list_free(list);
}

void value_free(value_t *value) {
    if (value == NULL) return;

    switch (value->type) {
    case et_tuple:
        vlist_free(value->valTuple);
        break;
    default:
        break;
    }

    free(value);
}
