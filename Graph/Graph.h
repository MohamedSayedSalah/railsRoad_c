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
    static Graph* graph ;
    vector< Vertex >  adj_list[26] ;
    int adj_matrix [26][26];
    Graph();






public:
    void fill_matrix (string direction) ;
    static Graph* getInstance( );
    const vector<Vertex> *getAdjList() const;
    int *getAdjMatrix() ;
//    const vector<int> *getAdjMatrix() const;
    ~Graph();

};




#endif //RAILSROAD_GRAPH_H
