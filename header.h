#pragma once
#define N '\n'
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#define NORIGHT false
#define GORIGHT true

void hello();



class board{


    
    public:
    //global variables


    //offset is for printing purposes
    //change offset only when resizing the board!!
    int rowN, columnN;
    std::string line, line_flat;
    std::vector<char> player_letters; 
    // board has to be a double pointer 
    //because the row and column sizes are dynamically allocated
    char** the_board;

    //constructors
    board();

    //constructor
    board(const unsigned int& r, 
        const unsigned int& c, 
        const std::vector<char>& letters);
    ~board();

    //functions
    bool move_win(const int& col_pos, const char& player_id);
    void debug();  
};

//prints the table
std::ostream& operator<<(std::ostream& out, const board& input_brd);


//clears the inputted instream
void cin_clear(std::istream& cin_out);

//debug
//TODO: DELETE WHEN DONE
bool z_check(const int& input);
bool z_check(const char& input);
bool z_check(const std::string& input);

//templates have to be implemented in header file
template<typename X, typename A>
bool in_list(const X& element, const A& list) {
    for(X list_element: list) 
    {
        if (element == list_element)
        {
            return true;
        }
    }
    return false;

};

std::string big_text(const std::string& input);