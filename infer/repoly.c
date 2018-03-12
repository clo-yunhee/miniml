#include "infer.h"


Type *type_repoly(Type *type) {
    
    Type *newType = malloc(sizeof(Type));

    memcpy(newType, type, sizeof(Type));

    switch (type->type) {
    case et_unit:
    case et_int:
    case et_float:
    case et_bool:
    case et_string:
    case et_error:
        break;
    case et_fun:
    {
        TypeList *args = NULL;
        ListIterator it;
        list_iterate(&type->typeFun.args, &it);
        while (list_iter_has_more(&it)) {
            Type *arg = list_iter_next(&it);
            list_append(&args, type_repoly(arg));
        }
        newType->typeFun.args = args;
        newType->typeFun.to = type_repoly(type->typeFun.to);
        break;
    }
    case et_tuple:
    {
        TypeList *tuple = NULL;
        ListIterator it;
        list_iterate(&type->typeTuple, &it);
        while (list_iter_has_more(&it)) {
            Type *elem = list_iter_next(&it);
            list_append(&tuple, type_repoly(elem));
        }
        newType->typeTuple = tuple;
        break;
    }
    case et_poly:
    {
        // poly == 0 is a placeholder
        if (newType->typePoly == 0) {
            newType->typePoly = poly++;
        }
        break;
    }
    default:
        IERR("Inference repoly type not implemented");
        break;
    }

    return newType;

}
