# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PUISSANCE_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PUISSANCE_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PUISSANCE_4.dir/flags.make

CMakeFiles/PUISSANCE_4.dir/main.c.o: CMakeFiles/PUISSANCE_4.dir/flags.make
CMakeFiles/PUISSANCE_4.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/PUISSANCE_4.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PUISSANCE_4.dir/main.c.o   -c /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/main.c

CMakeFiles/PUISSANCE_4.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PUISSANCE_4.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/main.c > CMakeFiles/PUISSANCE_4.dir/main.c.i

CMakeFiles/PUISSANCE_4.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PUISSANCE_4.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/main.c -o CMakeFiles/PUISSANCE_4.dir/main.c.s

CMakeFiles/PUISSANCE_4.dir/main.c.o.requires:

.PHONY : CMakeFiles/PUISSANCE_4.dir/main.c.o.requires

CMakeFiles/PUISSANCE_4.dir/main.c.o.provides: CMakeFiles/PUISSANCE_4.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/PUISSANCE_4.dir/build.make CMakeFiles/PUISSANCE_4.dir/main.c.o.provides.build
.PHONY : CMakeFiles/PUISSANCE_4.dir/main.c.o.provides

CMakeFiles/PUISSANCE_4.dir/main.c.o.provides.build: CMakeFiles/PUISSANCE_4.dir/main.c.o


CMakeFiles/PUISSANCE_4.dir/connect_four.c.o: CMakeFiles/PUISSANCE_4.dir/flags.make
CMakeFiles/PUISSANCE_4.dir/connect_four.c.o: ../connect_four.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/PUISSANCE_4.dir/connect_four.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PUISSANCE_4.dir/connect_four.c.o   -c /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/connect_four.c

CMakeFiles/PUISSANCE_4.dir/connect_four.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PUISSANCE_4.dir/connect_four.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/connect_four.c > CMakeFiles/PUISSANCE_4.dir/connect_four.c.i

CMakeFiles/PUISSANCE_4.dir/connect_four.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PUISSANCE_4.dir/connect_four.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/connect_four.c -o CMakeFiles/PUISSANCE_4.dir/connect_four.c.s

CMakeFiles/PUISSANCE_4.dir/connect_four.c.o.requires:

.PHONY : CMakeFiles/PUISSANCE_4.dir/connect_four.c.o.requires

CMakeFiles/PUISSANCE_4.dir/connect_four.c.o.provides: CMakeFiles/PUISSANCE_4.dir/connect_four.c.o.requires
	$(MAKE) -f CMakeFiles/PUISSANCE_4.dir/build.make CMakeFiles/PUISSANCE_4.dir/connect_four.c.o.provides.build
.PHONY : CMakeFiles/PUISSANCE_4.dir/connect_four.c.o.provides

CMakeFiles/PUISSANCE_4.dir/connect_four.c.o.provides.build: CMakeFiles/PUISSANCE_4.dir/connect_four.c.o


CMakeFiles/PUISSANCE_4.dir/computer.c.o: CMakeFiles/PUISSANCE_4.dir/flags.make
CMakeFiles/PUISSANCE_4.dir/computer.c.o: ../computer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/PUISSANCE_4.dir/computer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PUISSANCE_4.dir/computer.c.o   -c /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/computer.c

CMakeFiles/PUISSANCE_4.dir/computer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PUISSANCE_4.dir/computer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/computer.c > CMakeFiles/PUISSANCE_4.dir/computer.c.i

CMakeFiles/PUISSANCE_4.dir/computer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PUISSANCE_4.dir/computer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/computer.c -o CMakeFiles/PUISSANCE_4.dir/computer.c.s

CMakeFiles/PUISSANCE_4.dir/computer.c.o.requires:

.PHONY : CMakeFiles/PUISSANCE_4.dir/computer.c.o.requires

CMakeFiles/PUISSANCE_4.dir/computer.c.o.provides: CMakeFiles/PUISSANCE_4.dir/computer.c.o.requires
	$(MAKE) -f CMakeFiles/PUISSANCE_4.dir/build.make CMakeFiles/PUISSANCE_4.dir/computer.c.o.provides.build
.PHONY : CMakeFiles/PUISSANCE_4.dir/computer.c.o.provides

CMakeFiles/PUISSANCE_4.dir/computer.c.o.provides.build: CMakeFiles/PUISSANCE_4.dir/computer.c.o


CMakeFiles/PUISSANCE_4.dir/check.c.o: CMakeFiles/PUISSANCE_4.dir/flags.make
CMakeFiles/PUISSANCE_4.dir/check.c.o: ../check.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/PUISSANCE_4.dir/check.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PUISSANCE_4.dir/check.c.o   -c /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/check.c

CMakeFiles/PUISSANCE_4.dir/check.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PUISSANCE_4.dir/check.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/check.c > CMakeFiles/PUISSANCE_4.dir/check.c.i

CMakeFiles/PUISSANCE_4.dir/check.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PUISSANCE_4.dir/check.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/check.c -o CMakeFiles/PUISSANCE_4.dir/check.c.s

CMakeFiles/PUISSANCE_4.dir/check.c.o.requires:

.PHONY : CMakeFiles/PUISSANCE_4.dir/check.c.o.requires

CMakeFiles/PUISSANCE_4.dir/check.c.o.provides: CMakeFiles/PUISSANCE_4.dir/check.c.o.requires
	$(MAKE) -f CMakeFiles/PUISSANCE_4.dir/build.make CMakeFiles/PUISSANCE_4.dir/check.c.o.provides.build
.PHONY : CMakeFiles/PUISSANCE_4.dir/check.c.o.provides

CMakeFiles/PUISSANCE_4.dir/check.c.o.provides.build: CMakeFiles/PUISSANCE_4.dir/check.c.o


CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o: CMakeFiles/PUISSANCE_4.dir/flags.make
CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o: ../render_ncurses.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o   -c /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/render_ncurses.c

CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/render_ncurses.c > CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.i

CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/render_ncurses.c -o CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.s

CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o.requires:

.PHONY : CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o.requires

CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o.provides: CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o.requires
	$(MAKE) -f CMakeFiles/PUISSANCE_4.dir/build.make CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o.provides.build
.PHONY : CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o.provides

CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o.provides.build: CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o


# Object files for target PUISSANCE_4
PUISSANCE_4_OBJECTS = \
"CMakeFiles/PUISSANCE_4.dir/main.c.o" \
"CMakeFiles/PUISSANCE_4.dir/connect_four.c.o" \
"CMakeFiles/PUISSANCE_4.dir/computer.c.o" \
"CMakeFiles/PUISSANCE_4.dir/check.c.o" \
"CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o"

# External object files for target PUISSANCE_4
PUISSANCE_4_EXTERNAL_OBJECTS =

PUISSANCE_4: CMakeFiles/PUISSANCE_4.dir/main.c.o
PUISSANCE_4: CMakeFiles/PUISSANCE_4.dir/connect_four.c.o
PUISSANCE_4: CMakeFiles/PUISSANCE_4.dir/computer.c.o
PUISSANCE_4: CMakeFiles/PUISSANCE_4.dir/check.c.o
PUISSANCE_4: CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o
PUISSANCE_4: CMakeFiles/PUISSANCE_4.dir/build.make
PUISSANCE_4: CMakeFiles/PUISSANCE_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable PUISSANCE_4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PUISSANCE_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PUISSANCE_4.dir/build: PUISSANCE_4

.PHONY : CMakeFiles/PUISSANCE_4.dir/build

CMakeFiles/PUISSANCE_4.dir/requires: CMakeFiles/PUISSANCE_4.dir/main.c.o.requires
CMakeFiles/PUISSANCE_4.dir/requires: CMakeFiles/PUISSANCE_4.dir/connect_four.c.o.requires
CMakeFiles/PUISSANCE_4.dir/requires: CMakeFiles/PUISSANCE_4.dir/computer.c.o.requires
CMakeFiles/PUISSANCE_4.dir/requires: CMakeFiles/PUISSANCE_4.dir/check.c.o.requires
CMakeFiles/PUISSANCE_4.dir/requires: CMakeFiles/PUISSANCE_4.dir/render_ncurses.c.o.requires

.PHONY : CMakeFiles/PUISSANCE_4.dir/requires

CMakeFiles/PUISSANCE_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PUISSANCE_4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PUISSANCE_4.dir/clean

CMakeFiles/PUISSANCE_4.dir/depend:
	cd /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4 /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4 /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug /Volumes/bwyyoung_42_2/Dropbox/42_LOCAL/Documents/ANNEE_2/RUSHES/PUISSANCE_4/cmake-build-debug/CMakeFiles/PUISSANCE_4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PUISSANCE_4.dir/depend

