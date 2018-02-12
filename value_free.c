#include <stdlib.h>

#include "names.h"
#include "ast.h"
#include "environment.h"
#include "values.h"

void value_free(value_t *value) {
    switch (value->type) {
    case et_tuple:
        vlist_free(value->valTuple);
        break;
    default:
        break;
    }
}
