# railsRoad_c

## INSTRUCTIONS

this instructions only work for (mac/linux) users . for widnows you have to use Mingw 

- you need to have homebrew 
- open your terminal 
- install cMake using homebrew 
`brew install cmake`
- download railsRoad_c project `git clone git@github.com:MohamedSayedSalah/railsRoad_c.git`
- navigate to the project folder and add build and lib folders `mkdir {lib,build}`
- navigate to lib folder `cd lib`
- add googleTest library in this folder `git clone git@github.com:google/googletest.git`
- navigate to root folder again 
- navigate to build folder `cd build`
- build the project using cMake ` cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" `
- `make all`
- after that you will have 2 executables in the build folder one for tests and one for the main program 
- to run the main program type `./src/railsRoad_run`
- to run tests type `./tests/railsRoad_tests`

## SOLUTIONS

the solutoin to this problem is done using both ` adjacency Matrix ` and `adjacency List` 

- ` adjacency Matrix ->  (26*26) grid which store (from->to) weight . suppose  you have AB5 to store the value in the matrix it will be like this (adj_matrix[A-'A'][B-'A'] = 5)  -> (addj_matrix[0][1] = 5)`
- `adjacency List -> each city represented as Vertex and the city routes represented as Vector<Edge*> inside Vertex class  and each edge has its own weight and its own destination , so the adj_list is represented as vector< Vertex* >  adj_list   `

- (1-5) the solution is done using adj matrix   the solution in the RouteDistance class 

- (6-7) the solution is done using depth first search  with data represented as adj_list , for each `city = vertex` you traverse all of its edges and subtract the remainig steps by 1 until you reach your destination , the solution in NumberOfTrips  class 

- (8-9) the solution is done using `dijkistra algorithm (shortest path algorithm)` using arrays with complexity of  O(V*V) there is also another solution using priority queue with a better complexity O(V log (E)) the solution in the shortest path class 

- (10) the solution is done using simple recursive function (dynamic programming solution) with memoization technique so for each vertex you visit every edge .
and every time you reached a vertex with a different (milage or steps) it's considered to be a different route , and the memoization techinique prevent us from visiting the same state twice , however the maximum total steps it can handle is 10000 , so instead of using 2d array its better if I have used unordered_map , solution complexity is (E*V)
