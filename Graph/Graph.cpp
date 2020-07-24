//
// Created by Mohamed Sayed on 7/23/20.
//

#include <string>
#include "Graph.h"
#include "Edge/Edge.h"
#include <iostream>
using namespace std;

Graph::Graph() {
    memset(adj_matrix, 0, sizeof adj_matrix);
    adj_list.resize(26) ;
}


void Graph::fill_matrix(string direction) {
    if (direction.size() != 3) {
        printf("Error parsing input");
        // Program exits if file pointer returns NULL.
        exit(1);
    }
    adj_matrix[direction[0] - 'A'][direction[1] - 'A'] = direction[2] - '0';
}

Vertex * createNewVertex(char id ){
    return new Vertex(id) ;
}


void Graph::fillAdjList(string direction) {

    // from
    if (adj_list[(direction[0] - 'A')] ==  NULL ){
        adj_list[(direction[0] - 'A')] = createNewVertex(direction[0]) ;
    }

    // to
    if (adj_list[(direction[1] - 'A')] ==  NULL ){
        adj_list[(direction[1] - 'A')] = createNewVertex(direction[1]) ;
    }

    Edge *edge = new Edge( adj_list[(direction[1] - 'A')] , direction[2]-'0' );
    adj_list[(direction[0] - 'A')]->getEdges()->push_back(edge) ;
}

Graph *Graph::getInstance() {
    if (!graph)
        graph = new Graph();
    return graph;
};

 vector<Vertex*> Graph::getAdjList()  {
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

