CC = gcc
DEBUG = -Wall -g -pg -fprofile-arcs -ftest-coverage -O0
RELEASE = -O2
SOURCES = main.c test/*.c benchmark/*.c
INCLUDE = -Iinclude
EDITOR = vi
EXE = main.out
LIB =
DLL =

release: compile_release
	@echo "Running program..."
	./build/main.out
	@echo "Done."

all: compile debug profile check coverage

debug: compile
	@echo "Running debugger..."
	gdb build/$(EXE)
	@echo "DONE."

run: compile
	@echo "Running program..."
	./build/$(EXE)

profile:
	@echo "Profiling the program..."
	@echo "gprof uses 'gmon.out'!"
	gprof build/$(EXE) > profile
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

pre_coverage:
ifneq ($(FILE),)
	@echo "Running code coverage analysis..."
	@echo "gcov uses the 'file.gcda'!"
	gcov build/$(EXE)-$(FILE).gcda > build/$(FILE)-line_coverage
	@echo "Done."
	@echo "Viewing no of lines run results..."
	$(EDITOR) build/$(FILE)-line_coverage
	@echo "Done."
else
	@echo "Please set FILE variable"
	@echo "FILE must follow this pattern 'file' without the .c extension"
endif


check: compile
	@echo "Running with Valgrind for memory with checks..."
	valgrind --vgdb=yes build/main.out
	@echo "Done."

compile: $(SOURCES)
	@echo "Compiling for debugging..."
	$(CC) $(DEBUG) $(LIB) $(DLL) $(INCLUDE) -o build/main.out $(SOURCES) $(INCLUDE)
	@echo "Done."

compile_release: $(SOURCES)
	@echo "Compiling for release..."
	$(CC) $(RELEASE) $(INCLUDE)  -o build/main.out $(SOURCES)
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
