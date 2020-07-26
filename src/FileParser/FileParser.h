//
// Created by Mohamed Sayed on 7/23/20.
//

#ifndef RAILSROAD_FILEPARSER_H
#define RAILSROAD_FILEPARSER_H


#include <cstdio>
#include "../Graph/Graph.h"

class FileParser {
    char c[1000];
    FILE *fptr;

public :
    void file_reader(const char * fileName, Graph * graph);
    void parse_file_content(char * input, Graph * graph) ;
};



#endif //RAILSROAD_FILEPARSER_H
