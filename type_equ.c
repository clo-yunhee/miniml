#include "common.h"

bool tdlist_equ(TypeList *first, TypeList *second) {
    ListIterator it1, it2;
    list_iterate(&first, &it1);
    list_iterate(&second, &it2);
    
    while (list_iter_has_more(&it1) && list_iter_has_more(&it2)) {
        typedata_t *type1 = list_iter_next(&it1);
        typedata_t *type2 = list_iter_next(&it2);
        
        if (!type_equ(type1, type2))
            return false;
    }

    // if the lists don't have the same size then they can't be equal
    return list_iter_has_more(&it1) || list_iter_has_more(&it2);
}

bool type_equ(typedata_t *first, typedata_t *second) {
    if (first == NULL || second == NULL) return false;
    if (first->type != second->type) {
        return (first->type == et_poly) || (second->type == et_poly);
    }

    switch (first->type) {
    case et_unit:
    case et_int:
    case et_float:
    case et_bool:
    case et_string:
    case et_error:
        return true;
    case et_natfun1:
        return type_equ(first->typeNatfun1.from, second->typeNatfun1.from)
                && type_equ(first->typeNatfun1.to, second->typeNatfun1.to);
    case et_natfun2:
        return type_equ(first->typeNatfun2.from1, second->typeNatfun2.from1)
                && type_equ(first->typeNatfun2.from2, second->typeNatfun2.from2)
                && type_equ(first->typeNatfun2.to, second->typeNatfun2.to);
    case et_fun:
        return tdlist_equ(first->typeFun.args, second->typeFun.args)
                && type_equ(first->typeFun.to, second->typeFun.to);
    case et_tuple:
        return tdlist_equ(first->typeTuple, second->typeTuple);
    case et_poly:
        return first->typePoly == second->typePoly;
    default:
        fprintf(stderr, "Type equality not implemented yet\n");
        return false;
    }
}

