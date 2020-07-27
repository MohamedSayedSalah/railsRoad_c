//
// Created by Mohamed Sayed on 7/23/20.
//

#include <vector>
#include <string>
#include "../../Graph/Graph.h"
#include "RouteDistance.h"
#include <iostream>


using namespace std;

/**
 *
 * @param trip  trip  from rules array like ABC
 * @return number of steps until you reach your destination
 *
 * this solution is using adj_matrix to calculate directly the steps from to -> destination in O(1) constant time factor
 *  ABC will be  =  adj_matrix[0][1] + adj_matrix[1][2]
 *
 */
long long RouteDistance::trip(string trip) {
    int n = trip.size();
    long long steps = 0;
    for (int i = 0; i + 1 < n; i++) {
        int cellValue = *(graph->getAdjMatrix() + ((trip[i] - 'A') * 26) + (trip[i + 1] - 'A'));
        steps += !cellValue ? -1 * (1 << 30) : cellValue;
    }
    return steps > 0 ? steps : 0;
}

void RouteDistance::solve()  {
    for (int i = 0 ; i < 5  ; i ++){
        long long distance = trip(rules[i])  ;
        distance ?  cout << "Output #" << i + 1 <<": " << distance << endl :  cout << "Output #" << i + 1 <<": " << "NO SUCH ROUTE" << endl  ;
    }
}

