# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pat/repos/cpp/zalFunkcyjne/pakiet2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pat/repos/cpp/zalFunkcyjne/pakiet2/build

# Include any dependencies generated for this target.
include CMakeFiles/project2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/project2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/project2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project2.dir/flags.make

CMakeFiles/project2.dir/main.cpp.o: CMakeFiles/project2.dir/flags.make
CMakeFiles/project2.dir/main.cpp.o: ../main.cpp
CMakeFiles/project2.dir/main.cpp.o: CMakeFiles/project2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pat/repos/cpp/zalFunkcyjne/pakiet2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project2.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project2.dir/main.cpp.o -MF CMakeFiles/project2.dir/main.cpp.o.d -o CMakeFiles/project2.dir/main.cpp.o -c /home/pat/repos/cpp/zalFunkcyjne/pakiet2/main.cpp

CMakeFiles/project2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pat/repos/cpp/zalFunkcyjne/pakiet2/main.cpp > CMakeFiles/project2.dir/main.cpp.i

CMakeFiles/project2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pat/repos/cpp/zalFunkcyjne/pakiet2/main.cpp -o CMakeFiles/project2.dir/main.cpp.s

# Object files for target project2
project2_OBJECTS = \
"CMakeFiles/project2.dir/main.cpp.o"

# External object files for target project2
project2_EXTERNAL_OBJECTS =

project2: CMakeFiles/project2.dir/main.cpp.o
project2: CMakeFiles/project2.dir/build.make
project2: CMakeFiles/project2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pat/repos/cpp/zalFunkcyjne/pakiet2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable project2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project2.dir/build: project2
.PHONY : CMakeFiles/project2.dir/build

CMakeFiles/project2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project2.dir/clean

CMakeFiles/project2.dir/depend:
	cd /home/pat/repos/cpp/zalFunkcyjne/pakiet2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pat/repos/cpp/zalFunkcyjne/pakiet2 /home/pat/repos/cpp/zalFunkcyjne/pakiet2 /home/pat/repos/cpp/zalFunkcyjne/pakiet2/build /home/pat/repos/cpp/zalFunkcyjne/pakiet2/build /home/pat/repos/cpp/zalFunkcyjne/pakiet2/build/CMakeFiles/project2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project2.dir/depend

