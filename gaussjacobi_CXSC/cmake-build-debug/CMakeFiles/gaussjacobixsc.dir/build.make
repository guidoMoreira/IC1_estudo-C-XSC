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
CMAKE_SOURCE_DIR = /home/usuario/CLionProjects/gaussjacobixsc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/CLionProjects/gaussjacobixsc/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/gaussjacobixsc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gaussjacobixsc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gaussjacobixsc.dir/flags.make

CMakeFiles/gaussjacobixsc.dir/main.cpp.o: CMakeFiles/gaussjacobixsc.dir/flags.make
CMakeFiles/gaussjacobixsc.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/CLionProjects/gaussjacobixsc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gaussjacobixsc.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaussjacobixsc.dir/main.cpp.o -c /home/usuario/CLionProjects/gaussjacobixsc/main.cpp

CMakeFiles/gaussjacobixsc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaussjacobixsc.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/CLionProjects/gaussjacobixsc/main.cpp > CMakeFiles/gaussjacobixsc.dir/main.cpp.i

CMakeFiles/gaussjacobixsc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaussjacobixsc.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/CLionProjects/gaussjacobixsc/main.cpp -o CMakeFiles/gaussjacobixsc.dir/main.cpp.s

# Object files for target gaussjacobixsc
gaussjacobixsc_OBJECTS = \
"CMakeFiles/gaussjacobixsc.dir/main.cpp.o"

# External object files for target gaussjacobixsc
gaussjacobixsc_EXTERNAL_OBJECTS =

gaussjacobixsc: CMakeFiles/gaussjacobixsc.dir/main.cpp.o
gaussjacobixsc: CMakeFiles/gaussjacobixsc.dir/build.make
gaussjacobixsc: /home/usuario/cxsc/lib/libcxsc.so
gaussjacobixsc: CMakeFiles/gaussjacobixsc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/CLionProjects/gaussjacobixsc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable gaussjacobixsc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gaussjacobixsc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gaussjacobixsc.dir/build: gaussjacobixsc

.PHONY : CMakeFiles/gaussjacobixsc.dir/build

CMakeFiles/gaussjacobixsc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gaussjacobixsc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gaussjacobixsc.dir/clean

CMakeFiles/gaussjacobixsc.dir/depend:
	cd /home/usuario/CLionProjects/gaussjacobixsc/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/CLionProjects/gaussjacobixsc /home/usuario/CLionProjects/gaussjacobixsc /home/usuario/CLionProjects/gaussjacobixsc/cmake-build-debug /home/usuario/CLionProjects/gaussjacobixsc/cmake-build-debug /home/usuario/CLionProjects/gaussjacobixsc/cmake-build-debug/CMakeFiles/gaussjacobixsc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gaussjacobixsc.dir/depend

