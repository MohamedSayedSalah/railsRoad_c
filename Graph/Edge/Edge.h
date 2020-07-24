//
// Created by Mohamed Sayed on 7/23/20.
//

#ifndef RAILSROAD_EDGE_H
#define RAILSROAD_EDGE_H


#include "../Vertex/Vertex.h"
class Vertex ;
class Edge {
    Vertex *to ;
    int weight ;
public:
    Edge() ;
    Edge(Vertex *vertex , int w) ;
    int getWeight() ;
    Vertex *getTo() ;

};


#endif //RAILSROAD_EDGE_H
