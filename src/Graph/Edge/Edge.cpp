//
// Created by Mohamed Sayed on 7/23/20.
//

#include "Edge.h"
#include "../Vertex/Vertex.h"


 Edge::Edge() {};

 Edge::Edge(Vertex * vertex, int i) {
   to = vertex ;
   weight = i ;
}

Vertex *Edge::getTo() {
    return to;
}

int Edge::getWeight() {
    return weight;
}



