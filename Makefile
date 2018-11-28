# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_SOURCE_DIR = /home/anon/asciijack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anon/asciijack

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/anon/asciijack/CMakeFiles /home/anon/asciijack/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/anon/asciijack/CMakeFiles 0
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
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named asciijack

# Build rule for target.
asciijack: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 asciijack
.PHONY : asciijack

# fast build rule for target.
asciijack/fast:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/build
.PHONY : asciijack/fast

src/card/card.o: src/card/card.cpp.o

.PHONY : src/card/card.o

# target to build an object file
src/card/card.cpp.o:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/card/card.cpp.o
.PHONY : src/card/card.cpp.o

src/card/card.i: src/card/card.cpp.i

.PHONY : src/card/card.i

# target to preprocess a source file
src/card/card.cpp.i:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/card/card.cpp.i
.PHONY : src/card/card.cpp.i

src/card/card.s: src/card/card.cpp.s

.PHONY : src/card/card.s

# target to generate assembly for a file
src/card/card.cpp.s:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/card/card.cpp.s
.PHONY : src/card/card.cpp.s

src/deck/deck.o: src/deck/deck.cpp.o

.PHONY : src/deck/deck.o

# target to build an object file
src/deck/deck.cpp.o:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/deck/deck.cpp.o
.PHONY : src/deck/deck.cpp.o

src/deck/deck.i: src/deck/deck.cpp.i

.PHONY : src/deck/deck.i

# target to preprocess a source file
src/deck/deck.cpp.i:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/deck/deck.cpp.i
.PHONY : src/deck/deck.cpp.i

src/deck/deck.s: src/deck/deck.cpp.s

.PHONY : src/deck/deck.s

# target to generate assembly for a file
src/deck/deck.cpp.s:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/deck/deck.cpp.s
.PHONY : src/deck/deck.cpp.s

src/game/game.o: src/game/game.cpp.o

.PHONY : src/game/game.o

# target to build an object file
src/game/game.cpp.o:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/game/game.cpp.o
.PHONY : src/game/game.cpp.o

src/game/game.i: src/game/game.cpp.i

.PHONY : src/game/game.i

# target to preprocess a source file
src/game/game.cpp.i:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/game/game.cpp.i
.PHONY : src/game/game.cpp.i

src/game/game.s: src/game/game.cpp.s

.PHONY : src/game/game.s

# target to generate assembly for a file
src/game/game.cpp.s:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/game/game.cpp.s
.PHONY : src/game/game.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/player/player.o: src/player/player.cpp.o

.PHONY : src/player/player.o

# target to build an object file
src/player/player.cpp.o:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/player/player.cpp.o
.PHONY : src/player/player.cpp.o

src/player/player.i: src/player/player.cpp.i

.PHONY : src/player/player.i

# target to preprocess a source file
src/player/player.cpp.i:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/player/player.cpp.i
.PHONY : src/player/player.cpp.i

src/player/player.s: src/player/player.cpp.s

.PHONY : src/player/player.s

# target to generate assembly for a file
src/player/player.cpp.s:
	$(MAKE) -f CMakeFiles/asciijack.dir/build.make CMakeFiles/asciijack.dir/src/player/player.cpp.s
.PHONY : src/player/player.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... asciijack"
	@echo "... edit_cache"
	@echo "... src/card/card.o"
	@echo "... src/card/card.i"
	@echo "... src/card/card.s"
	@echo "... src/deck/deck.o"
	@echo "... src/deck/deck.i"
	@echo "... src/deck/deck.s"
	@echo "... src/game/game.o"
	@echo "... src/game/game.i"
	@echo "... src/game/game.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/player/player.o"
	@echo "... src/player/player.i"
	@echo "... src/player/player.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
