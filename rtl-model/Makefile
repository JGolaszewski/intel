VERILATOR = verilator
TOP_MODULE = quadra_tb
FILES_LIST = files.f
OBJ_DIR = obj_dir
BIN = $(OBJ_DIR)/V$(TOP_MODULE)

V_FLAGS = --binary --trace --timing +systemverilogext+vs -I. \
          --top-module $(TOP_MODULE) \
          -f $(FILES_LIST) \
          -Wno-fatal

MAKE_FLAGS = -MAKEFLAGS "CXXFLAGS='-std=c++17'"

.PHONY: all compile run view clean

all: compile run

compile:
	$(VERILATOR) $(V_FLAGS) $(MAKE_FLAGS)

run:
	@echo "--- Starting simulation ---"
	./$(BIN)

view:
	gtkwave dump.vcd

clean:
	rm -rf $(OBJ_DIR) dump.vcd