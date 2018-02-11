#ifndef _NATIVES_H_
#define _NATIVES_H_


#define NATFUN1(name, arg) value_t * native_##name (value_t * arg )
#define NATFUN2(name, arg1, arg2) value_t * native_##name (value_t * arg1 , value_t * arg2 )

NATFUN2(addi, x, y);
NATFUN2(subi, x, y);
NATFUN2(muli, x, y);
NATFUN2(divi, x, y);

NATFUN2(addf, x, y);
NATFUN2(subf, x, y);
NATFUN2(mulf, x, y);
NATFUN2(divf, x, y);

NATFUN1(print_string, str);

#endif // _NATIVES_H_
