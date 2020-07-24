//
// Created by Mohamed Sayed on 7/23/20.
//

#ifndef RAILSROAD_EDGE_H
#define RAILSROAD_EDGE_H


#include "../Vertex/Vertex.h"
class Vertex ;
class Edge {
public:
    Vertex *to ;
    int weight{} ;
    Edge() ;
    Edge(Vertex *vertex , int w) ;

    Vertex *getTo() ;

};


#endif //RAILSROAD_EDGE_H
