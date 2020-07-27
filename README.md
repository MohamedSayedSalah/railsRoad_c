# railsRoad_c

## INSTRUCTIONS

this instruction only work for (mac/linux) users . for widnows you have to use Mingw 

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
- to run the main program type `./main/railsRoad_run`
- to run tests type `./tests/railsRoad_tests`

## SOLUTIONS

the solutoin to this problem is done using both ` adjacency Matrix ` and `adjacency List` 
