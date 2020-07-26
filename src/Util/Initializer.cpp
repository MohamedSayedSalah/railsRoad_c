//
// Created by Mohamed Sayed on 7/25/20.
//
#include "../Graph/Graph.h"
#include "../FileParser/FileParser.h"
#include "../Solver/RouteDistance/RouteDistance.h"
#include "../Solver/NumberOfTrips/NumberOfTrips.h"
#include "../Solver/ShortestPath/ShortestPath.h"
#include "../Solver/DifferentTrips/DifferentTrips.h"

class Initializer {
     Solver *solver ;
     RouteDistance routeDistance ;
     NumberOfTrips numberOfTrips ;
     ShortestPath shortestPath ;
     DifferentTrips differentTrips ;

public:
    Initializer(){} ;
    Initializer(const char * fileName){
     solver = new Solver(fileName) ;
    }
    void setFilePath(const char * filePath){
        solver = new Solver(filePath) ;
    }
    void solve(){
        routeDistance.solve();
        numberOfTrips.solve();
        shortestPath.solve() ;
        differentTrips.solve() ;
    }

     RouteDistance getRouteDistance()  {
        return routeDistance;
    }

     NumberOfTrips getNumberOfTrips()  {
        return numberOfTrips;
    }

     ShortestPath getShortestPath()  {
        return shortestPath;
    }

     DifferentTrips getDifferentTrips()  {
        return differentTrips;
    }
    ~Initializer(){
        delete  solver;
    }

};