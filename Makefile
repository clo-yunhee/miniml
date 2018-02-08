SHELL=/bin/sh
LEX=flex
YACC=bison
CC=gcc
RM=rm -f
MKDIR=mkdir -p
CFLAGS=-g -std=c11 -pedantic -Wall -Werror -D_XOPEN_SOURCE=700
LDFLAGS=-lfl
# --nounput: ne génère pas la fonction yyunput() inutile
# --DYY_NO_INPUT: ne prend pas en compte la fonction input() inutile
# -D_POSIX_SOURCE: déclare la fonction fileno()
LEXOPTS=-D_POSIX_SOURCE -DYY_NO_INPUT --nounput
YACCOPTS=--verbose

PROG=miniml

.PHONY: all
all: $(PROG) clean

$(PROG): $(PROG).yy.o $(PROG).tab.o \
		names.c \
		ast_make.c ast_free.c ast_list.c ast_print.c \
		main.c
	$(CC) $+ -o $@ $(LDFLAGS) 

%.yy.c: %.l %.tab.h
	$(LEX) $(LEXOPTS) --outfile=$@ $<

%.yy.h: %.l
	$(LEX) $(LEXOPTS) --header-file=$@ -t $< 1> /dev/null

%.tab.c %.tab.h: %.y %.yy.h
	$(YACC) $(YACCOPTS) $< -d

%.o: %.c
	$(CC) -DYYDEBUG $(CFLAGS) $< -c

.PHONY: graph
graph:
	$(YACC) $(YACCOPTS) $(PROG).y --graph
	dot -Tpng $(PROG).dot -O

.PHONY: clean-all
clean-all: clean
	@$(RM) $(PROG) *.dot *.dot.png *.output *.out

.PHONY: clean
clean:
	@$(RM) *.o *.yy.* *.tab.* *.err

.PHONY: re
re: clean-all all

