//
// Created by Mohamed Sayed on 7/24/20.
//

#ifndef RAILSROAD_NUMBEROFTRIPS_H
#define RAILSROAD_NUMBEROFTRIPS_H


class NumberOfTrips {
    NumberOfTrips(){} ;

public:
    static int dfs(char start, char end, int stops, bool exact, char current) ;
    static void solveFromSixToSeven();
};


#endif //RAILSROAD_NUMBEROFTRIPS_H
