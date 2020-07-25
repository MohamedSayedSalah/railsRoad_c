//
// Created by Mohamed Sayed on 7/25/20.
//


class Initializer {
    Initializer(){} ;
public:
    static void initialize(){
        Graph *graph = graph->getInstance();
        FileParser fileParser;
        fileParser.file_reader();
        RouteDistance::solveFromOneToFive();
        NumberOfTrips::solveFromSixToSeven();
        ShortestPath::solveFromEightToNine() ;
        DifferentTrips::solveTen() ;
    }

};