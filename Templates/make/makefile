# Adjust for compilation
CC = gcc
DEBUGGER = gdb
HEX = bless

# TODO: Remember to prepend the file with 'build/'!!!
ARGS =

# TODO: The file written before should depend of the file after it!!!
SOURCES = main.c test/*.c benchmark/*.c
INCLUDE = -Iinclude
EDITOR = vi
LIB =
DLL =

EXE = build/main.out
COMPILE = $(LIB) $(DLL) $(INCLUDE) -o $(EXE) $(SOURCES) $(INCLUDE)


# compilation-related
DEBUG = -O0 -DDEBUG -g -march=native -mtune=native -fstack-protector-strong -Wall -Wextra -pedantic -Wpointer-arith -Wcast-align -Wconversion -Wsign-conversion -Wunused -Wunused-parameter -Wstrict-prototypes -Wshadow -Wfloat-equal -Winline -Wundef
SANITIZE = -fanalyzer -fsanitize=address,undefined
SANITIZE_CLANG = $(DEBUG),memory
PROFILE = -O2 -pg -fno-omit-frame-pointer -g
COVERAGE = -O0 -fprofile-arcs -ftest-coverage -g
RELEASE = -O2 -march=native -mtune=native -DNDEBUG -Wall -Wextra -Wno-unused-parameter -fstack-protector-strong


all: compile debug profile valgrind coverage syscalls libcalls objdump strings readelf disassembly hex

release: compile_release strip
	@echo "Running program..."
	$(EXE) $(ARGS)
	@echo "Done."

debug: compile
	@echo "Running debugger..."
	$(DEBUGGER) $(EXE)
	@echo "DONE."

run: compile
	@echo "Running program..."
	./$(EXE) $(ARGS)

syscalls: compile
	@echo "Running strace to show system calls..."
	strace $(EXE) $(ARGS)

libcalls: compile
	@echo "Running ltrace to show library calls..."
	ltrace $(EXE) $(ARGS)

strings: compile
	@echo "Listing strings in the executable..."
	strings $(EXE)
	@echo "Done."

readelf: compile
	@echo "Printing the symbol table..."
	readelf --symbols $(EXE)
	@echo "Done."
	@echo "Printing segments..."
	readelf --segments $(EXE)
	@echo "Done."

strip: compile
	@echo "Stripping the binary of symbols..."
	strip $(EXE)
	@echo "Done."

objdump: compile
	@echo "Printing the symbol table..."
	objdump -t $(EXE)
	@echo "Done."
	@echo "Printing sections..."
	objdump -s $(EXE)
	@echo "Done."

disassembly: compile
	@echo "Prining disassembly..."
	objdump -d $(EXE)
	@echo "Done."

hex: compile
	$(HEX) $(EXE)

profile: $(SOURCES)
	@echo "Compiling for profiling..."
	$(CC) $(COMPILE) $(PROFILE)
	@echo "Done."
	@echo "Running program..."
	./$(EXE) $(ARGS)
	@echo "Done."
	@echo "Profiling the program..."
	@echo "gprof uses 'gmon.out'!"
	gprof $(EXE) > profile
	@echo "Viewing profiling results..."
	$(EDITOR) profile
	@echo "Done."

coverage: pre_coverage
ifneq ($(FILE),)
	@echo "Showing results..."
	$(EDITOR) $(FILE).c.gcov
else
	@echo "Please set FILE variable"
endif
	@echo "FILE must follow this pattern '*.c.cov'"

pre_coverage: $(SOURCES)
	@echo "Compiling for coverage..."
	$(CC) $(COMPILE) $(COVERAGE)
	@echo "Done."
	@echo "Running program..."
	./$(EXE) $(ARGS)
	@echo "Done."

ifneq ($(FILE),)
	@echo "Running code coverage analysis..."
	@echo "gcov uses the 'file.gcda'!"
	gcov $(EXE)-$(FILE).gcda > build/$(FILE)-line_coverage
	@echo "Done."
	@echo "Viewing no of lines run results..."
	$(EDITOR) build/$(FILE)-line_coverage
	@echo "Done."
else
	@echo "Please set FILE variable"
	@echo "FILE must follow this pattern 'file' without the .c extension"
endif

valgrind: compile
	@echo "Running with Valgrind for memory with checks..."
	valgrind -s --vgdb=yes $(EXE) $(ARGS)
	@echo "Done."

sanitize: $(SOURCES)
	@echo "Compiling with sanitization on..."
	$(CC) $(COMPILE) $(SANITIZE)
	@echo "Done."

sanitize_clang: $(SOURCES)
	@echo "Compiling with sanitization on..."
	clang $(COMPILE) $(SANITIZE)
	@echo "Done."

compile: $(SOURCES)
	@echo "Compiling for debugging..."
	$(CC) $(COMPILE) $(DEBUG)
	@echo "Done."

compile_clang: $(SOURCES)
	@echo "Compiling for debugging using clang..."
	clang $(COMPILE_CLANG) $(DEBUG_CLANG)
	@echo "Done."

compile_release: $(SOURCES)
	@echo "Compiling for release..."
	$(CC) $(COMPILE) $(RELEASE)
	@echo "Done."

clean:
	@echo "Cleaning obj directory..."
	rm -rf obj/*
	@echo "Cleaning build directory..."
	rm -rf build/*
	@echo "Removing gmon.out..."
	rm -rf gmon.out
	@echo "Removing *.gcov..."
	rm -rf ./*.gcov
	@echo "Removing profile file..."
	rm -rf profile
	@echo "Done."



### extra might be needed

# check if a file exists and move it
#ifneq ("$(wildcard ./gmon.out)", "")
#	@echo "gmon.out exists..."
#	@echo "Attempting to move to build/gmon.out"
#	mv gmon.out build/gmon.out
#else
#	@echo "gnom.out does not exist..."
#endif
