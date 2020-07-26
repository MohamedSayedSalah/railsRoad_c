cmake_minimum_required(VERSION 3.15)
project(railsRoad)

set(CMAKE_CXX_STANDARD 14)

add_executable(railsRoad src/main.cpp src/Graph/Vertex/Vertex.cpp src/Graph/Vertex/Vertex.h src/Graph/Edge/Edge.cpp src/Graph/Edge/Edge.h src/Graph/Graph.cpp src/Graph/Graph.h src/FileParser/FileParser.cpp src/FileParser/FileParser.h src/Solver/RouteDistance/RouteDistance.cpp src/Solver/RouteDistance/RouteDistance.h src/Solver/NumberOfTrips/NumberOfTrips.cpp src/Solver/NumberOfTrips/NumberOfTrips.h src/Solver/DifferentTrips/DifferentTrips.cpp src/Solver/DifferentTrips/DifferentTrips.h src/Solver/ShortestPath/ShortestPath.cpp src/Solver/ShortestPath/ShortestPath.h src/Util/RouteParser.cpp Tests/RailsRoadTests.cpp src/Solver/Solver.cpp src/Solver/Solver.h)


add_subdirectory(Tests/lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)
target_link_libraries(railsRoad gtest gtest_main)