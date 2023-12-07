    #include "header.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>

/*
OUTPUT :
cd coding/linkedconnect4
clang++ main.cpp utils.cpp -o out/out
out/out
*/

void hello(){
    std::cout<<"THOMAS" << N;
}

//just debug purposes, 6 rows 7 columns default
board::board(): board(6, 7) {};

board::board(const int& rowN, const int& columnN): \
topLeft(new node{' ', NULL, NORIGHT})
{
    


}

void board::print(){
    
};

board::~board(){


}