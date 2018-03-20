PROG := miniml

SHELL = /bin/sh
LEX   = flex
YACC  = bison
CC    = gcc
RM    = rm -f
MKDIR = mkdir -p
CFLAGS := -g -std=c11 -pedantic -Wall -Wextra -Wconversion #-Weverything
CFLAGS += -D_XOPEN_SOURCE=700 -DYYDEBUG -I.
LDFLAGS := -lfl -lcalg
# --nounput: ne génère pas la fonction yyunput() inutile
# --DYY_NO_INPUT: ne prend pas en compte la fonction input() inutile
# -D_POSIX_SOURCE: déclare la fonction fileno()
LEXOPTS  = -D_POSIX_SOURCE -DYY_NO_INPUT --nounput
YACCOPTS = --verbose

#CALGDIR := $(HOME)
CALGDIR := /usr/local
CFLAGS  += -I$(CALGDIR)/include/libcalg-1.0
LDFLAGS += -L$(CALGDIR)/lib

CFILES := main.c list.c environment.c
CFILES += name_table.c name_list.c string_escape.c
CFILES += ast_make.c ast_free.c ast_print.c
CFILES += value_make.c value_free.c value_print.c
CFILES += type_make.c type_free.c type_print.c type_equ.c
CFILES += run.c codegen.c
CFILES += $(wildcard natives/*.c)
CFILES += $(wildcard eval/*.c)
CFILES += $(wildcard infer/*.c)

#LYHFILES := $(PROG).yy.h $(PROG).tab.h
#HFILES := $(filter-out $(LYHFILES),$(wildcard *.h) $(wildcard */*.h))

#XXDFILES := $(addsuffix .xxd,$(addprefix xxd/,$(CFILES) $(HFILES)))

OBJFILES := $(subst .c,.o,$(CFILES))




.SECONDARY:

$(PROG): codegen_main.xxd $(PROG).yy.o $(PROG).tab.o $(OBJFILES)
	$(CC) $(filter-out codegen_main.xxd,$+) -o $@ $(LDFLAGS) 

%.yy.c: %.l %.tab.h
	$(LEX) $(LEXOPTS) --outfile=$@ $<

%.yy.h: %.l
	$(LEX) $(LEXOPTS) --header-file=$@ -t $< 1> /dev/null

%.tab.c %.tab.h: %.y %.yy.h
	$(YACC) $(YACCOPTS) $< -d

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

codegen_main.xxd: codegen_main.pre
	xxd -i codegen_main.pre codegen_main.xxd

codegen_main.pre: codegen_main.c
	gcc $(CFLAGS) -E codegen_main.c -o codegen_main.pre

.PHONY: graph
graph:
	$(YACC) $(YACCOPTS) $(PROG).y --graph
	dot -Tpng $(PROG).dot -O

.PHONY: report
report:
	$(MAKE) -C latex-report/ once

# Test
MLFILES = $(wildcard *.ml)
.PHONY: $(MLFILES)
$(MLFILES): $(PROG)
	"$(CURDIR)"/$(PROG) < "$@"


.PHONY: all
all: $(PROG)

.PHONY: clean-all
clean-all: clean
	$(RM) $(PROG) *.dot *.dot.png *.output *.out

.PHONY: clean
clean:
	$(RM) $(OBJFILES) *.yy.* *.tab.* *.err
	$(RM) codegen_main.pre codegen_main.xxd
	$(MAKE) -C latex-report/ clean

.PHONY: re
re: clean-all all

