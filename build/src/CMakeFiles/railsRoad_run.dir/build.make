# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.18.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.18.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mohamedsayed/CLionProjects/railsRoad

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mohamedsayed/CLionProjects/railsRoad/build

# Include any dependencies generated for this target.
include src/CMakeFiles/railsRoad_run.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/railsRoad_run.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/railsRoad_run.dir/flags.make

src/CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.o: ../src/FileParser/FileParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/FileParser/FileParser.cpp

src/CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/FileParser/FileParser.cpp > CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.i

src/CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/FileParser/FileParser.cpp -o CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.s

src/CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.o: ../src/Graph/Edge/Edge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/Graph/Edge/Edge.cpp

src/CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/Graph/Edge/Edge.cpp > CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.i

src/CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/Graph/Edge/Edge.cpp -o CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.s

src/CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.o: ../src/Graph/Graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/Graph/Graph.cpp

src/CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/Graph/Graph.cpp > CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.i

src/CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/Graph/Graph.cpp -o CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.s

src/CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.o: ../src/Graph/Vertex/Vertex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/Graph/Vertex/Vertex.cpp

src/CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/Graph/Vertex/Vertex.cpp > CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.i

src/CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/Graph/Vertex/Vertex.cpp -o CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.s

src/CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.o: ../src/Solver/DifferentTrips/DifferentTrips.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/DifferentTrips/DifferentTrips.cpp

src/CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/DifferentTrips/DifferentTrips.cpp > CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.i

src/CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/DifferentTrips/DifferentTrips.cpp -o CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.s

src/CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.o: ../src/Solver/NumberOfTrips/NumberOfTrips.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/NumberOfTrips/NumberOfTrips.cpp

src/CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/NumberOfTrips/NumberOfTrips.cpp > CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.i

src/CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/NumberOfTrips/NumberOfTrips.cpp -o CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.s

src/CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.o: ../src/Solver/RouteDistance/RouteDistance.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/RouteDistance/RouteDistance.cpp

src/CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/RouteDistance/RouteDistance.cpp > CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.i

src/CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/RouteDistance/RouteDistance.cpp -o CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.s

src/CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.o: ../src/Solver/ShortestPath/ShortestPath.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/ShortestPath/ShortestPath.cpp

src/CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/ShortestPath/ShortestPath.cpp > CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.i

src/CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/ShortestPath/ShortestPath.cpp -o CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.s

src/CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.o: ../src/Solver/Solver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/Solver.cpp

src/CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/Solver.cpp > CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.i

src/CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/Solver/Solver.cpp -o CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.s

src/CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.o: ../src/Util/Initializer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/Util/Initializer.cpp

src/CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/Util/Initializer.cpp > CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.i

src/CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/Util/Initializer.cpp -o CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.s

src/CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.o: ../src/Util/RouteParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/Util/RouteParser.cpp

src/CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/Util/RouteParser.cpp > CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.i

src/CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/Util/RouteParser.cpp -o CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.s

src/CMakeFiles/railsRoad_run.dir/main.cpp.o: src/CMakeFiles/railsRoad_run.dir/flags.make
src/CMakeFiles/railsRoad_run.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/CMakeFiles/railsRoad_run.dir/main.cpp.o"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/railsRoad_run.dir/main.cpp.o -c /Users/mohamedsayed/CLionProjects/railsRoad/src/main.cpp

src/CMakeFiles/railsRoad_run.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/railsRoad_run.dir/main.cpp.i"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedsayed/CLionProjects/railsRoad/src/main.cpp > CMakeFiles/railsRoad_run.dir/main.cpp.i

src/CMakeFiles/railsRoad_run.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/railsRoad_run.dir/main.cpp.s"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedsayed/CLionProjects/railsRoad/src/main.cpp -o CMakeFiles/railsRoad_run.dir/main.cpp.s

# Object files for target railsRoad_run
railsRoad_run_OBJECTS = \
"CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.o" \
"CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.o" \
"CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.o" \
"CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.o" \
"CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.o" \
"CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.o" \
"CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.o" \
"CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.o" \
"CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.o" \
"CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.o" \
"CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.o" \
"CMakeFiles/railsRoad_run.dir/main.cpp.o"

# External object files for target railsRoad_run
railsRoad_run_EXTERNAL_OBJECTS =

src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/FileParser/FileParser.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/Graph/Edge/Edge.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/Graph/Graph.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/Graph/Vertex/Vertex.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/Solver/DifferentTrips/DifferentTrips.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/Solver/NumberOfTrips/NumberOfTrips.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/Solver/RouteDistance/RouteDistance.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/Solver/ShortestPath/ShortestPath.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/Solver/Solver.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/Util/Initializer.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/Util/RouteParser.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/main.cpp.o
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/build.make
src/railsRoad_run: src/CMakeFiles/railsRoad_run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mohamedsayed/CLionProjects/railsRoad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable railsRoad_run"
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/railsRoad_run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/railsRoad_run.dir/build: src/railsRoad_run

.PHONY : src/CMakeFiles/railsRoad_run.dir/build

src/CMakeFiles/railsRoad_run.dir/clean:
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build/src && $(CMAKE_COMMAND) -P CMakeFiles/railsRoad_run.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/railsRoad_run.dir/clean

src/CMakeFiles/railsRoad_run.dir/depend:
	cd /Users/mohamedsayed/CLionProjects/railsRoad/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mohamedsayed/CLionProjects/railsRoad /Users/mohamedsayed/CLionProjects/railsRoad/src /Users/mohamedsayed/CLionProjects/railsRoad/build /Users/mohamedsayed/CLionProjects/railsRoad/build/src /Users/mohamedsayed/CLionProjects/railsRoad/build/src/CMakeFiles/railsRoad_run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/railsRoad_run.dir/depend
