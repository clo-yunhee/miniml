#include "nat.h"

NATFUN1(print_string, str) {
    printf("%s", unescape(str->valString));
    RUNIT();
}

NATFUN1(print_int, x) {
    printf("%d", x->valInt);
    RUNIT();
}

NATFUN1(print_float, x) {
    printf("%g", (double) x->valFloat);
    RUNIT();
}

NATFUN1(print_bool, x) {
    printf("%s", (x->valBool ? "true" : "false"));
    RUNIT();
}
