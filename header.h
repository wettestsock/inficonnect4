#pragma once
#define N '\n'
#define NORIGHT false
#define GORIGHT true

void hello();



class board{


    public:
    //global variables
    //has to be a double pointer 
    //because the row and column sizes are dynamically allocated
    unsigned int rowN, columnN;
    char** the_board;

    //constructors
    board();
    board(const unsigned int& r, const unsigned int& c);
    ~board();

    //functions
    void debug();

    
};
int digit_num(int number);

std::ostream& operator<<(std::ostream& out, const board& input_brd);