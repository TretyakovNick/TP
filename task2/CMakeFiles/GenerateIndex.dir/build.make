# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nick/Codes/git/TP/task2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nick/Codes/git/TP/task2

# Utility rule file for GenerateIndex.

# Include the progress variables for this target.
include CMakeFiles/GenerateIndex.dir/progress.make

CMakeFiles/GenerateIndex:
	cd /home/nick/Codes/git/TP/task2/A && python3 /home/nick/Codes/git/TP/task2/A/preparing.py

GenerateIndex: CMakeFiles/GenerateIndex
GenerateIndex: CMakeFiles/GenerateIndex.dir/build.make

.PHONY : GenerateIndex

# Rule to build all files generated by this target.
CMakeFiles/GenerateIndex.dir/build: GenerateIndex

.PHONY : CMakeFiles/GenerateIndex.dir/build

CMakeFiles/GenerateIndex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GenerateIndex.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GenerateIndex.dir/clean

CMakeFiles/GenerateIndex.dir/depend:
	cd /home/nick/Codes/git/TP/task2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nick/Codes/git/TP/task2 /home/nick/Codes/git/TP/task2 /home/nick/Codes/git/TP/task2 /home/nick/Codes/git/TP/task2 /home/nick/Codes/git/TP/task2/CMakeFiles/GenerateIndex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GenerateIndex.dir/depend

