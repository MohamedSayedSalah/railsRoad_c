//
// Created by Mohamed Sayed on 7/24/20.
//

#include "DifferentTrips.h"
#include "../../Graph/Vertex/Vertex.h"
#include "../../Graph/Graph.h"
#include <queue>
#include <iostream>




int DifferentTrips::dfs(char current, char e, int distance, int soFar = 0) {
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
        count += dfs(edge->getTo()->getId(), e, distance,edge->getWeight() + soFar);
    }

    return ret = count;
}

void DifferentTrips::solve() {
    cout << "Output #10: "<< dfs('C' ,'C'  , 30,0) << endl ;
}

DifferentTrips::DifferentTrips() {
    memset(mem , -1 , sizeof mem) ;
}



