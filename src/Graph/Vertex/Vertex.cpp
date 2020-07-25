//
// Created by Mohamed Sayed on 7/23/20.
//

#include "Vertex.h"
#include <vector>

#include "../Edge/Edge.h"

using namespace std ;

class Edge ;
char Vertex::getId()  {
    return id;
}



Vertex::Vertex(char ID) {
    id = ID ;
    this->edges = new vector<Edge*>() ;
};

Vertex::Vertex() {}

vector<Edge *> *Vertex::getEdges() const {
    return edges;
}


