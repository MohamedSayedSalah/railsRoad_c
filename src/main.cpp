#include "./Graph/Graph.h"
#include "./FileParser/FileParser.h"
#include "Solver/RouteDistance/RouteDistance.h"
#include "Solver/NumberOfTrips/NumberOfTrips.h"
#include "Solver/DifferentTrips/DifferentTrips.h"
#include "Solver/ShortestPath/ShortestPath.h"
#include <iostream>

using namespace std;

#include "./Util/Initializer.cpp"


int main(int argc  , char* argv[]) {
    Initializer *initializer = new Initializer();
    initializer->setFilePath("./input") ;
    initializer->solve();
    delete initializer ;

    return 0;
}