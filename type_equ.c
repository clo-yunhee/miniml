#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "names.h"
#include "ast.h"
#include "environment.h"
#include "types.h"


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
