#include "infer.h"


#define subst(type) subst_sub(sub, type)
#define substl(list) subst_sub_list(sub, list)


TypeList *subst_sub_list(Substitution *sub, TypeList *list) {
    TypeList *sublist = NULL;
    
    ListIterator it;
    list_iterate(&list, &it);
    
    while (list_iter_has_more(&it)) {
        Type *type = list_iter_next(&it);

        list_append(&sublist, subst(type));
    }

    return sublist;
}


Type *subst_sub(Substitution *sub, Type *type) {
    switch (type->type) {
    case et_unit:
    case et_int:
    case et_float:
    case et_bool:
    case et_string:
    case et_error:
        return type;
    /*case et_natfun1:
        return type_natfun1(
                subst(type->typeNatfun1.from),
                subst(type->typeNatfun1.to)
        );
    case et_natfun2:
        return type_natfun2(
                subst(type->typeNatfun2.from1),
                subst(type->typeNatfun2.from2),
                subst(type->typeNatfun2.to)
        );*/
    case et_fun:
        return type_fun(
                substl(type->typeFun.args),
                subst(type->typeFun.to)
        );
    case et_tuple:
        return type_tuple(
                substl(type->typeTuple)
        );
    case et_poly:
        // if the polymorph type is the same as the substitution, substitute 
        if (type->typePoly == sub->poly) {
            return sub->type;
        } else {
            return type;
        }
    default:
        IERR("Inference subst type not implemented");
        return type;
    }
}

