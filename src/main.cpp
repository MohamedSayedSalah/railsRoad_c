#include "./Graph/Graph.h"
#include "./FileParser/FileParser.h"
#include "Solver/RouteDistance/RouteDistance.h"
#include "Solver/NumberOfTrips/NumberOfTrips.h"
#include "Solver/DifferentTrips/DifferentTrips.h"
#include "Solver/ShortestPath/ShortestPath.h"
#include <iostream>

using namespace std;

#include "./Util/Initializer.cpp"
#include <gtest/gtest.h>


int main(int argc  , char* argv[]) {
    Initializer *initializer = new Initializer();
    initializer->setFilePath("../input") ;
    initializer->solve();
    delete initializer ;

    testing::InitGoogleTest() ;
    RUN_ALL_TESTS();

    return 0;
}