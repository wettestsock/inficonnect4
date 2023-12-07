#include "header.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <cmath>

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

    // member initializer list
    rowN(r), //inits the rows
    columnN(c), //inits the columns
    the_board(new char*[rowN]) //memory for each row, columns will be also dynamically allocated

    //actual constructor
{
    for (int i = 0; i < rowN; i++) {
        the_board[i] = new char[columnN]; //inits the column

        for (int z = 0; z < columnN; z++)
            //assigns the characters in each column as blank
            the_board[i][z] = ' '; //dereferences the double pointer
        
    }

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
}




std::ostream& operator<<(std::ostream& out, const board& input_brd){
    //offset = (int)log10(x)

    
    //inits the line 
    std::string line =  "         "; //for offsetting "COLUMNS: " text
    for (int i = 0; i < input_brd.columnN; i++)
    {
        line+='|';
        for (int z = 0; z < (int)log10(i+1)+1; z++)
        {
            line.append("-");
        }
    }
    line+='|';


    //prints the column numbers
    out << line << N << "COLUMNS: ";
    for (int i = 0; i < input_brd.columnN; i++)
    {
        out << '|' << i+1;
        
    }
    out << '|' << N << line << N;

    //prints the actual boxes
    for (int i = 0; i < input_brd.rowN; i++)
    {
        out << "         "; //for offsetting "COLUMNS: " text
        for (int z = 0; z < input_brd.columnN; z++)
        {
            //prints the element box 
            out << '|' << input_brd.the_board[i][z];

            //prints the offset (so printing of 10+ columns doesnt break)
            for (int a = 0; a < (int)log10(z+1); a++)
            {
                out << ' ';
            }
            
        }
        //closes the printing row out
        out << '|' << N << line << N;
    }
    return out;
    

};