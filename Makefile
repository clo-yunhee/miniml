PROG := miniml

SHELL = /bin/sh
LEX   = flex
YACC  = bison
CC    = gcc
RM    = rm -f
MKDIR = mkdir -p
CFLAGS := -g -std=c11 -pedantic -Wall -Wextra -Wconversion #-Weverything
CFLAGS += -D_XOPEN_SOURCE=700 -DYYDEBUG -Isrc
LDFLAGS := -Wl,-Bstatic -lcalg -Wl,-Bdynamic -lfl
# --nounput: ne génère pas la fonction yyunput() inutile
# --DYY_NO_INPUT: ne prend pas en compte la fonction input() inutile
# -D_POSIX_SOURCE: déclare la fonction fileno()
LEXOPTS  = -D_POSIX_SOURCE -DYY_NO_INPUT --nounput
YACCOPTS = --verbose


#--- Libcalg

CALG_DIR := libcalg
CFLAGS  += -I$(CALG_DIR)/include
LDFLAGS += -L$(CALG_DIR)/lib

#--- Directories

BIN_DIR := bin
SRC_DIR := src
OBJ_DIR := obj

#--- Files

C_FILES := $(shell find $(SRC_DIR) -type f -name "*.c") 
H_FILES := $(shell find $(SRC_DIR) -type f -name "*.h")

C_FILES := $(filter-out $(SRC_DIR)/codegen_main.c,$(C_FILES))

LY_OBJ_FILES := $(OBJ_DIR)/$(PROG).yy.o $(OBJ_DIR)/$(PROG).tab.o

OBJ_FILES := $(C_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o) $(LY_OBJ_FILES)
DEP_FILES := $(OBJ_FILES:%.o=%.d)

#--- Functions?

define compile
	$(CC) $(CFLAGS) -MMD -c $(1) -o $(2)
endef

#--- Rules

.SECONDARY:
$(BIN_DIR)/$(PROG): gendirs $(OBJ_DIR)/codegen_main.xxd $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $@ $(LDFLAGS) 

#--- Lex/Yacc source targets

$(OBJ_DIR)/%.yy.c: $(SRC_DIR)/%.l $(OBJ_DIR)/%.tab.h
	$(LEX) $(LEXOPTS) --outfile=$@ $<

$(OBJ_DIR)/%.yy.h: $(SRC_DIR)/%.l
	$(LEX) $(LEXOPTS) --header-file=$@ -t $< 1> /dev/null

$(OBJ_DIR)/%.tab.c $(OBJ_DIR)/%.tab.h: $(SRC_DIR)/%.y $(OBJ_DIR)/%.yy.h
	$(YACC) $(YACCOPTS) $< --defines=$(OBJ_DIR)/$(PROG).tab.h --output=$(OBJ_DIR)/$(PROG).tab.c

-include $(OBJ_DIR)/$(PROG).yy.d $(OBJ_DIR)/$(PROG).tab.d

#--- Object file targets

-include $(DEP_FILES)

$(OBJ_DIR)/%.yy.o: $(OBJ_DIR)/%.yy.c $(OBJ_DIR)/%.yy.h
	$(call compile,$<,$@)

$(OBJ_DIR)/%.tab.o: $(OBJ_DIR)/%.tab.c $(OBJ_DIR)/%.tab.h
	$(call compile,$<,$@)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(call compile,$<,$@)

#--- Codegen hex targets

%.xxd: %.pre
	xxd -i $< $@

$(OBJ_DIR)/codegen_main.pre: $(SRC_DIR)/codegen_main.c $(C_FILES) $(H_FILES)
	gcc $(CFLAGS) -E $< -o $@

#--- LibCalg build

.PHONY: libcalg
libcalg:
	ln -srf Makefile.libcalg libcalg/
	$(MAKE) -C libcalg/ --makefile=Makefile.libcalg

#--- Other targets

.PHONY: graph
graph:
	$(YACC) $(YACCOPTS) $(PROG).y --graph
	dot -Tpng $(PROG).dot -O

.PHONY: report
report:
	$(MAKE) -C latex-report/ once

#--- Grouped utilities

.PHONY: all
all: libcalg $(PROG)

.PHONY: $(PROG)
$(PROG): $(BIN_DIR)/$(PROG)

.PHONY: clean-all
clean-all: clean clean-libcalg
	$(RM) $(PROG) *.dot *.dot.png *.output *.out

.PHONY: clean
clean:
	-find $(OBJ_DIR)/ -type f -exec $(RM) {} \;
	-$(MAKE) -C latex-report/ clean
	-$(RM) *.err

.PHONY: clean-libcalg
	-$(MAKE) -C libcalg/ clean
	-$(RM) -r libcalg/lib/
	-$(RM) -r libcalg/include/

.PHONY: re
re: clean $(PROG)

.PHONY: re-all
re-all: clean-all all

.PHONY: gendirs
gendirs:
	@$(MKDIR) $(BIN_DIR)
	@$(MKDIR) $(OBJ_DIR)
	@find $(SRC_DIR) -type d | sed -e "s?$(SRC_DIR)?$(OBJ_DIR)?" | xargs $(MKDIR)
