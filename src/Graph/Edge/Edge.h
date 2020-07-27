//
// Created by Mohamed Sayed on 7/23/20.
//

#ifndef RAILSROAD_EDGE_H
#define RAILSROAD_EDGE_H


#include "../Vertex/Vertex.h"
class Vertex ;
class Edge {
    Vertex *to ;
    Vertex *from ;
    int weight ;
public:
    Edge() ;
    Edge(Vertex *from, Vertex *to  , int w) ;
    int getWeight() ;
    void setWeight(int w) ;
    Vertex *getTo() ;
    Vertex *getFrom();
    bool operator < (const Edge & e ) const ;
};


#endif //RAILSROAD_EDGE_H
