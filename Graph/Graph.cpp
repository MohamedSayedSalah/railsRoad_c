//
// Created by Mohamed Sayed on 7/23/20.
//

#include <string>
#include "Graph.h"

using namespace std;

void Graph::fill_matrix(string direction) {
    if (direction.size() != 3) {
        printf("Error parsing input");
        // Program exits if file pointer returns NULL.
        exit(1);
    }
    adj_matrix[direction[0] - 'A'][direction[1] - 'A'] = direction[2] - '0';
}

Graph::Graph() {
    memset(adj_matrix, 0, sizeof adj_matrix);
}

Graph *Graph::getInstance() {
    if (!graph)
        graph = new Graph();
    return graph;
};

const vector<Vertex> *Graph::getAdjList() const {
    return adj_list;
}

//const vector<int> *Graph::getAdjMatrix() const {
//    return adj_matrix;
//}


Graph::~Graph() {
    delete graph;
}

// static data member.  The pointer is being allocated
Graph *Graph::graph = 0;

int *Graph::getAdjMatrix() {
    int *ptr  = &adj_matrix[0][0] ;
    return ptr;
}
