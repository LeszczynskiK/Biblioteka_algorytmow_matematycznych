# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/krzysiek89/Desktop/QT_aplikacje/Algorytmy_matematyczne

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krzysiek89/Desktop/QT_aplikacje/Algorytmy_matematyczne

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/krzysiek89/Desktop/QT_aplikacje/Algorytmy_matematyczne/CMakeFiles /home/krzysiek89/Desktop/QT_aplikacje/Algorytmy_matematyczne/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/krzysiek89/Desktop/QT_aplikacje/Algorytmy_matematyczne/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named MyExecutable

# Build rule for target.
MyExecutable: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 MyExecutable
.PHONY : MyExecutable

# fast build rule for target.
MyExecutable/fast:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/build
.PHONY : MyExecutable/fast

CiagFibonacciego.o: CiagFibonacciego.cpp.o

.PHONY : CiagFibonacciego.o

# target to build an object file
CiagFibonacciego.cpp.o:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/CiagFibonacciego.cpp.o
.PHONY : CiagFibonacciego.cpp.o

CiagFibonacciego.i: CiagFibonacciego.cpp.i

.PHONY : CiagFibonacciego.i

# target to preprocess a source file
CiagFibonacciego.cpp.i:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/CiagFibonacciego.cpp.i
.PHONY : CiagFibonacciego.cpp.i

CiagFibonacciego.s: CiagFibonacciego.cpp.s

.PHONY : CiagFibonacciego.s

# target to generate assembly for a file
CiagFibonacciego.cpp.s:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/CiagFibonacciego.cpp.s
.PHONY : CiagFibonacciego.cpp.s

GreatestCommonMeasure.o: GreatestCommonMeasure.cpp.o

.PHONY : GreatestCommonMeasure.o

# target to build an object file
GreatestCommonMeasure.cpp.o:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/GreatestCommonMeasure.cpp.o
.PHONY : GreatestCommonMeasure.cpp.o

GreatestCommonMeasure.i: GreatestCommonMeasure.cpp.i

.PHONY : GreatestCommonMeasure.i

# target to preprocess a source file
GreatestCommonMeasure.cpp.i:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/GreatestCommonMeasure.cpp.i
.PHONY : GreatestCommonMeasure.cpp.i

GreatestCommonMeasure.s: GreatestCommonMeasure.cpp.s

.PHONY : GreatestCommonMeasure.s

# target to generate assembly for a file
GreatestCommonMeasure.cpp.s:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/GreatestCommonMeasure.cpp.s
.PHONY : GreatestCommonMeasure.cpp.s

Komunikaty.o: Komunikaty.cpp.o

.PHONY : Komunikaty.o

# target to build an object file
Komunikaty.cpp.o:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/Komunikaty.cpp.o
.PHONY : Komunikaty.cpp.o

Komunikaty.i: Komunikaty.cpp.i

.PHONY : Komunikaty.i

# target to preprocess a source file
Komunikaty.cpp.i:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/Komunikaty.cpp.i
.PHONY : Komunikaty.cpp.i

Komunikaty.s: Komunikaty.cpp.s

.PHONY : Komunikaty.s

# target to generate assembly for a file
Komunikaty.cpp.s:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/Komunikaty.cpp.s
.PHONY : Komunikaty.cpp.s

MonteCarlo.o: MonteCarlo.cpp.o

.PHONY : MonteCarlo.o

# target to build an object file
MonteCarlo.cpp.o:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/MonteCarlo.cpp.o
.PHONY : MonteCarlo.cpp.o

MonteCarlo.i: MonteCarlo.cpp.i

.PHONY : MonteCarlo.i

# target to preprocess a source file
MonteCarlo.cpp.i:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/MonteCarlo.cpp.i
.PHONY : MonteCarlo.cpp.i

MonteCarlo.s: MonteCarlo.cpp.s

.PHONY : MonteCarlo.s

# target to generate assembly for a file
MonteCarlo.cpp.s:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/MonteCarlo.cpp.s
.PHONY : MonteCarlo.cpp.s

PerfectNumber.o: PerfectNumber.cpp.o

.PHONY : PerfectNumber.o

# target to build an object file
PerfectNumber.cpp.o:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/PerfectNumber.cpp.o
.PHONY : PerfectNumber.cpp.o

PerfectNumber.i: PerfectNumber.cpp.i

.PHONY : PerfectNumber.i

# target to preprocess a source file
PerfectNumber.cpp.i:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/PerfectNumber.cpp.i
.PHONY : PerfectNumber.cpp.i

PerfectNumber.s: PerfectNumber.cpp.s

.PHONY : PerfectNumber.s

# target to generate assembly for a file
PerfectNumber.cpp.s:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/PerfectNumber.cpp.s
.PHONY : PerfectNumber.cpp.s

PrimeFactorization.o: PrimeFactorization.cpp.o

.PHONY : PrimeFactorization.o

# target to build an object file
PrimeFactorization.cpp.o:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/PrimeFactorization.cpp.o
.PHONY : PrimeFactorization.cpp.o

PrimeFactorization.i: PrimeFactorization.cpp.i

.PHONY : PrimeFactorization.i

# target to preprocess a source file
PrimeFactorization.cpp.i:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/PrimeFactorization.cpp.i
.PHONY : PrimeFactorization.cpp.i

PrimeFactorization.s: PrimeFactorization.cpp.s

.PHONY : PrimeFactorization.s

# target to generate assembly for a file
PrimeFactorization.cpp.s:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/PrimeFactorization.cpp.s
.PHONY : PrimeFactorization.cpp.s

Silnia.o: Silnia.cpp.o

.PHONY : Silnia.o

# target to build an object file
Silnia.cpp.o:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/Silnia.cpp.o
.PHONY : Silnia.cpp.o

Silnia.i: Silnia.cpp.i

.PHONY : Silnia.i

# target to preprocess a source file
Silnia.cpp.i:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/Silnia.cpp.i
.PHONY : Silnia.cpp.i

Silnia.s: Silnia.cpp.s

.PHONY : Silnia.s

# target to generate assembly for a file
Silnia.cpp.s:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/Silnia.cpp.s
.PHONY : Silnia.cpp.s

SitoEratostenesa.o: SitoEratostenesa.cpp.o

.PHONY : SitoEratostenesa.o

# target to build an object file
SitoEratostenesa.cpp.o:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/SitoEratostenesa.cpp.o
.PHONY : SitoEratostenesa.cpp.o

SitoEratostenesa.i: SitoEratostenesa.cpp.i

.PHONY : SitoEratostenesa.i

# target to preprocess a source file
SitoEratostenesa.cpp.i:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/SitoEratostenesa.cpp.i
.PHONY : SitoEratostenesa.cpp.i

SitoEratostenesa.s: SitoEratostenesa.cpp.s

.PHONY : SitoEratostenesa.s

# target to generate assembly for a file
SitoEratostenesa.cpp.s:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/SitoEratostenesa.cpp.s
.PHONY : SitoEratostenesa.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/MyExecutable.dir/build.make CMakeFiles/MyExecutable.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... MyExecutable"
	@echo "... CiagFibonacciego.o"
	@echo "... CiagFibonacciego.i"
	@echo "... CiagFibonacciego.s"
	@echo "... GreatestCommonMeasure.o"
	@echo "... GreatestCommonMeasure.i"
	@echo "... GreatestCommonMeasure.s"
	@echo "... Komunikaty.o"
	@echo "... Komunikaty.i"
	@echo "... Komunikaty.s"
	@echo "... MonteCarlo.o"
	@echo "... MonteCarlo.i"
	@echo "... MonteCarlo.s"
	@echo "... PerfectNumber.o"
	@echo "... PerfectNumber.i"
	@echo "... PerfectNumber.s"
	@echo "... PrimeFactorization.o"
	@echo "... PrimeFactorization.i"
	@echo "... PrimeFactorization.s"
	@echo "... Silnia.o"
	@echo "... Silnia.i"
	@echo "... Silnia.s"
	@echo "... SitoEratostenesa.o"
	@echo "... SitoEratostenesa.i"
	@echo "... SitoEratostenesa.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

