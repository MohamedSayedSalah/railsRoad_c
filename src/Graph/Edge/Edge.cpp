//
// Created by Mohamed Sayed on 7/23/20.
//

#include "Edge.h"
#include "../Vertex/Vertex.h"


 Edge::Edge() {};

 Edge::Edge(Vertex * from , Vertex * to, int i) {
   this->to = to ;
   this->from = from ;
   this->weight = i ;
}

Vertex *Edge::getTo() {
    return to;
}

int Edge::getWeight() {
    return weight;
}

Vertex *Edge::getFrom() {
    return from;
}

void Edge::setWeight(int weight) {
  this->weight = weight ;
}
/**
 *
 * @param e
 * @return    operator over loading to sort by priority queue
 */
bool Edge::operator<(const Edge &e) const {
    return this->weight > e.weight;
}



