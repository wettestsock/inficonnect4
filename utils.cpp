#include "header.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <cmath>
#include <limits>

/*
OUTPUT :
cd coding/inficonnect4
clang++ main.cpp utils.cpp -o out/out
2*/

void hello(){
    std::cout<<"THOMAS" << N;
}

//just debug purposes, 6 rows 12 columns, players a b c default
board::board(): board(6, 12, {'a', 'b', 'c'}) {};


//NOTE: EACH BOXY BRACKET DEREFERENCES THE POINTER FOR YOU
board::board(const unsigned int& r, 
            const unsigned int& c, 
            const std::vector<char>& letters): 

    // member initializer list
    rowN(r), //inits the rows
    columnN(c), //inits the columns
    line("         "), //for offsetting "COLUMNS: " text
    line_flat("         "), //for offsetting "COLUMNS: " text
    player_letters(letters), 
    the_board(new char*[rowN]) //memory for each row, columns will be also dynamically allocated

    //actual constructor
{
    //offset = (int)log10(x)

    //lines, 1 init operation to set them
    for (int i = 0; i < columnN; i++)
    {
        line+='|';
        line_flat+='-';
        for (int z = 0; z < (int)log10(i+1)+1; z++)
        {
            line+='-';
            line_flat+='-';
        }
    }
    line+='|';
    line_flat+='|';
    line_flat[9]='|';

    
    for (int i = 0; i < rowN; i++) {
        the_board[i] = new char[columnN]; //inits the column

        for (int z = 0; z < columnN; z++)
            //assigns the characters in each column as blank
            the_board[i][z] = ' '; //dereferences the double pointer
        
    }

    std::cout << *this;

}

board::~board(){
    //deallocates the board
    for (int i = 0; i < rowN; i++) 
        delete the_board[i]; //deletes each column

    //deletes the actual board
    delete[] the_board;

}

void board::debug() {
    for (int i = 0; i < rowN; i++) {
        int z = 0;
        while(true){
            if (the_board[i][z] == '\0') {
                std::cout << "TERMINATION CHARACTER REACHED" << N;
                break;
            }
            std::cout << the_board[i][z] << N;
            z++;
        }
        
        delete the_board[i]; //deletes each column
    }
    std::cout <<*this;
}

bool board::move_win(const int& col_pos, const char& player_id){
    
    // if hits 3 (connect 4) then wins
    
    //iterates till the last free block
    int row_pos = -1;
    for(int i=0; i<rowN; ++i) {
        if (the_board[i][col_pos] == ' ')
        {
            row_pos++;
        } else break;
        
    }
    //assigns the disc to the location
    the_board[row_pos][col_pos] = player_id;

    //combo counter
    int combo_ctr = 0; 


    //HORIZONTAL CHECK
    //makes sure the values dont overflow

    for(int i=std::max(0, col_pos-3); i< std::min(columnN, col_pos+4); ++i) {
        
            combo_ctr = (the_board[row_pos][i] == player_id) ? combo_ctr +1 : 0;
            

            //debug
            if (combo_ctr >= 4) {
                
                //iterates backwards on the combo counter
                //replaces the board positions with -
                while(combo_ctr-1) {
                    the_board[row_pos][i-combo_ctr] = '-';
                    combo_ctr--;
                }

                return true;
            }
    }  
    combo_ctr = 0; //resets the counter

    //VERTICAL CHECK
    //makes sure values dont overflow
    for(int z=row_pos; z< std::min(rowN, row_pos+4); ++z) {
            combo_ctr = (the_board[z][col_pos] == player_id) ? combo_ctr+1 : 0;

            //debug
            if(combo_ctr>= 4) {
                
                //iterates combo counter back
                while(combo_ctr-1){
                    the_board[z-combo_ctr][col_pos] = '|';
                    combo_ctr--;
                }
                return true;
            }

    }

    combo_ctr = 0;

    int diag_offset = 0;
    //DIAGONAL CHECK TO THE RIGHT

    //for every row
    for(int z=std::max(0, row_pos-3); z< std::min(rowN, row_pos+4); ++z) {
        
        //for every column
        //std::cout << z  << '\t' << diag_offset + col_pos- ( (row_pos < 3) ? row_pos : 3 ) << N;

        //current column (calculated based on the row)
        int curr_col = diag_offset + col_pos- ( (row_pos < 3) ? row_pos : 3 );

        //nasty ass if statement
        combo_ctr = (the_board[z][curr_col] == player_id) ? combo_ctr+1 : 0;
            

        if(combo_ctr>= 4) {

            while(combo_ctr-1){
                the_board[z-combo_ctr][curr_col-combo_ctr] = '\\';
                combo_ctr--;
            }
            return true;
        }
        diag_offset++;
    }

    combo_ctr=0;
    diag_offset=0;


    //DIAGONAL CHECK TO THE LEFT
    //checks to the errm LEFT
    for(int z=std::max(0, row_pos-3); z< std::min(rowN, row_pos+4); ++z) {

        //for every column
        //std::cout << z  << '\t' << diag_offset + col_pos- ( (row_pos < 3) ? row_pos : 3 ) << N;

        //current column (calculated based on the row)
        int curr_col = diag_offset + col_pos+ ( (row_pos < 3) ? row_pos : 3 );

        //nasty ass if statement
        combo_ctr = (the_board[z][curr_col] == player_id) ? combo_ctr+1 : 0;
            

        if(combo_ctr>= 4) {
            for(int a=0; a<4; ++a){
                    win_index[a][0] = z-a;  //win row positions (backwards)
                    win_index[a][1] = curr_col -a; //col row positions
            }      

            while(combo_ctr-1){
                the_board[z-combo_ctr][curr_col-combo_ctr] = '/';
                combo_ctr--;
            }
            return true;
        }
        diag_offset--;
    }
    //default, no winner (duh)
    //space

    return false;
}





std::ostream& operator<<(std::ostream& out, const board& input_brd){
    


    //prints the column numbers
    out << input_brd.line_flat << N << "COLUMNS: ";
    for (int i = 0; i < input_brd.columnN; i++)
    {
        out << '|' << i+1;
        
    }
    out << '|' << N;


    //prints the actual boxes
    for (int i = 0; i < input_brd.rowN; i++)
    {
        out << input_brd.line << N << "         "; //for offsetting "COLUMNS: " text
        for (int z = 0; z < input_brd.columnN; z++)
        {
            //prints the element box 
            out << '|' << input_brd.the_board[i][z];

            //prints the offset (so printing of 10+ columns doesnt break)
            for (int a = 0; a < (int)log10(z+1); a++) out << ' ';
        }
        //closes the printing row out
        out << '|' << N;
    }
    out<< input_brd.line_flat << N;
    return out;
    

};

//clears the cin
void cin_clear(std::istream& cin_out) {
    cin_out.clear();
    cin_out.ignore(std::numeric_limits<std::streamsize>::max(), N);
};


//TODO: delete later
bool z_check(const int& input){
    if(!input) return true;
    return false;

};
bool z_check(const char& input){
    if(toupper(input) == 'Z') return true;
    return false;
};
bool z_check(const std::string& input){
    if(toupper(input[0]) == 'Z') return true;
    return false;
};