//
// Created by Mohamed Sayed on 7/24/20.
//

#ifndef RAILSROAD_DIFFERENTTRIPS_H
#define RAILSROAD_DIFFERENTTRIPS_H


#include "../../Graph/Vertex/Vertex.h"
#include "../Solver.h"

class DifferentTrips : public Solver {
    int mem[26][10000];
public:
      DifferentTrips();
      int dp (char s , char e, int distance , int sofar ) ;
      void solve() ;
};



#endif //RAILSROAD_DIFFERENTTRIPS_H
