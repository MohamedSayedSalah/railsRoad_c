//
#include <math.h>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std ;

class RouteParser{
    char from, to ;
    long long distance ;

public:
    RouteParser() {} ;

    long long convertToLong (string input){
        long long ret = 0 ;
        for (int i = input.size() -1 ,  j = 0  ; i >= 0 ; i --, j ++){
            if (input[i] < '0' || input[i]> '9'){
                puts("Error Parsing Input") ;
                exit(1) ;
            }
            ret += pow(10.0,j * 1.0) *  (input[i] - '0') ;
        }
        return ret ;
    }

    char getFrom() const {
        return from;
    }

    char getTo() const {
        return to;
    }

    long long  getDistance() const {
        return distance;
    }

    RouteParser(string route) {
        if (route[0] < 'A' || route[0] > 'Z' || route[1] < 'A' || route[1] > 'Z'   ){
            puts("Error Parsing Input") ;
            exit(1) ;
        }
        from = route[0] ;
        to = route[1] ;
        distance = convertToLong(route.substr(2)) ;
    }
};
