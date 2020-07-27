//
// Created by Mohamed Sayed on 7/24/20.
//

#include "NumberOfTrips.h"
#include "../../Graph/Graph.h"
#include <iostream>

/**
 *
 * @param start initial source
 * @param end endup destination
 * @param stops how many stops do you still have so far
 * @param exact is it has to be exact number of steps or it can be maximum number of steps
 * @param current your current vertex
 * @return number of different route that you could take from source to destination with provided steps
 *
 * for each vertex you visit all of its edges
 * and for each new visited vertex you subtract your remaining steps by 1
 * until you reach your destination this will be considered a valid route
 * the solution complexity will be O(E*V) if the memoization technique was used in this solution
 */


int NumberOfTrips::dfs(char start, char end , int stops, bool exact  , char current = '*') {
    if (stops < 0) return 0 ;
    if (current == end && ((stops == 0 && exact) || (stops>=0 && !exact)) ) return 1  ;
    if (current=='*') current = start ;// default value

    vector<Edge*> *edges = graph->getAdjList()[current-'A']->getEdges() ;
    int nTrips = 0 ;
    for (auto edge : *edges){
        nTrips += dfs(start , end , stops - 1 , exact,edge->getTo()->getId() ) ;
    }
    return nTrips;
}

void NumberOfTrips::solve() {
    cout <<"Output #6: "<< NumberOfTrips::dfs('C' , 'C' , 3, false ,'*') << endl;
    cout << "Output #7: "<< NumberOfTrips::dfs('A' , 'C' , 4, true ,'*' ) << endl;
}
