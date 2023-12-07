#pragma once
#define N '\n'
#define NORIGHT false
#define GORIGHT true

void hello();



class board{


    public:
    //global variables


    //offset is for printing purposes
    //change offset only when resizing the board!!
    int rowN, columnN, offset;

    // board has to be a double pointer 
    //because the row and column sizes are dynamically allocated
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