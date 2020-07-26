//
// Created by Mohamed Sayed on 7/24/20.
//

#ifndef RAILSROAD_SHORTESTPATH_H
#define RAILSROAD_SHORTESTPATH_H

#include "../Solver.h"
class ShortestPath : public Solver {

public:
      int dijkstra(char s , char d);
      void solve() ;

};


#endif //RAILSROAD_SHORTESTPATH_H
