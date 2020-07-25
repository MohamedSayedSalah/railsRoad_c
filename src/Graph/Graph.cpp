//
// Created by Mohamed Sayed on 7/23/20.
//

#include <string>
#include "Graph.h"
#include "Edge/Edge.h"
#include "../Util/RouteParser.cpp"
using namespace std;

Graph::Graph() {
    memset(adj_matrix, 1 << 30, sizeof adj_matrix);
    adj_list.resize(26) ;
}


void Graph::fill_matrix(string direction) {
    RouteParser routeParser(direction) ;
    adj_matrix[routeParser.getFrom() - 'A'][routeParser.getTo() - 'A'] = routeParser.getDistance();
}

Vertex * createNewVertex(char id ){
    return new Vertex(id) ;
}


void Graph::fillAdjList(string direction) {
    RouteParser routeParser(direction) ;
    // from
    if (adj_list[(routeParser.getFrom() - 'A')] ==  NULL ){
        adj_list[(routeParser.getFrom() - 'A')] = createNewVertex(routeParser.getFrom()) ;
    }

    // to
    if (adj_list[(routeParser.getTo() - 'A')] ==  NULL ){
        adj_list[(routeParser.getTo() - 'A')] = createNewVertex(routeParser.getTo()) ;
    }

    Edge *edge = new Edge( adj_list[(routeParser.getTo() - 'A')] , routeParser.getDistance() );
    adj_list[(routeParser.getFrom() - 'A')]->getEdges()->push_back(edge) ;
}

Graph *Graph::getInstance() {
    if (!graph)
        graph = new Graph();
    return graph;
};

 vector<Vertex*> Graph::getAdjList()  {
    return adj_list;
}



Graph::~Graph() {
    delete graph;
}

// static data member.  The pointer is being allocated
Graph *Graph::graph = 0;

int *Graph::getAdjMatrix() {
    int *ptr  = &adj_matrix[0][0] ;
    return ptr;
}

