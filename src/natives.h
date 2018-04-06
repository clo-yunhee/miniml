#ifndef _NATIVES_H_
#define _NATIVES_H_


#define NATFUN1(name, arg) Value * native_##name (Value * arg )
#define NATFUN2(name, arg1, arg2) Value * native_##name (Value * arg1 , Value * arg2 )

NATFUN2(addi, x, y);
NATFUN2(subi, x, y);
NATFUN2(muli, x, y);
NATFUN2(divi, x, y);

NATFUN2(addf, x, y);
NATFUN2(subf, x, y);
NATFUN2(mulf, x, y);
NATFUN2(divf, x, y);

NATFUN2(compare, x, y);
NATFUN2(equal, x, y);
NATFUN2(lt, x, y);
NATFUN2(gt, x, y);
NATFUN2(lte, x, y);
NATFUN2(gte, x, y);
NATFUN2(and, x, y);
NATFUN2(or, x, y);

NATFUN1(print_string, str);
NATFUN1(print_int, x);
NATFUN1(print_float, x);
NATFUN1(print_bool, x);

NATFUN1(int_of_float, x);
NATFUN1(float_of_int, x);

NATFUN1(hd, lst);
NATFUN1(tl, lst);


#endif // _NATIVES_H_
