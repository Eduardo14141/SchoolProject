# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\Curso Java\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Curso Java\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Curso Java\CLionProject\SchoolProject"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Curso Java\CLionProject\SchoolProject\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SchoolProject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SchoolProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SchoolProject.dir/flags.make

CMakeFiles/SchoolProject.dir/main.c.obj: CMakeFiles/SchoolProject.dir/flags.make
CMakeFiles/SchoolProject.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Curso Java\CLionProject\SchoolProject\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SchoolProject.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SchoolProject.dir\main.c.obj   -c "C:\Users\Curso Java\CLionProject\SchoolProject\main.c"

CMakeFiles/SchoolProject.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SchoolProject.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Curso Java\CLionProject\SchoolProject\main.c" > CMakeFiles\SchoolProject.dir\main.c.i

CMakeFiles/SchoolProject.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SchoolProject.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Curso Java\CLionProject\SchoolProject\main.c" -o CMakeFiles\SchoolProject.dir\main.c.s

# Object files for target SchoolProject
SchoolProject_OBJECTS = \
"CMakeFiles/SchoolProject.dir/main.c.obj"

# External object files for target SchoolProject
SchoolProject_EXTERNAL_OBJECTS =

SchoolProject.exe: CMakeFiles/SchoolProject.dir/main.c.obj
SchoolProject.exe: CMakeFiles/SchoolProject.dir/build.make
SchoolProject.exe: CMakeFiles/SchoolProject.dir/linklibs.rsp
SchoolProject.exe: CMakeFiles/SchoolProject.dir/objects1.rsp
SchoolProject.exe: CMakeFiles/SchoolProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Curso Java\CLionProject\SchoolProject\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SchoolProject.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SchoolProject.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SchoolProject.dir/build: SchoolProject.exe

.PHONY : CMakeFiles/SchoolProject.dir/build

CMakeFiles/SchoolProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SchoolProject.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SchoolProject.dir/clean

CMakeFiles/SchoolProject.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Curso Java\CLionProject\SchoolProject" "C:\Users\Curso Java\CLionProject\SchoolProject" "C:\Users\Curso Java\CLionProject\SchoolProject\cmake-build-debug" "C:\Users\Curso Java\CLionProject\SchoolProject\cmake-build-debug" "C:\Users\Curso Java\CLionProject\SchoolProject\cmake-build-debug\CMakeFiles\SchoolProject.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SchoolProject.dir/depend

