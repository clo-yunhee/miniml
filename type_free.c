#include <stdlib.h>

#include "names.h"
#include "ast.h"
#include "environment.h"
#include "types.h"

void type_free(typedata_t *type) {
    if (type == NULL) return;

    switch (type->type) {
    case et_natfun1:
        type_free(type->typeNatfun1);
        break;
    case et_natfun2:
        type_free(type->typeNatfun2.from);
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
