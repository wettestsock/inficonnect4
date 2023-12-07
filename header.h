#pragma once
#define N '\n'
#define NORIGHT false
#define GORIGHT true

void hello();



class board{
    //has to be a double pointer 
    //because the row and column sizes are dynamically allocated
    unsigned int rowN, columnN;
    char** theBoard;
    public:
    board();
    board(const unsigned int& r, const unsigned int& c);
    void print();
    void debug();
    ~board();
    
};