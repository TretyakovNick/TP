# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /snap/clion/67/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/67/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nick/Codes/TP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nick/Codes/TP/cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/lib.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/lib.dir/flags.make

src/CMakeFiles/lib.dir/Factories/OrcFactory.cpp.o: src/CMakeFiles/lib.dir/flags.make
src/CMakeFiles/lib.dir/Factories/OrcFactory.cpp.o: ../src/Factories/OrcFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Codes/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/lib.dir/Factories/OrcFactory.cpp.o"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/Factories/OrcFactory.cpp.o -c /home/nick/Codes/TP/src/Factories/OrcFactory.cpp

src/CMakeFiles/lib.dir/Factories/OrcFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/Factories/OrcFactory.cpp.i"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Codes/TP/src/Factories/OrcFactory.cpp > CMakeFiles/lib.dir/Factories/OrcFactory.cpp.i

src/CMakeFiles/lib.dir/Factories/OrcFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/Factories/OrcFactory.cpp.s"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Codes/TP/src/Factories/OrcFactory.cpp -o CMakeFiles/lib.dir/Factories/OrcFactory.cpp.s

src/CMakeFiles/lib.dir/Units/Unit.cpp.o: src/CMakeFiles/lib.dir/flags.make
src/CMakeFiles/lib.dir/Units/Unit.cpp.o: ../src/Units/Unit.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Codes/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/lib.dir/Units/Unit.cpp.o"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/Units/Unit.cpp.o -c /home/nick/Codes/TP/src/Units/Unit.cpp

src/CMakeFiles/lib.dir/Units/Unit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/Units/Unit.cpp.i"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Codes/TP/src/Units/Unit.cpp > CMakeFiles/lib.dir/Units/Unit.cpp.i

src/CMakeFiles/lib.dir/Units/Unit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/Units/Unit.cpp.s"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Codes/TP/src/Units/Unit.cpp -o CMakeFiles/lib.dir/Units/Unit.cpp.s

src/CMakeFiles/lib.dir/Spells/Spell.cpp.o: src/CMakeFiles/lib.dir/flags.make
src/CMakeFiles/lib.dir/Spells/Spell.cpp.o: ../src/Spells/Spell.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Codes/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/lib.dir/Spells/Spell.cpp.o"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/Spells/Spell.cpp.o -c /home/nick/Codes/TP/src/Spells/Spell.cpp

src/CMakeFiles/lib.dir/Spells/Spell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/Spells/Spell.cpp.i"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Codes/TP/src/Spells/Spell.cpp > CMakeFiles/lib.dir/Spells/Spell.cpp.i

src/CMakeFiles/lib.dir/Spells/Spell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/Spells/Spell.cpp.s"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Codes/TP/src/Spells/Spell.cpp -o CMakeFiles/lib.dir/Spells/Spell.cpp.s

src/CMakeFiles/lib.dir/Factories/HumanFactory.cpp.o: src/CMakeFiles/lib.dir/flags.make
src/CMakeFiles/lib.dir/Factories/HumanFactory.cpp.o: ../src/Factories/HumanFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Codes/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/lib.dir/Factories/HumanFactory.cpp.o"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/Factories/HumanFactory.cpp.o -c /home/nick/Codes/TP/src/Factories/HumanFactory.cpp

src/CMakeFiles/lib.dir/Factories/HumanFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/Factories/HumanFactory.cpp.i"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Codes/TP/src/Factories/HumanFactory.cpp > CMakeFiles/lib.dir/Factories/HumanFactory.cpp.i

src/CMakeFiles/lib.dir/Factories/HumanFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/Factories/HumanFactory.cpp.s"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Codes/TP/src/Factories/HumanFactory.cpp -o CMakeFiles/lib.dir/Factories/HumanFactory.cpp.s

src/CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.o: src/CMakeFiles/lib.dir/flags.make
src/CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.o: ../src/Factories/GoblinFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Codes/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.o"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.o -c /home/nick/Codes/TP/src/Factories/GoblinFactory.cpp

src/CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.i"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Codes/TP/src/Factories/GoblinFactory.cpp > CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.i

src/CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.s"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Codes/TP/src/Factories/GoblinFactory.cpp -o CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.s

src/CMakeFiles/lib.dir/Factories/ElfFactory.cpp.o: src/CMakeFiles/lib.dir/flags.make
src/CMakeFiles/lib.dir/Factories/ElfFactory.cpp.o: ../src/Factories/ElfFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Codes/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/lib.dir/Factories/ElfFactory.cpp.o"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/Factories/ElfFactory.cpp.o -c /home/nick/Codes/TP/src/Factories/ElfFactory.cpp

src/CMakeFiles/lib.dir/Factories/ElfFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/Factories/ElfFactory.cpp.i"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Codes/TP/src/Factories/ElfFactory.cpp > CMakeFiles/lib.dir/Factories/ElfFactory.cpp.i

src/CMakeFiles/lib.dir/Factories/ElfFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/Factories/ElfFactory.cpp.s"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Codes/TP/src/Factories/ElfFactory.cpp -o CMakeFiles/lib.dir/Factories/ElfFactory.cpp.s

src/CMakeFiles/lib.dir/CArmy.cpp.o: src/CMakeFiles/lib.dir/flags.make
src/CMakeFiles/lib.dir/CArmy.cpp.o: ../src/CArmy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Codes/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/lib.dir/CArmy.cpp.o"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/CArmy.cpp.o -c /home/nick/Codes/TP/src/CArmy.cpp

src/CMakeFiles/lib.dir/CArmy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/CArmy.cpp.i"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Codes/TP/src/CArmy.cpp > CMakeFiles/lib.dir/CArmy.cpp.i

src/CMakeFiles/lib.dir/CArmy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/CArmy.cpp.s"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Codes/TP/src/CArmy.cpp -o CMakeFiles/lib.dir/CArmy.cpp.s

src/CMakeFiles/lib.dir/Boss/Boss.cpp.o: src/CMakeFiles/lib.dir/flags.make
src/CMakeFiles/lib.dir/Boss/Boss.cpp.o: ../src/Boss/Boss.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Codes/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/lib.dir/Boss/Boss.cpp.o"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib.dir/Boss/Boss.cpp.o -c /home/nick/Codes/TP/src/Boss/Boss.cpp

src/CMakeFiles/lib.dir/Boss/Boss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/Boss/Boss.cpp.i"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Codes/TP/src/Boss/Boss.cpp > CMakeFiles/lib.dir/Boss/Boss.cpp.i

src/CMakeFiles/lib.dir/Boss/Boss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/Boss/Boss.cpp.s"
	cd /home/nick/Codes/TP/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Codes/TP/src/Boss/Boss.cpp -o CMakeFiles/lib.dir/Boss/Boss.cpp.s

# Object files for target lib
lib_OBJECTS = \
"CMakeFiles/lib.dir/Factories/OrcFactory.cpp.o" \
"CMakeFiles/lib.dir/Units/Unit.cpp.o" \
"CMakeFiles/lib.dir/Spells/Spell.cpp.o" \
"CMakeFiles/lib.dir/Factories/HumanFactory.cpp.o" \
"CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.o" \
"CMakeFiles/lib.dir/Factories/ElfFactory.cpp.o" \
"CMakeFiles/lib.dir/CArmy.cpp.o" \
"CMakeFiles/lib.dir/Boss/Boss.cpp.o"

# External object files for target lib
lib_EXTERNAL_OBJECTS =

src/liblib.a: src/CMakeFiles/lib.dir/Factories/OrcFactory.cpp.o
src/liblib.a: src/CMakeFiles/lib.dir/Units/Unit.cpp.o
src/liblib.a: src/CMakeFiles/lib.dir/Spells/Spell.cpp.o
src/liblib.a: src/CMakeFiles/lib.dir/Factories/HumanFactory.cpp.o
src/liblib.a: src/CMakeFiles/lib.dir/Factories/GoblinFactory.cpp.o
src/liblib.a: src/CMakeFiles/lib.dir/Factories/ElfFactory.cpp.o
src/liblib.a: src/CMakeFiles/lib.dir/CArmy.cpp.o
src/liblib.a: src/CMakeFiles/lib.dir/Boss/Boss.cpp.o
src/liblib.a: src/CMakeFiles/lib.dir/build.make
src/liblib.a: src/CMakeFiles/lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nick/Codes/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX static library liblib.a"
	cd /home/nick/Codes/TP/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/lib.dir/cmake_clean_target.cmake
	cd /home/nick/Codes/TP/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/lib.dir/build: src/liblib.a

.PHONY : src/CMakeFiles/lib.dir/build

src/CMakeFiles/lib.dir/clean:
	cd /home/nick/Codes/TP/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/lib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/lib.dir/clean

src/CMakeFiles/lib.dir/depend:
	cd /home/nick/Codes/TP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nick/Codes/TP /home/nick/Codes/TP/src /home/nick/Codes/TP/cmake-build-debug /home/nick/Codes/TP/cmake-build-debug/src /home/nick/Codes/TP/cmake-build-debug/src/CMakeFiles/lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/lib.dir/depend

