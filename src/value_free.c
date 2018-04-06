#include "common.h"

void vlist_free(ValueList *list) {
    list_foreach(list, (ListConsumer) value_free);
    list_free(list);
}

void value_free(Value *value) {
    if (value == NULL) return;

    switch (value->type) {
    case et_fun:
        nmlist_free(value->valFun.params);
        ast_free(value->valFun.body);
        break;
    case et_tuple:
        vlist_free(value->valTuple);
        break;
    case et_list:
        value_free(value->valList.head);
        value_free(value->valList.tail);
        break;
    default:
        break;
    }

    free(value);
}
