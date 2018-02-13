#ifndef _NAT_H_
#define _NAT_H_

#include <stdio.h>
#include <stdlib.h>

#include "../names.h"
#include "../symbols.h"
#include "../ast.h"
#include "../environment.h"
#include "../values.h"
#include "../natives.h"

#define RUNIT() return value_make_unit()
#define RINT(x) return value_make_int((x))
#define RFLOAT(x) return value_make_float((x))
#define RBOOL(x) return value_make_bool((x))


#endif // _NAT_H_
