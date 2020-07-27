//
// Created by Mohamed Sayed on 7/25/20.
//

#include <gtest/gtest.h>
#include "../src/Util/Initializer.cpp"
#include "../src/Graph/Graph.h"
#include "../src/FileParser/FileParser.h"
#include "../src/Solver/RouteDistance/RouteDistance.h"
#include "../src/Solver/NumberOfTrips/NumberOfTrips.h"
#include "../src/Solver/ShortestPath/ShortestPath.h"
#include "../src/Solver/DifferentTrips/DifferentTrips.h"

using testing::Eq ;


namespace {

    class TenCities : public ::testing::Test {
    protected:
        Initializer initializer ;
    public :
        TenCities() : Test() {

        }
        void SetUp( ) {
            initializer.setFilePath("../test1") ;

        }
    };



    class LengthyRoad : public ::testing::Test {
    protected:
        Initializer initializer ;
    public :
        LengthyRoad() : Test() {
            initializer.setFilePath("../test2");
        }
    };

}

//
TEST_F(TenCities , up_to_10_cities){
  ASSERT_EQ( initializer.getRouteDistance().trip("ABCDEFGHIJK"),1000 ) ;
};

TEST_F(TenCities , cyclic_road){
    ASSERT_EQ( initializer.getRouteDistance().trip("ABCABC"),500 ) ;
};

TEST_F(LengthyRoad , over_flow_trips_distance){
    ASSERT_EQ( initializer.getRouteDistance().trip("ABCDEFGHIJK"),10000000000 ) ;
};


TEST_F(LengthyRoad , maximum_ntrips){
ASSERT_EQ(initializer.getNumberOfTrips().dfs('A', 'C', 3, false, '*') ,1) ;
};


TEST_F(LengthyRoad , exact_ntrips){
    ASSERT_EQ( initializer.getNumberOfTrips().dfs('A', 'D', 3, true, '*'),2 ) ;
};

TEST_F(TenCities , shortest_trip_from_A_E){
    ASSERT_EQ( initializer.getShortestPath().dijkstra('A', 'E'),145 ) ;
};

TEST_F(TenCities , shortest_trip_from_A_C){
    ASSERT_EQ( initializer.getShortestPath().dijkstra('A', 'C'),155 ) ;
};

TEST_F(TenCities , trip_combinations_from_A_C){
    ASSERT_EQ( initializer.getDifferentTrips().dfs('A', 'C',500,0),7 ) ;
};

TEST_F(TenCities , trip_combinations_from_A_E){
    ASSERT_EQ( initializer.getDifferentTrips().dfs('A', 'E',500,0),5 ) ;
};






