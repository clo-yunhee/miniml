#include "common.h"

void tdlist_free(TypeList *list) {
    list_foreach(list, (ListConsumer) type_free);
    list_free(list);
}

void type_free(typedata_t *type) {
    if (type == NULL) return;

    switch (type->type) {
    case et_natfun1:
        type_free(type->typeNatfun1.from);
        type_free(type->typeNatfun1.to);
        break;
    case et_natfun2:
        type_free(type->typeNatfun2.from1);
        type_free(type->typeNatfun2.from2);
        type_free(type->typeNatfun2.to);
        break;
    case et_fun:
        tdlist_free(type->typeFun.args);
        type_free(type->typeFun.to);
        break;
    case et_tuple:
        tdlist_free(type->typeTuple);
        break;
    default:
        break;
    }

    free(type);
}
