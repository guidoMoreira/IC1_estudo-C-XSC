# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /opt/clion-2019.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.2.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/usuario/CLionProjects/testemath

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/CLionProjects/testemath/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testemath.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testemath.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testemath.dir/flags.make

CMakeFiles/testemath.dir/main.cpp.o: CMakeFiles/testemath.dir/flags.make
CMakeFiles/testemath.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/CLionProjects/testemath/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testemath.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testemath.dir/main.cpp.o -c /home/usuario/CLionProjects/testemath/main.cpp

CMakeFiles/testemath.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testemath.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/CLionProjects/testemath/main.cpp > CMakeFiles/testemath.dir/main.cpp.i

CMakeFiles/testemath.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testemath.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/CLionProjects/testemath/main.cpp -o CMakeFiles/testemath.dir/main.cpp.s

# Object files for target testemath
testemath_OBJECTS = \
"CMakeFiles/testemath.dir/main.cpp.o"

# External object files for target testemath
testemath_EXTERNAL_OBJECTS =

testemath: CMakeFiles/testemath.dir/main.cpp.o
testemath: CMakeFiles/testemath.dir/build.make
testemath: /home/usuario/cxsc/lib/libcxsc.so
testemath: CMakeFiles/testemath.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/CLionProjects/testemath/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testemath"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testemath.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testemath.dir/build: testemath

.PHONY : CMakeFiles/testemath.dir/build

CMakeFiles/testemath.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testemath.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testemath.dir/clean

CMakeFiles/testemath.dir/depend:
	cd /home/usuario/CLionProjects/testemath/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/CLionProjects/testemath /home/usuario/CLionProjects/testemath /home/usuario/CLionProjects/testemath/cmake-build-debug /home/usuario/CLionProjects/testemath/cmake-build-debug /home/usuario/CLionProjects/testemath/cmake-build-debug/CMakeFiles/testemath.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testemath.dir/depend
