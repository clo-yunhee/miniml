#include "nat.h"

NATFUN1(print_string, str) {
    printf("%s", str->valString);
    return value_make_unit();
}
