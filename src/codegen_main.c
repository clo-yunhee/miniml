#include "common.h"

#include "ast_make.c"
#include "ast_free.c"
#include "value_make.c"
#include "value_free.c"
#include "value_print.c"
#include "type_make.c"
#include "type_free.c"
#include "type_print.c"
#include "type_equ.c"
#include "name_list.c"
#include "name_table.c"
#include "environment.c"
#include "list.c"
#include "run.c"
#include "string_escape.c"

#include "eval/eval.h"
#include "eval/eval.c"
#include "eval/funcall.c"
#include "eval/ifelse.c"
#include "eval/let.c"
#include "eval/list.c"
#include "eval/seq.c"
#include "eval/tuple.c"
#include "eval/variable.c"

#include "infer/infer.h"
#include "infer/infer.c"
#include "infer/annotate.c"
#include "infer/apply.c"
#include "infer/constraints.c"
#include "infer/make.c"
#include "infer/print.c"
#include "infer/repoly.c"
#include "infer/subst.c"
#include "infer/typed_print.c"
#include "infer/unify.c"

#include "natives/nat.h"
#include "natives/cmp.c"
#include "natives/conv.c"
#include "natives/list.c"
#include "natives/mathf.c"
#include "natives/mathi.c"
#include "natives/print.c"


