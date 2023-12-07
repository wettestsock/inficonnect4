#pragma once
#define N '\n'
#define NORIGHT false
#define GORIGHT true

void hello();



class board{
    //has to be a double pointer 
    //because the row and column sizes are dynamically allocated
    char** theBoard;
    public:
    board();
    board(const int& rowN, const int& columnN);
    void print();
    ~board();
    
};