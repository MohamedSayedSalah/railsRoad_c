//
// Created by Mohamed Sayed on 7/25/20.
//

#include "Solver.h"

Solver::Solver(const char * fieldName) {
  graph = new Graph() ;
  fileParser.file_reader(fieldName, graph);
}


Graph *Solver::graph = 0;