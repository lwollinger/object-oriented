# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 4.0

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Dell\Documents\programasorientada\atividade04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Dell\Documents\programasorientada\atividade04\build

# Include any dependencies generated for this target.
include CMakeFiles/atividade04.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/atividade04.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/atividade04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/atividade04.dir/flags.make

CMakeFiles/atividade04.dir/codegen:
.PHONY : CMakeFiles/atividade04.dir/codegen

CMakeFiles/atividade04.dir/src/main.cpp.obj: CMakeFiles/atividade04.dir/flags.make
CMakeFiles/atividade04.dir/src/main.cpp.obj: C:/Users/Dell/Documents/programasorientada/atividade04/src/main.cpp
CMakeFiles/atividade04.dir/src/main.cpp.obj: CMakeFiles/atividade04.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Dell\Documents\programasorientada\atividade04\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/atividade04.dir/src/main.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/atividade04.dir/src/main.cpp.obj -MF CMakeFiles\atividade04.dir\src\main.cpp.obj.d -o CMakeFiles\atividade04.dir\src\main.cpp.obj -c C:\Users\Dell\Documents\programasorientada\atividade04\src\main.cpp

CMakeFiles/atividade04.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/atividade04.dir/src/main.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Dell\Documents\programasorientada\atividade04\src\main.cpp > CMakeFiles\atividade04.dir\src\main.cpp.i

CMakeFiles/atividade04.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/atividade04.dir/src/main.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Dell\Documents\programasorientada\atividade04\src\main.cpp -o CMakeFiles\atividade04.dir\src\main.cpp.s

# Object files for target atividade04
atividade04_OBJECTS = \
"CMakeFiles/atividade04.dir/src/main.cpp.obj"

# External object files for target atividade04
atividade04_EXTERNAL_OBJECTS =

atividade04.exe: CMakeFiles/atividade04.dir/src/main.cpp.obj
atividade04.exe: CMakeFiles/atividade04.dir/build.make
atividade04.exe: CMakeFiles/atividade04.dir/linkLibs.rsp
atividade04.exe: CMakeFiles/atividade04.dir/objects1.rsp
atividade04.exe: CMakeFiles/atividade04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Dell\Documents\programasorientada\atividade04\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable atividade04.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\atividade04.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/atividade04.dir/build: atividade04.exe
.PHONY : CMakeFiles/atividade04.dir/build

CMakeFiles/atividade04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\atividade04.dir\cmake_clean.cmake
.PHONY : CMakeFiles/atividade04.dir/clean

CMakeFiles/atividade04.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Dell\Documents\programasorientada\atividade04 C:\Users\Dell\Documents\programasorientada\atividade04 C:\Users\Dell\Documents\programasorientada\atividade04\build C:\Users\Dell\Documents\programasorientada\atividade04\build C:\Users\Dell\Documents\programasorientada\atividade04\build\CMakeFiles\atividade04.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/atividade04.dir/depend

