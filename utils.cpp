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
    std::cout<<"THOMAS";
}

//just debug purposes, 6 rows 7 columns default
board::board(): board(6, 7) {};

board::board(const int& rowN, const int& columnN): \
topLeft(new node{' ', NULL, NORIGHT})
{
    node* c = topLeft;
    for (int i = 0; i < columnN; i++)
    {
        for (int z = 0; z < rowN; z++)
        {
            
            c->down = new node({' ', NULL, NORIGHT});
            c = c->down;
        }
        c->right = GORIGHT;
        
        
    }
    


}

void board::print(){
    node* c = topLeft;
    while(!c){
        std::cout << c->down << c->right<< N;
        c=c->down;
    }
};

board::~board(){


}