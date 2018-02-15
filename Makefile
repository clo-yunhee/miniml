SHELL = /bin/sh
LEX   = flex
YACC  = bison
CC    = gcc
RM    = rm -f
MKDIR = mkdir -p
CFLAGS := -g -std=c11 -pedantic -Wall -Werror
CFLAGS += -D_XOPEN_SOURCE=700 -DYYDEBUG 
LDFLAGS := -lfl -lcalg
# --nounput: ne génère pas la fonction yyunput() inutile
# --DYY_NO_INPUT: ne prend pas en compte la fonction input() inutile
# -D_POSIX_SOURCE: déclare la fonction fileno()
LEXOPTS  = -D_POSIX_SOURCE -DYY_NO_INPUT --nounput
YACCOPTS = --verbose

CALGDIR := /usr/local/
CFLAGS  += -I$(CALGDIR)/include/libcalg-1.0
LDFLAGS += -L$(CALGDIR)/lib

CFILES := main.c list.c
CFILES += name_list.c name_table.c string_escape.c
#CFILES += symbol_make.c symbol_free.c symbol_list.c symbol_table.c
CFILES += ast_make.c ast_free.c ast_list.c ast_print.c
CFILES += value_make.c value_free.c value_list.c value_print.c
CFILES += type_make.c type_free.c type_list.c type_print.c type_equ.c
CFILES += environment.c
CFILES += $(wildcard natives/*.c)
CFILES += $(wildcard type/*.c)
CFILES += $(wildcard eval/*.c)

OBJFILES := $(subst .c,.o,$(CFILES))


PROG := miniml


.SECONDARY:

$(PROG): $(PROG).yy.o $(PROG).tab.o $(OBJFILES)
	$(CC) $+ -o $@ $(LDFLAGS) 

%.yy.c: %.l %.tab.h
	$(LEX) $(LEXOPTS) --outfile=$@ $<

%.yy.h: %.l
	$(LEX) $(LEXOPTS) --header-file=$@ -t $< 1> /dev/null

%.tab.c %.tab.h: %.y %.yy.h
	$(YACC) $(YACCOPTS) $< -d

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: graph
graph:
	$(YACC) $(YACCOPTS) $(PROG).y --graph
	dot -Tpng $(PROG).dot -O

# Test
MLFILES = $(wildcard *.ml)
.PHONY: $(MLFILES)
$(MLFILES): $(PROG)
	"$(CURDIR)"/$(PROG) < "$@"

.PHONY: all
all: $(PROG)

.PHONY: clean-all
clean-all: clean
	@$(RM) $(PROG) *.dot *.dot.png *.output *.out

.PHONY: clean
clean:
	@$(RM) $(OBJFILES) *.yy.* *.tab.* *.err

.PHONY: re
re: clean-all all

