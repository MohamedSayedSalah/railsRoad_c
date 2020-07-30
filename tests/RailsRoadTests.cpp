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

        }
        void SetUp( ) {
            initializer.setFilePath("../test2");
        }
    };

}

/**
 * test up to 10 different cities route
 */
TEST_F(TenCities , up_to_10_cities){
  ASSERT_EQ( initializer.getRouteDistance().trip("ABCDEFGHIJK"),935 ) ;
};
/**
 * calculate the trip total distance for cyclic road
 */

TEST_F(TenCities , cyclic_road){
    ASSERT_EQ( initializer.getRouteDistance().trip("ABCABC"),370 ) ;
};

/**
 *
 * calculate trip with over flow trip distance
 */

TEST_F(LengthyRoad , over_flow_trips_distance){
    ASSERT_EQ( initializer.getRouteDistance().trip("ABCDEFGHIJK"),10000000000 ) ;
};

/**
 *  calculate number of trips from source to destination with up to 3 stops
 */

TEST_F(LengthyRoad , maximum_ntrips){
ASSERT_EQ(initializer.getNumberOfTrips().dfs('A', 'C', 3, false, '*') ,1) ;
};

/**
 * calculate number of trips from source to destination with exact 3 stops
 */
TEST_F(LengthyRoad , exact_ntrips){
    ASSERT_EQ( initializer.getNumberOfTrips().dfs('A', 'E', 6, true, '*'),2 ) ;
};

/**
 * calculate shortest path from A to E
 */
TEST_F(TenCities , shortest_trip_from_A_E){
    ASSERT_EQ( initializer.getShortestPath().dijkstraWithPriorityQueue('A', 'I'),414 ) ;
};
/**
 * calculate shortest path from A to C
 */
TEST_F(TenCities , shortest_trip_from_A_C){
    ASSERT_EQ( initializer.getShortestPath().dijkstra('A', 'C'),24 ) ;
};


/**
 * calculate how many different routes  from A to C with up to 500 distance long
 */

TEST_F(TenCities , trip_combinations_from_A_C){
    ASSERT_EQ( initializer.getDifferentTrips().dp('A', 'C',500,0),1687 ) ;
};

/**
 * calculate how many different routes  from A to E with up to 500 distance long
 */

TEST_F(TenCities , trip_combinations_from_A_E){
    ASSERT_EQ( initializer.getDifferentTrips().dp('A', 'D',300,0),55 ) ;
};






