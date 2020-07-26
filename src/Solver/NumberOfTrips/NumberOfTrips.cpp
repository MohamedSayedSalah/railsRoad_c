//
// Created by Mohamed Sayed on 7/24/20.
//

#include "NumberOfTrips.h"
#include "../../Graph/Graph.h"
#include <iostream>

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
