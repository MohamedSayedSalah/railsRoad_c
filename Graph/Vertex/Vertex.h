//
// Created by Mohamed Sayed on 7/23/20.
//

#ifndef RAILSROAD_VERTEX_H
#define RAILSROAD_VERTEX_H


//#include "../Edge/Edge.h"

#include "../Edge/Edge.h"
#include <vector>
using  namespace std ;
class  Edge ;
class Vertex {
    char id ;
    vector<Edge*> * edges ;

public:
    char getId() ;
    Vertex() ;
    Vertex(char id) ;

    vector<Edge *> *getEdges() const;
};


#endif //RAILSROAD_VERTEX_H
