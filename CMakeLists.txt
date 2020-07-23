cmake_minimum_required(VERSION 3.15)
project(railsRoad)

set(CMAKE_CXX_STANDARD 14)

add_executable(railsRoad main.cpp Graph/Vertex/Vertex.cpp Graph/Vertex/Vertex.h Graph/Edge/Edge.cpp Graph/Edge/Edge.h Graph/Graph.cpp Graph/Graph.h FileParser/FileParser.cpp FileParser/FileParser.h Solver/RouteDistance.cpp Solver/RouteDistance.h)