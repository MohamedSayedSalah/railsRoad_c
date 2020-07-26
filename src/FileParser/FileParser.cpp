//
// Created by Mohamed Sayed on 7/23/20.
//

#include <cstdlib>
#include "FileParser.h"
#include <sstream>

using namespace std;


void FileParser::file_reader(const char *filename, Graph * graph) {
    if ((fptr = fopen(filename, "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

//     reads text until [*] delimiter
    fscanf(fptr, "%[^*]", c);
    parse_file_content(c, graph);

    fclose(fptr);

}

void FileParser::parse_file_content(char *input, Graph * graph) {
    string c;
    stringstream ss;
    ss << input;
    while (ss >> c) {
        graph->fill_matrix(c);
        graph->fillAdjList(c);
    }
}