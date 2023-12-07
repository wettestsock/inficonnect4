    #include "header.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <array>

/*
OUTPUT :
cd coding/inficonnect4
clang++ main.cpp utils.cpp -o out/out
out/out
*/

void hello(){
    std::cout<<"THOMAS" << N;
}

//just debug purposes, 6 rows 7 columns default
board::board(): board(6, 7) {};


//NOTE: EACH BOXY BRACKET DEREFERENCES THE POINTER FOR YOU
board::board(const unsigned int& r, const unsigned int& c):
rowN(r), //inits the rows
columnN(c), //inits the columns
theBoard(new char*[rowN]) //memory for each row, columns will be also dynamically allocated
{
    for (int i = 0; i < rowN; i++) {
        theBoard[i] = new char[columnN]; //inits the columns
        for (int z = 0; z < columnN; z++)
        {
            theBoard[i][z] = 'h'; //dereferences the double pointer
        }
        
    }

}

void board::print(){
    
};

board::~board(){
    for (int i = 0; i < rowN; i++) 
        delete theBoard[i]; //deletes each column
    

}

void board::debug() {
    for (int i = 0; i < rowN; i++) {
        int z = 0;
        while(true){
            if (theBoard[i][z] == '\0') {
                std::cout << "TERMINATION CHARACTER REACHED" << N;
                break;
            }
            std::cout << theBoard[i][z] << N;
            z++;
        }
        
        delete theBoard[i]; //deletes each column
    }
}