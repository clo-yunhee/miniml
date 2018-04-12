#include "common.h"

void tdlist_print(TypeList *list, const char *pref, const char *delim, const char *suff) {
    list_print(list, (ListPrintFunc) type_print, pref, delim, suff);
}

void type_print(Type *type) {
    if (type == NULL) {
        printf("<null>");
        return;
    }

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
    case et_natfun:
        printf("(");
        tdlist_print(type->typeNative->args, "", " -> ", "");
        printf(" -> ");
        type_print(type->typeNative->retType);
        printf(")");
        break;
    case et_fun:
        printf("(");
        tdlist_print(type->typeFun.args, "", " -> ", "");
        printf(" -> ");
        type_print(type->typeFun.to);
        printf(")");
        break;
    case et_tuple:
        tdlist_print(type->typeTuple, "(", " * ", ")");
        break;
    case et_list:
        type_print(type->typeList);
        printf(" list");
        break;
    case et_poly:
        printf("'");
        if (type->typePoly <= 26) {
            printf("%c", (char) ('a' + type->typePoly - 1));
        } else {
            printf("_%d", type->typePoly);
        }
        break;
    case et_error:
        printf("<error>");
        break;
    default:
        printf("<unknown>");
        break;
    }
}

