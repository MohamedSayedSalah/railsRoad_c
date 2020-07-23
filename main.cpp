#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <unordered_map>
#include <sstream>
#include "./Graph/Graph.h"
#include "./FileParser/FileParser.h"
#include "Solver/RouteDistance.h"

using namespace std;


int adj_matrix[26][26];

int trip(string trip) {
    int n = trip.size();
    int steps = 0;
    for (int i = 0; i + 1 < n; i++) {
        steps += !adj_matrix[trip[i] - 'A'][trip[i + 1] - 'A'] ? -1 * (1 << 30) : adj_matrix[trip[i] - 'A'][
                trip[i + 1] - 'A'];
    }
    return steps > 0 ? steps : 0;
}

void fill_matrix(string input) {
    if (input.size() != 3) {
        printf("Error parsing input");
        // Program exits if file pointer returns NULL.
        exit(1);
    }
    adj_matrix[input[0] - 'A'][input[1] - 'A'] = input[2] - '0';
}

void parse_file_content(char *input) {
    string c;
    stringstream ss;
    ss << input;
    while (ss >> c) {
        fill_matrix(c);
    }
}


void file_reader() {
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("../input", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until [*] delimiter
    fscanf(fptr, "%[^*]", c);
    parse_file_content(c);

    fclose(fptr);
}




int main() {

    Graph *graph = graph->getInstance();
    FileParser fileParser;
    fileParser.file_reader();

    cout << RouteDistance::trip("ABC") << endl;
    cout << RouteDistance::trip("AD") << endl;
    cout << RouteDistance::trip("ADC") << endl;
    cout << RouteDistance::trip("AEBCD") << endl;
    cout << RouteDistance::trip("AED") << endl;

    return 0;
}