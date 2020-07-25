//
// Created by Mohamed Sayed on 7/23/20.
//

#include <vector>
#include <string>
#include "../../Graph/Graph.h"
#include "RouteDistance.h"
#include <iostream>


using namespace std;

 string RouteDistance::rules[5] = {"ABC", "AD", "ADC", "AEBCD", "AED"} ;

int RouteDistance::trip(string trip) {
    int n = trip.size();
    int steps = 0;
    for (int i = 0; i + 1 < n; i++) {
        int cellValue = *(Graph::getInstance()->getAdjMatrix() + ((trip[i] - 'A') * 26) + (trip[i + 1] - 'A'));
        steps += !cellValue ? -1 * (1 << 30) : cellValue;
    }
    return steps > 0 ? steps : 0;
}

void RouteDistance::solveFromOneToFive() {
    for (int i = 0 ; i < 5  ; i ++){
        int distance = RouteDistance::trip(rules[i])  ;
        distance ?  cout << "Output #" << i + 1 <<": " << distance << endl :  cout << "Output #" << i + 1 <<": " << "NO SUCH ROUTE" << endl  ;
    }
}

