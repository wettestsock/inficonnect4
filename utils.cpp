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

board::board(const int& rowN, const int& columnN): topLeft(new node){
    node* c = topLeft;
    for(int i=0; i<rowN; ++i){
        

        for (int z = 0; z < columnN; ++z)
        {
            //SNAKE ITERATION
            //if rowN is even then moves right, 
            //if odd moves left
            c->disk == ' ';
            c = (rowN%2) ? c->right : c->left;
        }
        //moves 1 down
        c = c->down;
    }

}

void board::print(){
    node* c = topLeft;
    while(c->left)

}

board::~board(){


}