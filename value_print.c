#include <stdio.h>

#include "ast.h"
#include "names.h"
#include "values.h"


void value_print(value_t *value) {
    switch (value->type) {
    case et_unit:
        printf("[unit]");
        break;
    case et_int:
        printf("[int = %d]", value->valInt);
        break;
    case et_float:
        printf("[float = %g]", value->valFloat);
        break;
    case et_bool:
        printf("[bool = %s]", (value->valBool ? "true" : "false"));
        break;
    case et_string:
        printf("[string = \"%s\"]", value->valString);
        break;
    case et_fun:
        //TODO: use actual type
        printf("[fun = <fun>]");
        break;
    default:
        printf("[unhandled]");
        break;
    }
}
