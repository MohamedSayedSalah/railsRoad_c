//
// Created by Mohamed Sayed on 7/23/20.
//

#include <vector>
#include <string>
#include "../Graph/Graph.h"
#include "RouteDistance.h"


using namespace std;


//    RouteDistance() ;
//    std::vector <std::string> rules = {"ABC","AD","ADC","AEBCD","AED"};
    int RouteDistance::trip (string trip ){
        int n = trip.size() ;
        int steps = 0  ;
        for (int i = 0 ; i + 1 <  n ; i ++){
            int cellValue = *(Graph::getInstance()->getAdjMatrix() + ((trip[i]-'A') * 26) + (trip[i+1]-'A'));
            steps += !cellValue   ? (-1 << 30) : cellValue ;
        }
        return steps > 0 ? steps:0 ;
    }

