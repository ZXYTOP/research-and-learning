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
CMAKE_SOURCE_DIR = /home/zhouxinyu/Documents/code/c++学习/DAY_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhouxinyu/Documents/code/c++学习/DAY_1/build

# Include any dependencies generated for this target.
include CMakeFiles/helloworld.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/helloworld.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/helloworld.dir/flags.make

CMakeFiles/helloworld.dir/Helloworld.cpp.o: CMakeFiles/helloworld.dir/flags.make
CMakeFiles/helloworld.dir/Helloworld.cpp.o: ../Helloworld.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhouxinyu/Documents/code/c++学习/DAY_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/helloworld.dir/Helloworld.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/helloworld.dir/Helloworld.cpp.o -c /home/zhouxinyu/Documents/code/c++学习/DAY_1/Helloworld.cpp

CMakeFiles/helloworld.dir/Helloworld.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/helloworld.dir/Helloworld.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhouxinyu/Documents/code/c++学习/DAY_1/Helloworld.cpp > CMakeFiles/helloworld.dir/Helloworld.cpp.i

CMakeFiles/helloworld.dir/Helloworld.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/helloworld.dir/Helloworld.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhouxinyu/Documents/code/c++学习/DAY_1/Helloworld.cpp -o CMakeFiles/helloworld.dir/Helloworld.cpp.s

CMakeFiles/helloworld.dir/Helloworld.cpp.o.requires:

.PHONY : CMakeFiles/helloworld.dir/Helloworld.cpp.o.requires

CMakeFiles/helloworld.dir/Helloworld.cpp.o.provides: CMakeFiles/helloworld.dir/Helloworld.cpp.o.requires
	$(MAKE) -f CMakeFiles/helloworld.dir/build.make CMakeFiles/helloworld.dir/Helloworld.cpp.o.provides.build
.PHONY : CMakeFiles/helloworld.dir/Helloworld.cpp.o.provides

CMakeFiles/helloworld.dir/Helloworld.cpp.o.provides.build: CMakeFiles/helloworld.dir/Helloworld.cpp.o


# Object files for target helloworld
helloworld_OBJECTS = \
"CMakeFiles/helloworld.dir/Helloworld.cpp.o"

# External object files for target helloworld
helloworld_EXTERNAL_OBJECTS =

helloworld: CMakeFiles/helloworld.dir/Helloworld.cpp.o
helloworld: CMakeFiles/helloworld.dir/build.make
helloworld: CMakeFiles/helloworld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhouxinyu/Documents/code/c++学习/DAY_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable helloworld"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/helloworld.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/helloworld.dir/build: helloworld

.PHONY : CMakeFiles/helloworld.dir/build

CMakeFiles/helloworld.dir/requires: CMakeFiles/helloworld.dir/Helloworld.cpp.o.requires

.PHONY : CMakeFiles/helloworld.dir/requires

CMakeFiles/helloworld.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/helloworld.dir/cmake_clean.cmake
.PHONY : CMakeFiles/helloworld.dir/clean

CMakeFiles/helloworld.dir/depend:
	cd /home/zhouxinyu/Documents/code/c++学习/DAY_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhouxinyu/Documents/code/c++学习/DAY_1 /home/zhouxinyu/Documents/code/c++学习/DAY_1 /home/zhouxinyu/Documents/code/c++学习/DAY_1/build /home/zhouxinyu/Documents/code/c++学习/DAY_1/build /home/zhouxinyu/Documents/code/c++学习/DAY_1/build/CMakeFiles/helloworld.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/helloworld.dir/depend

