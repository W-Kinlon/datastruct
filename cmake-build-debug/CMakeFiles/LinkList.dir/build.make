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
include CMakeFiles/LinkList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkList.dir/flags.make

CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.o: CMakeFiles/LinkList.dir/flags.make
CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.o: ../1LinearList/LinkList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.o -c /Users/kinlonwong/Desktop/Code/datastruct/1LinearList/LinkList.cpp

CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kinlonwong/Desktop/Code/datastruct/1LinearList/LinkList.cpp > CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.i

CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kinlonwong/Desktop/Code/datastruct/1LinearList/LinkList.cpp -o CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.s

# Object files for target LinkList
LinkList_OBJECTS = \
"CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.o"

# External object files for target LinkList
LinkList_EXTERNAL_OBJECTS =

LinkList: CMakeFiles/LinkList.dir/1LinearList/LinkList.cpp.o
LinkList: CMakeFiles/LinkList.dir/build.make
LinkList: CMakeFiles/LinkList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LinkList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinkList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkList.dir/build: LinkList

.PHONY : CMakeFiles/LinkList.dir/build

CMakeFiles/LinkList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinkList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinkList.dir/clean

CMakeFiles/LinkList.dir/depend:
	cd /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kinlonwong/Desktop/Code/datastruct /Users/kinlonwong/Desktop/Code/datastruct /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug /Users/kinlonwong/Desktop/Code/datastruct/cmake-build-debug/CMakeFiles/LinkList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinkList.dir/depend
