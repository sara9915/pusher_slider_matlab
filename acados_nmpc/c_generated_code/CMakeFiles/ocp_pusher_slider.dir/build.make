# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code

# Include any dependencies generated for this target.
include CMakeFiles/ocp_pusher_slider.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ocp_pusher_slider.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ocp_pusher_slider.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ocp_pusher_slider.dir/flags.make

CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.obj: CMakeFiles/ocp_pusher_slider.dir/flags.make
CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.obj: CMakeFiles/ocp_pusher_slider.dir/includes_C.rsp
CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.obj: acados_solver_pusher_slider.c
CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.obj: CMakeFiles/ocp_pusher_slider.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.obj"
	C:\Strawberry\c\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.obj -MF CMakeFiles\ocp_pusher_slider.dir\acados_solver_pusher_slider.c.obj.d -o CMakeFiles\ocp_pusher_slider.dir\acados_solver_pusher_slider.c.obj -c C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code\acados_solver_pusher_slider.c

CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.i"
	C:\Strawberry\c\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code\acados_solver_pusher_slider.c > CMakeFiles\ocp_pusher_slider.dir\acados_solver_pusher_slider.c.i

CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.s"
	C:\Strawberry\c\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code\acados_solver_pusher_slider.c -o CMakeFiles\ocp_pusher_slider.dir\acados_solver_pusher_slider.c.s

ocp_pusher_slider: CMakeFiles/ocp_pusher_slider.dir/acados_solver_pusher_slider.c.obj
ocp_pusher_slider: CMakeFiles/ocp_pusher_slider.dir/build.make
.PHONY : ocp_pusher_slider

# Rule to build all files generated by this target.
CMakeFiles/ocp_pusher_slider.dir/build: ocp_pusher_slider
.PHONY : CMakeFiles/ocp_pusher_slider.dir/build

CMakeFiles/ocp_pusher_slider.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ocp_pusher_slider.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ocp_pusher_slider.dir/clean

CMakeFiles/ocp_pusher_slider.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code C:\Users\Marco\Documents\GitHub\pusher_slider_matlab\acados_nmpc\c_generated_code\CMakeFiles\ocp_pusher_slider.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ocp_pusher_slider.dir/depend

