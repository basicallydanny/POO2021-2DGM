# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake

# Include any dependencies generated for this target.
include CMakeFiles/casino.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/casino.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/casino.dir/flags.make

CMakeFiles/casino.dir/main.cpp.obj: CMakeFiles/casino.dir/flags.make
CMakeFiles/casino.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/casino.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\casino.dir\main.cpp.obj -c C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\main.cpp

CMakeFiles/casino.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/casino.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\main.cpp > CMakeFiles\casino.dir\main.cpp.i

CMakeFiles/casino.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/casino.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\main.cpp -o CMakeFiles\casino.dir\main.cpp.s

CMakeFiles/casino.dir/Model/Jugador.cpp.obj: CMakeFiles/casino.dir/flags.make
CMakeFiles/casino.dir/Model/Jugador.cpp.obj: ../Model/Jugador.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/casino.dir/Model/Jugador.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\casino.dir\Model\Jugador.cpp.obj -c C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Jugador.cpp

CMakeFiles/casino.dir/Model/Jugador.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/casino.dir/Model/Jugador.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Jugador.cpp > CMakeFiles\casino.dir\Model\Jugador.cpp.i

CMakeFiles/casino.dir/Model/Jugador.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/casino.dir/Model/Jugador.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Jugador.cpp -o CMakeFiles\casino.dir\Model\Jugador.cpp.s

CMakeFiles/casino.dir/View/View.cpp.obj: CMakeFiles/casino.dir/flags.make
CMakeFiles/casino.dir/View/View.cpp.obj: ../View/View.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/casino.dir/View/View.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\casino.dir\View\View.cpp.obj -c C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\View\View.cpp

CMakeFiles/casino.dir/View/View.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/casino.dir/View/View.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\View\View.cpp > CMakeFiles\casino.dir\View\View.cpp.i

CMakeFiles/casino.dir/View/View.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/casino.dir/View/View.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\View\View.cpp -o CMakeFiles\casino.dir\View\View.cpp.s

CMakeFiles/casino.dir/Model/Casino.cpp.obj: CMakeFiles/casino.dir/flags.make
CMakeFiles/casino.dir/Model/Casino.cpp.obj: ../Model/Casino.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/casino.dir/Model/Casino.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\casino.dir\Model\Casino.cpp.obj -c C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Casino.cpp

CMakeFiles/casino.dir/Model/Casino.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/casino.dir/Model/Casino.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Casino.cpp > CMakeFiles\casino.dir\Model\Casino.cpp.i

CMakeFiles/casino.dir/Model/Casino.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/casino.dir/Model/Casino.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Casino.cpp -o CMakeFiles\casino.dir\Model\Casino.cpp.s

CMakeFiles/casino.dir/Model/Juego.cpp.obj: CMakeFiles/casino.dir/flags.make
CMakeFiles/casino.dir/Model/Juego.cpp.obj: ../Model/Juego.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/casino.dir/Model/Juego.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\casino.dir\Model\Juego.cpp.obj -c C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Juego.cpp

CMakeFiles/casino.dir/Model/Juego.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/casino.dir/Model/Juego.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Juego.cpp > CMakeFiles\casino.dir\Model\Juego.cpp.i

CMakeFiles/casino.dir/Model/Juego.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/casino.dir/Model/Juego.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Juego.cpp -o CMakeFiles\casino.dir\Model\Juego.cpp.s

CMakeFiles/casino.dir/Model/Mayor13.cpp.obj: CMakeFiles/casino.dir/flags.make
CMakeFiles/casino.dir/Model/Mayor13.cpp.obj: ../Model/Mayor13.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/casino.dir/Model/Mayor13.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\casino.dir\Model\Mayor13.cpp.obj -c C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Mayor13.cpp

CMakeFiles/casino.dir/Model/Mayor13.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/casino.dir/Model/Mayor13.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Mayor13.cpp > CMakeFiles\casino.dir\Model\Mayor13.cpp.i

CMakeFiles/casino.dir/Model/Mayor13.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/casino.dir/Model/Mayor13.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\Mayor13.cpp -o CMakeFiles\casino.dir\Model\Mayor13.cpp.s

CMakeFiles/casino.dir/Model/DosColores.cpp.obj: CMakeFiles/casino.dir/flags.make
CMakeFiles/casino.dir/Model/DosColores.cpp.obj: ../Model/DosColores.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/casino.dir/Model/DosColores.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\casino.dir\Model\DosColores.cpp.obj -c C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\DosColores.cpp

CMakeFiles/casino.dir/Model/DosColores.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/casino.dir/Model/DosColores.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\DosColores.cpp > CMakeFiles\casino.dir\Model\DosColores.cpp.i

CMakeFiles/casino.dir/Model/DosColores.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/casino.dir/Model/DosColores.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\Model\DosColores.cpp -o CMakeFiles\casino.dir\Model\DosColores.cpp.s

# Object files for target casino
casino_OBJECTS = \
"CMakeFiles/casino.dir/main.cpp.obj" \
"CMakeFiles/casino.dir/Model/Jugador.cpp.obj" \
"CMakeFiles/casino.dir/View/View.cpp.obj" \
"CMakeFiles/casino.dir/Model/Casino.cpp.obj" \
"CMakeFiles/casino.dir/Model/Juego.cpp.obj" \
"CMakeFiles/casino.dir/Model/Mayor13.cpp.obj" \
"CMakeFiles/casino.dir/Model/DosColores.cpp.obj"

# External object files for target casino
casino_EXTERNAL_OBJECTS =

casino.exe: CMakeFiles/casino.dir/main.cpp.obj
casino.exe: CMakeFiles/casino.dir/Model/Jugador.cpp.obj
casino.exe: CMakeFiles/casino.dir/View/View.cpp.obj
casino.exe: CMakeFiles/casino.dir/Model/Casino.cpp.obj
casino.exe: CMakeFiles/casino.dir/Model/Juego.cpp.obj
casino.exe: CMakeFiles/casino.dir/Model/Mayor13.cpp.obj
casino.exe: CMakeFiles/casino.dir/Model/DosColores.cpp.obj
casino.exe: CMakeFiles/casino.dir/build.make
casino.exe: CMakeFiles/casino.dir/linklibs.rsp
casino.exe: CMakeFiles/casino.dir/objects1.rsp
casino.exe: CMakeFiles/casino.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable casino.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\casino.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/casino.dir/build: casino.exe
.PHONY : CMakeFiles/casino.dir/build

CMakeFiles/casino.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\casino.dir\cmake_clean.cmake
.PHONY : CMakeFiles/casino.dir/clean

CMakeFiles/casino.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake C:\Users\danie\Desktop\JAVE\POO2021-2DGM\CasinoEstudiantes\cmake-build-cmake\CMakeFiles\casino.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/casino.dir/depend

