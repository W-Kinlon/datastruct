# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kinlonwong/Desktop/Code/datastruct

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1010_Radix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1010_Radix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1010_Radix.dir/flags.make

CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.o: CMakeFiles/1010_Radix.dir/flags.make
CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.o: ../PAT/1010_Radix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.o -c /Users/kinlonwong/Desktop/Code/datastruct/PAT/1010_Radix.cpp

CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kinlonwong/Desktop/Code/datastruct/PAT/1010_Radix.cpp > CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.i

CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kinlonwong/Desktop/Code/datastruct/PAT/1010_Radix.cpp -o CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.s

# Object files for target 1010_Radix
1010_Radix_OBJECTS = \
"CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.o"

# External object files for target 1010_Radix
1010_Radix_EXTERNAL_OBJECTS =

1010_Radix: CMakeFiles/1010_Radix.dir/PAT/1010_Radix.cpp.o
1010_Radix: CMakeFiles/1010_Radix.dir/build.make
1010_Radix: CMakeFiles/1010_Radix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1010_Radix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1010_Radix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1010_Radix.dir/build: 1010_Radix

.PHONY : CMakeFiles/1010_Radix.dir/build

CMakeFiles/1010_Radix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1010_Radix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1010_Radix.dir/clean

CMakeFiles/1010_Radix.dir/depend:
	cd /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kinlonwong/Desktop/Code/datastruct /Users/kinlonwong/Desktop/Code/datastruct /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug/CMakeFiles/1010_Radix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1010_Radix.dir/depend

