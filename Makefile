PROG := miniml

SHELL = /bin/sh
LEX   = flex
YACC  = bison
CC    = gcc
RM    = rm -f
MKDIR = mkdir -p
C_FLAGS := -g -std=c11 -pedantic -Wall -Wextra -Wconversion #-Weverything
C_FLAGS += -D_XOPEN_SOURCE=700 -DYYDEBUG -Isrc
LD_FLAGS := -Wl,-Bstatic -lcalg -Wl,-Bdynamic -lfl
# --nounput: ne génère pas la fonction yyunput() inutile
# --DYY_NO_INPUT: ne prend pas en compte la fonction input() inutile
# -D_POSIX_SOURCE: déclare la fonction fileno()
LEX_OPTS  = -D_POSIX_SOURCE -DYY_NO_INPUT --nounput
YACC_OPTS = --verbose

TEST_FLAGS := -std=c11 -D_XOPEN_SOURCE=700 -Wl,-Bstatic -lcalg -Wl,-Bdynamic

#--- Libcalg

CALG_DIR := libcalg
C_FLAGS  += -I$(CALG_DIR)/include/libcalg-1.0
LD_FLAGS += -L$(CALG_DIR)/lib

TEST_FLAGS += -L$(CALG_DIR)/lib


#--- Directories

BIN_DIR := bin
SRC_DIR := src
OBJ_DIR := obj
TEST_DIR := test

#--- Files

C_FILES := $(shell find $(SRC_DIR) -type f -name "*.c") 
H_FILES := $(shell find $(SRC_DIR) -type f -name "*.h")

C_FILES := $(filter-out $(SRC_DIR)/codegen_main.c,$(C_FILES))

LY_OBJ_FILES := $(OBJ_DIR)/$(PROG).yy.o $(OBJ_DIR)/$(PROG).tab.o

OBJ_FILES := $(C_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o) $(LY_OBJ_FILES)
DEP_FILES := $(OBJ_FILES:%.o=%.d)

TEST_FILES := $(shell find $(TEST_DIR) -type f -name "*.ml")
TEST_TMP := $(TEST_DIR)/.test_sout

#--- Functions?

define color
	tput setaf $(1); $(2); tput sgr0;
endef

define compile
	$(CC) $(C_FLAGS) -MMD -c $(1) -o $(2)
endef

define gendirs
	@$(MKDIR) $(BIN_DIR)
	@$(MKDIR) $(OBJ_DIR)
	@find $(SRC_DIR) -type d | sed -e "s?$(SRC_DIR)?$(OBJ_DIR)?" | xargs $(MKDIR)
endef

#--- Rules

.PHONY: $(PROG)
$(PROG): $(BIN_DIR)/$(PROG)

.SECONDARY:
$(BIN_DIR)/$(PROG): $(OBJ_DIR)/codegen_main.xxd $(OBJ_FILES)
	$(call gendirs)
	$(CC) $(OBJ_FILES) -o $@ $(LD_FLAGS) 

#--- Lex/Yacc source targets

$(OBJ_DIR)/%.yy.c: $(SRC_DIR)/%.l $(OBJ_DIR)/%.tab.h
	$(call gendirs)
	$(LEX) $(LEX_OPTS) --outfile=$@ $<

$(OBJ_DIR)/%.yy.h: $(SRC_DIR)/%.l
	$(call gendirs)
	$(LEX) $(LEX_OPTS) --header-file=$@ -t $< 1> /dev/null

$(OBJ_DIR)/%.tab.c $(OBJ_DIR)/%.tab.h: $(SRC_DIR)/%.y $(OBJ_DIR)/%.yy.h
	$(call gendirs)
	$(YACC) $(YACC_OPTS) $< --defines=$(OBJ_DIR)/$(PROG).tab.h --output=$(OBJ_DIR)/$(PROG).tab.c

-include $(OBJ_DIR)/$(PROG).yy.d $(OBJ_DIR)/$(PROG).tab.d

#--- Object file targets

-include $(DEP_FILES)

$(OBJ_DIR)/%.yy.o: $(OBJ_DIR)/%.yy.c $(OBJ_DIR)/%.yy.h
	$(call gendirs)
	$(call compile,$<,$@)

$(OBJ_DIR)/%.tab.o: $(OBJ_DIR)/%.tab.c $(OBJ_DIR)/%.tab.h
	$(call gendirs)
	$(call compile,$<,$@)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(call gendirs)
	$(call compile,$<,$@)

#--- Codegen hex targets

%.xxd: %.pre
	$(call gendirs)
	xxd -i $< $@

$(OBJ_DIR)/codegen_main.pre: $(SRC_DIR)/codegen_main.c $(C_FILES) $(H_FILES)
	$(call gendirs)
	$(CC) $(C_FLAGS) -E $< -o $@

#--- LibCalg build

.PHONY: libcalg
libcalg:
	@ln -srf Makefile.libcalg libcalg/
	CALG_DIR=$(realpath $(CALG_DIR)) $(MAKE) -C libcalg/ --makefile=Makefile.libcalg

#--- Tests

$(TEST_DIR)/%.ml: $(PROG)
	$(eval TEST_C=$(patsubst %.ml,%.c,$@))
	$(eval TEST_O=$(patsubst %.ml,%,$@))
	@if $(BIN_DIR)/$(PROG) -i $@ -o $(TEST_C) && \
		$(CC) $(TEST_C) -o $(TEST_O) $(TEST_FLAGS) && \
		$(TEST_O) 1>/dev/null 2>>$(TEST_TMP) ; then \
	    $(call color,10,echo " * $@: Passed") \
	else \
	    $(call color,9,echo " * $@: Failed") \
	    $(call color,1,cat $(TEST_TMP)) \
	fi
	@$(RM) $(TEST_O) $(TEST_C) $(TEST_TMP)


.PHONY: tests
tests: $(sort $(TEST_FILES))

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

.PHONY: clean-all
clean-all: clean clean-libcalg
	$(RM) $(BIN_DIR)/$(PROG) *.dot *.dot.png *.output *.out

.PHONY: clean
clean:
	-find $(OBJ_DIR)/ -type f -exec $(RM) {} \;
	-$(MAKE) -C latex-report/ clean
	-$(RM) *.err

.PHONY: clean-libcalg
clean-libcalg:
	-$(MAKE) -C libcalg/ clean
	-$(RM) -r libcalg/lib/
	-$(RM) -r libcalg/include/

.PHONY: re
re: clean $(PROG)

.PHONY: re-all
re-all: clean-all all


