//
// Created by Mohamed Sayed on 7/23/20.
//

#ifndef RAILSROAD_GRAPH_H
#define RAILSROAD_GRAPH_H



#include "Vertex/Vertex.h"
#include <vector>

using namespace std;
class Graph {
private:
    vector< Vertex* >  adj_list  ;
    int adj_matrix [26][26];

public:
    Graph() ;
    void fill_matrix (string direction) ;
    void fillAdjList(string direction) ;
    vector<Vertex*> getAdjList();
    int *getAdjMatrix() ;
    ~Graph();
};




#endif //RAILSROAD_GRAPH_H
