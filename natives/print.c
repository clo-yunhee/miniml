#include "nat.h"

NATFUN1(print_string, str) {
    printf("%s", unescape(str->valString));
    RUNIT();
}
