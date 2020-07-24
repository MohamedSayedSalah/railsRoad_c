#include "./Graph/Graph.h"
#include "./FileParser/FileParser.h"
#include "Solver/RouteDistance/RouteDistance.h"
#include "Solver/NumberOfTrips/NumberOfTrips.h"
#include "Solver/DifferentTrips/DifferentTrips.h"
#include <iostream>

using namespace std;


int main() {
    Graph *graph = graph->getInstance();
    FileParser fileParser;
    fileParser.file_reader();
    RouteDistance::solveFromOneToFive();
    NumberOfTrips::solveFromSixToSeven();
    DifferentTrips::solveTen() ;

    return 0;
}