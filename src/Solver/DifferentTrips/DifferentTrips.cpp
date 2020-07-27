//
// Created by Mohamed Sayed on 7/24/20.
//

#include "DifferentTrips.h"
#include "../../Graph/Vertex/Vertex.h"
#include "../../Graph/Graph.h"
#include <queue>
#include <iostream>

/**
 *
 * @param current  you current vertex
 * @param e you destination
 * @param distance the upTo distance
 * @param soFar what is your steps soFar
 * @return number of different routes
 *
 *  for each vertex you visit all of its edges with added weight to the total steps
 *  and route considered to be a different route if and only if you visited the vertex with different steps so far
 *  and mem array for memoization and for saving the visited state however using unordered_map for keeping the state was a better solution
 */


int DifferentTrips::dp(char current, char e, int distance, int soFar = 0) {
    if (soFar >= distance) {
        return 0;
    }

    int &ret = mem[current - 'A'][soFar];
    if (ret != -1){
        return ret;
    }
    Vertex *vertex = graph->getAdjList()[current - 'A'];
    vector<Edge *> *edges = vertex->getEdges();


    int count = (current == e && soFar < distance && soFar ? 1 : 0);

    for (auto edge : *edges) {
        count += dp(edge->getTo()->getId(), e, distance,edge->getWeight() + soFar);
    }

    return ret = count;
}

void DifferentTrips::solve() {
    cout << "Output #10: "<< dp('C' ,'C'  , 30,0) << endl ;
}

DifferentTrips::DifferentTrips() {
    memset(mem , -1 , sizeof mem) ;
}



