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
include CMakeFiles/001_House_number_making.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/001_House_number_making.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/001_House_number_making.dir/flags.make

CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.o: CMakeFiles/001_House_number_making.dir/flags.make
CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.o: ../Blue_Bridge_Cup/001_House_number_making\ .cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.o -c "/Users/kinlonwong/Desktop/Code/datastruct/Blue_Bridge_Cup/001_House_number_making .cpp"

CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kinlonwong/Desktop/Code/datastruct/Blue_Bridge_Cup/001_House_number_making .cpp" > CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.i

CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kinlonwong/Desktop/Code/datastruct/Blue_Bridge_Cup/001_House_number_making .cpp" -o CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.s

# Object files for target 001_House_number_making
001_House_number_making_OBJECTS = \
"CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.o"

# External object files for target 001_House_number_making
001_House_number_making_EXTERNAL_OBJECTS =

001_House_number_making: CMakeFiles/001_House_number_making.dir/Blue_Bridge_Cup/001_House_number_making_.cpp.o
001_House_number_making: CMakeFiles/001_House_number_making.dir/build.make
001_House_number_making: CMakeFiles/001_House_number_making.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 001_House_number_making"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/001_House_number_making.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/001_House_number_making.dir/build: 001_House_number_making

.PHONY : CMakeFiles/001_House_number_making.dir/build

CMakeFiles/001_House_number_making.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/001_House_number_making.dir/cmake_clean.cmake
.PHONY : CMakeFiles/001_House_number_making.dir/clean

CMakeFiles/001_House_number_making.dir/depend:
	cd /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kinlonwong/Desktop/Code/datastruct /Users/kinlonwong/Desktop/Code/datastruct /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug/CMakeFiles/001_House_number_making.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/001_House_number_making.dir/depend

