#include <stdio.h>

#include "list.h"
#include "names.h"
#include "symbols.h"
#include "ast.h"
#include "environment.h"
#include "types.h"
#include "values.h"


void value_print(value_t *value) {
    switch (value->type) {
    case et_unit:
        printf("()");
        break;
    case et_int:
        printf("%d", value->valInt);
        break;
    case et_float:
        printf("%g", value->valFloat);
        break;
    case et_bool:
        printf("%s", (value->valBool ? "true" : "false"));
        break;
    case et_string:
        printf("%s", value->valString);
        break;
    case et_natfun1:
    case et_natfun2:
        printf("<native-fun>");
        break;
    case et_fun:
        printf("<fun>");
        break;
    case et_tuple:
        vlist_print(value->valTuple);
        break;
    case et_error:
    default:
        printf("???");
        break;
    }
}

