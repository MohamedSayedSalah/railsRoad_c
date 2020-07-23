#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <unordered_map>
#include <sstream>

using namespace std;


int adj_matrix [26][26] ;

int trip (string trip ){
   int n = trip.size() ;
   int steps = 0  ;
   for (int i = 0 ; i + 1 <  n ; i ++){
       steps += !adj_matrix[trip[i]-'A'][trip[i+1]-'A']  ? (-1 << 30) : adj_matrix[trip[i]-'A'][trip[i+1]-'A'] ;
   }
   return steps > 0 ? steps:0 ;
}

void fill_matrix(string input){
    if (input.size() != 3){
        printf("Error parsing input");
        // Program exits if file pointer returns NULL.
        exit(1);
    }
    adj_matrix[input[0]-'A'][input[1]-'A'] = input[2] - '0' ;
}

void parse_file_content(char * input){
    string c ;
    stringstream ss ;
    ss << input ;
    while (ss >> c ){
      fill_matrix(c) ;
    }
}



void file_reader (){
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("../input", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until [*] delimiter
    fscanf(fptr, "%[^*]", c);
    parse_file_content(c) ;

    fclose(fptr);
}



//int dfs (char start  , char end , int remaining_steps ){
//    if (start == end ) return  1 ;
//    if (!remaining_steps) return  0 ;
//
//}
//






int main() {
    memset(adj_matrix , 0 , sizeof adj_matrix) ;
    file_reader();
    cout << trip("ABC") << endl;
    cout << trip("AED") << endl;
    cout << trip("ADC") << endl;
    cout << trip("AEBCD") << endl;
    cout << trip("AED") << endl;

    return 0;
}