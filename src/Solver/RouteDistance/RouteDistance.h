//
// Created by Mohamed Sayed on 7/23/20.
//

#ifndef RAILSROAD_ROUTEDISTANCE_H
#define RAILSROAD_ROUTEDISTANCE_H
#include "../Solver.h"
#include <string>
class RouteDistance : public Solver{
   string rules[5]  = {"ABC", "AD", "ADC", "AEBCD", "AED"} ;

public:

     long long trip(string trip);
     void solve() ;
};

#endif //RAILSROAD_ROUTEDISTANCE_H
