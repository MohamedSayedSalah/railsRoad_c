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
    void file_reader();
    void parse_file_content(char * input) ;
};



#endif //RAILSROAD_FILEPARSER_H
