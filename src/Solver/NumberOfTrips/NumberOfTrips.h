//
// Created by Mohamed Sayed on 7/24/20.
//

#ifndef RAILSROAD_NUMBEROFTRIPS_H
#define RAILSROAD_NUMBEROFTRIPS_H
#include "../Solver.h"

class NumberOfTrips: public Solver {

public:
     int dfs(char start, char end, int stops, bool exact, char current) ;
     void solve();
};


#endif //RAILSROAD_NUMBEROFTRIPS_H
