#include "header.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <limits> //numeric limits


int main(){
//std::cout << "\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580"<<N;
//std::cout << "  \u2588 \u2588\u2584 \u2588 \u2588\u2580\u2580 \u2588 \u2588\u2584 \u2588 \u2588 \u2580\u2588\u2580 \u2588\u2580\u2580   \u2588\u2580\u2580 \u2588\u2580\u2588 \u2588\u2584 \u2588 \u2588\u2584 \u2588 \u2588\u2580\u2580 \u2588\u2580\u2580 \u2580\u2588\u2580   \u2588 \u2588"<<N;
//std::cout << "  \u2588 \u2588 \u2580\u2588 \u2588\u2580  \u2588 \u2588 \u2580\u2588 \u2588  \u2588  \u2588\u2588\u2584   \u2588\u2584\u2584 \u2588\u2584\u2588 \u2588 \u2580\u2588 \u2588 \u2580\u2588 \u2588\u2588\u2584 \u2588\u2584\u2584  \u2588    \u2580\u2580\u2588"<<N;
//std::cout << "\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584\u2584"<<N;

/*
█ - \u2588
▀ - \u2580
▄ - \u2584
*/

std::cout << N << N << big_text(" infinite connect 4 ") ;

std::cout << "\u2588\n\u2588 Connect 4 but you decide how to play it." << N << "\u2588 I decided to make a more advanced, OOP, Connect 4." << N;
std::cout << "\u2588 Planning on training a neural network that"<< N << "\u2588 can fight itself in 100+ columns/rows." << N << "\u2588 "<< N;
std::cout << "\u2588 Highly scalable and foolproof."<< N << "\u2588 You won't crash this thing." << N << "\u2588" << N;
    int player_num; //amount of players
    int columns, rows;  //rows and columns input
    std::vector<char> char_id;   //all player char ids
    std::vector<std::string> name_id; //all name ids (ordered to char ids)



    std::cout << "\u2588\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580" << N;
    while (true)
    {
        std::cout << "\u2588 Number of players: ";
        std::cin>> player_num;


        //conditions, fail safe
        if(!std::cin){
            std::cout<< "\u2588 Invalid number of players." << N << "\u2588" << N;
            cin_clear(std::cin);
            continue;
        } else if(player_num==0){
            std::cout << big_text("that's it folks!") << N << N;
            return 0;
        
        } else if (player_num <2){
            std::cout<< "\u2588 At least 2 players are required." << N << "\u2588" << N;
            continue;
        }

        //default
        break;


    }


    std::cout << "\u2588\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580" << N;
    while (true)
    {
        std::cout << "\u2588 Row size: ";
        std::cin>> rows;

        if(!std::cin){
            std::cout<< "\u2588 Invalid row size." << N << "\u2588" << N;
            cin_clear(std::cin);
            continue;
        } else if (rows<4){
            std::cout<< "\u2588 At least 4 rows are required." << N << "\u2588" << N;
            continue;
        }

        //default
        break;
    }


    std::cout << "\u2588\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580" << N;
    while (true)
    {
        std::cout << "\u2588 Column size: ";
        std::cin>> columns;

        if(!std::cin){
            std::cout<< "\u2588 Invalid column size." << N << "\u2588" << N;
            cin_clear(std::cin);
            continue;
        } else if (columns<4){
            std::cout<< "\u2588 At least 4 columns are required." << N << "\u2588" << N;
            continue;
        }

        //default
        break;
    }


    
    for (int i = 0; i < player_num; i++)
    {
        //temp for inputs 
        //will be pushed back later
        std::string temp;

        //prints the player
        std::cout << "\u2588\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580" << N;
        std::cout<< "\u2588 PLAYER " << i+1 << N;

        while (true)
        {
            std::cout<< "\u2588 Name: ";
            std::cin>> temp;

            //if name's already taken
            if(in_list(temp, name_id)){
                std::cout<<"\u2588 Duplicate name. Try again." << N;
                continue;
            }
            //pushes the name and its associated character
            name_id.push_back(temp);
            //default just exits the loop
            break;
        }
        //if(z_check(temp)) return 0; // DEBUG DELETE LATER



        while (true)
        {
            
            std::cout<< "\u2588\t" << "(ex: "<< (char)toupper(temp[0]) << ", H, J, etc)"<< N << "\u2588 Character identifier: ";
            std::cin>> temp;

            if (in_list((char)toupper(temp[0]), char_id))
            {
                std::cout<<"\u2588 Duplicate character. Try again." << N;
                continue;
            }
            //default
            char_id.push_back(toupper(temp[0]));
            break;
        }
        std::cout << "\u2588" << N << "\u2588 NAME: " << name_id[i] << "  ID: " << char_id[i] << N;

        //if(z_check(temp)) return 0; // DEBUG DELETE LATER

    }

    std::cout << "\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580" << N;

    //INITS THE BOARD
    board a(rows, columns, char_id);
    
    //MOVING !!!
    while(true) {

        //repeats for each player
        for (int i = 0; i < char_id.size(); i++)
        {   
            int move;
            std::cout << "\u2588\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580" << N;
            while (true)
            {
                std::cout<<"\u2588 " << name_id[i] << " (identifier " << char_id[i] << "), move: ";
                std::cin>> move;

                //if invalid
                if(!std::cin)  
                {
                    std::cout<< "\u2588 Invalid move. Try again." << N << "\u2588" << N;
                    cin_clear(std::cin);
                    continue;
                
                // DEBUG, REMOVE LATER
                //}else if (move ==0) {
                //    return 0;

                //if input out of range
                } else if (move < 1 || move > columns) {  
                    std::cout << "\u2588 Out of range. Try again." << N << "\u2588" << N;
                    continue;
                    
                // if a column is full (top one is taken)
                } else if (a.the_board[0][move-1] != ' '){  
                    std::cout << "\u2588 Column is full. Try another one." << N << "\u2588" << N;
                    continue;
                }
                std::cout << "\u2588" << N;
                std::cout << "\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580\u2580" << N;
                break;
            }

            //if doesnt win, returns ' '
            //if does, returns the direction in which its won   
            //if does, populated the win index BACKWARDS (from win till starting indexes)              
            bool win = a.move_win(move-1, char_id[i]);
            //prints the board
            std::cout<< a;
            
            //if no win then continue
            if(!win) continue;
            
            //if name's too big
            std::cout << ((name_id[i].length() < 10) ? big_text(name_id[i]) : big_text(name_id[i].substr(0,10)+"..."));
            std::cout<< big_text("... you won!!!") << big_text("play again?")<< N << "[y or n]: ";
            std::string temp;
            std::cin >> temp;

            //try again
            if(tolower(temp[0])=='y') main();        
            
            return 0;
            

        }
        
    }

}