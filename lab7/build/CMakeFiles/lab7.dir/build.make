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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:/Mateusz/Programowanie/C++/JiPP_lab/lab7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/build

# Include any dependencies generated for this target.
include CMakeFiles/lab7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab7.dir/flags.make

CMakeFiles/lab7.dir/src/main.cpp.obj: CMakeFiles/lab7.dir/flags.make
CMakeFiles/lab7.dir/src/main.cpp.obj: CMakeFiles/lab7.dir/includes_CXX.rsp
CMakeFiles/lab7.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab7.dir/src/main.cpp.obj"
	D:/Mateusz/Programy/mimgw/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab7.dir/src/main.cpp.obj -c D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/src/main.cpp

CMakeFiles/lab7.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab7.dir/src/main.cpp.i"
	D:/Mateusz/Programy/mimgw/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/src/main.cpp > CMakeFiles/lab7.dir/src/main.cpp.i

CMakeFiles/lab7.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab7.dir/src/main.cpp.s"
	D:/Mateusz/Programy/mimgw/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/src/main.cpp -o CMakeFiles/lab7.dir/src/main.cpp.s

CMakeFiles/lab7.dir/src/macierz.cpp.obj: CMakeFiles/lab7.dir/flags.make
CMakeFiles/lab7.dir/src/macierz.cpp.obj: CMakeFiles/lab7.dir/includes_CXX.rsp
CMakeFiles/lab7.dir/src/macierz.cpp.obj: ../src/macierz.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab7.dir/src/macierz.cpp.obj"
	D:/Mateusz/Programy/mimgw/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab7.dir/src/macierz.cpp.obj -c D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/src/macierz.cpp

CMakeFiles/lab7.dir/src/macierz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab7.dir/src/macierz.cpp.i"
	D:/Mateusz/Programy/mimgw/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/src/macierz.cpp > CMakeFiles/lab7.dir/src/macierz.cpp.i

CMakeFiles/lab7.dir/src/macierz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab7.dir/src/macierz.cpp.s"
	D:/Mateusz/Programy/mimgw/MinGW/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/src/macierz.cpp -o CMakeFiles/lab7.dir/src/macierz.cpp.s

# Object files for target lab7
lab7_OBJECTS = \
"CMakeFiles/lab7.dir/src/main.cpp.obj" \
"CMakeFiles/lab7.dir/src/macierz.cpp.obj"

# External object files for target lab7
lab7_EXTERNAL_OBJECTS =

lab7.exe: CMakeFiles/lab7.dir/src/main.cpp.obj
lab7.exe: CMakeFiles/lab7.dir/src/macierz.cpp.obj
lab7.exe: CMakeFiles/lab7.dir/build.make
lab7.exe: CMakeFiles/lab7.dir/linklibs.rsp
lab7.exe: CMakeFiles/lab7.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lab7.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/lab7.dir/objects.a
	D:/Mateusz/Programy/mimgw/MinGW/bin/ar.exe cr CMakeFiles/lab7.dir/objects.a @CMakeFiles/lab7.dir/objects1.rsp
	D:/Mateusz/Programy/mimgw/MinGW/bin/g++.exe -g -Wl,--whole-archive CMakeFiles/lab7.dir/objects.a -Wl,--no-whole-archive -o lab7.exe -Wl,--out-implib,liblab7.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/lab7.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/lab7.dir/build: lab7.exe

.PHONY : CMakeFiles/lab7.dir/build

CMakeFiles/lab7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab7.dir/clean

CMakeFiles/lab7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" D:/Mateusz/Programowanie/C++/JiPP_lab/lab7 D:/Mateusz/Programowanie/C++/JiPP_lab/lab7 D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/build D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/build D:/Mateusz/Programowanie/C++/JiPP_lab/lab7/build/CMakeFiles/lab7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab7.dir/depend

