//
// Created by Mohamed Sayed on 7/25/20.
//

#ifndef RAILSROAD_SOLVER_H
#define RAILSROAD_SOLVER_H


#include "../Graph/Graph.h"
#include "../FileParser/FileParser.h"

class Solver {
protected:
    static Graph* graph ;
    FileParser fileParser;

public :
    Solver(){} ;
    Solver(const char * fieldName) ;
    virtual void  solve() {} ;
    virtual  ~Solver()= default;
};


#endif //RAILSROAD_SOLVER_H

