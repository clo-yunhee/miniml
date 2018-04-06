#include "nat.h"

NATFUN1(hd, lst) {
    return lst->valList.head;
}

NATFUN1(tl, lst) {
    return lst->valList.tail;
}
