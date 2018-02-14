#include <stdio.h>

#include "names.h"
#include "symbols.h"
#include "ast.h"
#include "environment.h"
#include "types.h"



void type_print(typedata_t *type) {
    switch (type->type) {
    case et_unit:
        printf("unit");
        break;
    case et_int:
        printf("int");
        break;
    case et_float:
        printf("float");
        break;
    case et_bool:
        printf("bool");
        break;
    case et_string:
        printf("string");
        break;
    case et_natfun1:
        type_print(type->typeNatfun1.from);
        printf(" -> ");
        type_print(type->typeNatfun1.to);
    case et_natfun2:
        type_print(type->typeNatfun2.from1);
        printf(" -> ");
        type_print(type->typeNatfun2.from2);
        printf(" -> ");
        type_print(type->typeNatfun2.to);
        break;
    case et_fun:
        tdlist_print(type->typeFun.args, "->");
        printf(" -> ");
        type_print(type->typeFun.to);
        break;
    case et_tuple:
        tdlist_print(type->typeTuple, "*");
        break;
    default:
        printf("<unknown>");
        break;
    }
}

