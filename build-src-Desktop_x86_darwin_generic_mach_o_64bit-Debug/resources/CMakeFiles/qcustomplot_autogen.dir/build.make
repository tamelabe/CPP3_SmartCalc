# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Volumes/89823065724/Projects/CPP3_SmartCalc/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Volumes/89823065724/Projects/CPP3_SmartCalc/build-src-Desktop_x86_darwin_generic_mach_o_64bit-Debug

# Utility rule file for qcustomplot_autogen.

# Include any custom commands dependencies for this target.
include resources/CMakeFiles/qcustomplot_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include resources/CMakeFiles/qcustomplot_autogen.dir/progress.make

resources/CMakeFiles/qcustomplot_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Volumes/89823065724/Projects/CPP3_SmartCalc/build-src-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target qcustomplot"
	cd /Volumes/89823065724/Projects/CPP3_SmartCalc/build-src-Desktop_x86_darwin_generic_mach_o_64bit-Debug/resources && /Applications/CMake.app/Contents/bin/cmake -E cmake_autogen /Volumes/89823065724/Projects/CPP3_SmartCalc/build-src-Desktop_x86_darwin_generic_mach_o_64bit-Debug/resources/CMakeFiles/qcustomplot_autogen.dir/AutogenInfo.json Debug

qcustomplot_autogen: resources/CMakeFiles/qcustomplot_autogen
qcustomplot_autogen: resources/CMakeFiles/qcustomplot_autogen.dir/build.make
.PHONY : qcustomplot_autogen

# Rule to build all files generated by this target.
resources/CMakeFiles/qcustomplot_autogen.dir/build: qcustomplot_autogen
.PHONY : resources/CMakeFiles/qcustomplot_autogen.dir/build

resources/CMakeFiles/qcustomplot_autogen.dir/clean:
	cd /Volumes/89823065724/Projects/CPP3_SmartCalc/build-src-Desktop_x86_darwin_generic_mach_o_64bit-Debug/resources && $(CMAKE_COMMAND) -P CMakeFiles/qcustomplot_autogen.dir/cmake_clean.cmake
.PHONY : resources/CMakeFiles/qcustomplot_autogen.dir/clean

resources/CMakeFiles/qcustomplot_autogen.dir/depend:
	cd /Volumes/89823065724/Projects/CPP3_SmartCalc/build-src-Desktop_x86_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Volumes/89823065724/Projects/CPP3_SmartCalc/src /Volumes/89823065724/Projects/CPP3_SmartCalc/src/resources /Volumes/89823065724/Projects/CPP3_SmartCalc/build-src-Desktop_x86_darwin_generic_mach_o_64bit-Debug /Volumes/89823065724/Projects/CPP3_SmartCalc/build-src-Desktop_x86_darwin_generic_mach_o_64bit-Debug/resources /Volumes/89823065724/Projects/CPP3_SmartCalc/build-src-Desktop_x86_darwin_generic_mach_o_64bit-Debug/resources/CMakeFiles/qcustomplot_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : resources/CMakeFiles/qcustomplot_autogen.dir/depend
