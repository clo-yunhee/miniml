#include "common.h"


Type *native_actual_type(NativeDesc *fn, Type *type) {
    
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
    case et_natfun:
    {
        TypeList *args = NULL;
        ListIterator it;
        list_iterate(&type->typeNative->args, &it);
        while (list_iter_has_more(&it)) {
            Type *arg = list_iter_next(&it);
            list_append(&args, native_actual_type(fn, arg));
        }
        newType->typeNative->args = args;
        newType->typeNative->retType = native_actual_type(fn, type->typeNative->retType);
        break;
    }
    case et_fun:
    {
        TypeList *args = NULL;
        ListIterator it;
        list_iterate(&type->typeFun.args, &it);
        while (list_iter_has_more(&it)) {
            Type *arg = list_iter_next(&it);
            list_append(&args, native_actual_type(fn, arg));
        }
        newType->typeFun.args = args;
        newType->typeFun.to = native_actual_type(fn, type->typeFun.to);
        break;
    }
    case et_tuple:
    {
        TypeList *tuple = NULL;
        ListIterator it;
        list_iterate(&type->typeTuple, &it);
        while (list_iter_has_more(&it)) {
            Type *elem = list_iter_next(&it);
            list_append(&tuple, native_actual_type(fn, elem));
        }
        newType->typeTuple = tuple;
        break;
    }
    case et_list:
    {
        newType->typeList = native_actual_type(fn, type->typeList);
        break;
    }
    case et_poly:
    {
        // poly 0 is return type
        // poly 1..n are param types
        free(newType);
        unsigned int i = (unsigned) newType->typePoly;
        if (i == 0) {
            newType = fn->retType;
        } else {
            unsigned int size = list_length(fn->args);
            if (i <= size) {
                newType = list_nth_data(fn->args, i - 1);
            } else {
                fprintf(stderr, "Native constraint index out of bounds\n");
                return terror;
            }
        }
        break;
    }
    default:
        fprintf(stderr, "Native constraint visit type not implemented\n");
        return terror;
    }

    return newType;

}
