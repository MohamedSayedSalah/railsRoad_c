//
// Created by Mohamed Sayed on 7/24/20.
//

#include "DifferentTrips.h"
#include "../../Graph/Vertex/Vertex.h"
#include "../../Graph/Graph.h"
#include <queue>
#include <iostream>
int mem[26][30];



int DifferentTrips::dfs(char current, char e, int distance) {
    if (distance >= 30) {
        return 0;
    }

    int &ret = mem[current - 'A'][distance];
    if (ret != -1){
        return ret;
    }
    Vertex *vertex = Graph::getInstance()->getAdjList()[current - 'A'];
    vector<Edge *> *edges = vertex->getEdges();


    int count = (current == e && distance < 30 && distance ? 1 : 0);

    for (auto edge : *edges) {
        count += dfs(edge->getTo()->getId(), e, edge->getWeight() + distance);
    }

    return ret = count;
}

void DifferentTrips::solveTen() {
  memset(mem , -1 , sizeof mem) ;
    cout << "Output #10: "<< dfs('C' ,'C'  , 0) << endl ;
}



