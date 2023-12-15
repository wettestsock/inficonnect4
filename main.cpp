#include "header.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <limits> //numeric limits


int main(){
std::cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"<<N;
std::cout << "  █ █▄ █ █▀▀ █ █▄ █ █ ▀█▀ █▀▀   █▀▀ █▀█ █▄ █ █▄ █ █▀▀ █▀▀ ▀█▀   █ █"<<N;
std::cout << "  █ █ ▀█ █▀  █ █ ▀█ █  █  ██▄   █▄▄ █▄█ █ ▀█ █ ▀█ ██▄ █▄▄  █    ▀▀█"<<N;
std::cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<N;
std::cout << "█\n█ Connect 4 but you decide how to play it." << N << "█ I decided to make a more advanced, OOP, Connect 4." << N;
std::cout << "█ Planning on training a neural network that"<< N << "█ can fight itself in 100+ columns/rows." << N << "█ "<< N;
std::cout << "█ Highly scalable and foolproof."<< N << "█ You won't crash this thing." << N << "█" << N;
    int player_num; //amount of players
    int columns, rows;  //rows and columns input
    std::vector<char> char_id;   //all player char ids
    std::vector<std::string> name_id; //all name ids (ordered to char ids)



    std::cout << "█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" << N;
    while (true)
    {
        std::cout << "█ Number of players: ";
        std::cin>> player_num;


        //conditions, fail safe
        if(!std::cin){
            std::cout<< "█ Invalid number of players." << N << "█" << N;
            cin_clear(std::cin);
            continue;
        } else if (player_num <2){
            std::cout<< "█ At least 2 players are required." << N << "█" << N;
            continue;
        }

        //default
        break;


    }


    std::cout << "█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" << N;
    while (true)
    {
        std::cout << "█ Row size: ";
        std::cin>> rows;

        if(!std::cin){
            std::cout<< "█ Invalid row size." << N << "█" << N;
            cin_clear(std::cin);
            continue;
        } else if (rows<4){
            std::cout<< "█ At least 4 rows are required." << N << "█" << N;
            continue;
        }

        //default
        break;
    }


    std::cout << "█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" << N;
    while (true)
    {
        std::cout << "█ Column size: ";
        std::cin>> columns;

        if(!std::cin){
            std::cout<< "█ Invalid column size." << N << "█" << N;
            cin_clear(std::cin);
            continue;
        } else if (columns<4){
            std::cout<< "█ At least 4 columns are required." << N << "█" << N;
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
        std::cout << "█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" << N;
        std::cout<< "█ PLAYER " << i+1 << N;

        while (true)
        {
            std::cout<< "█ Name: ";
            std::cin>> temp;

            //if name's already taken
            if(in_list(temp, name_id)){
                std::cout<<"█ Duplicate name. Try again." << N;
                continue;
            }
            //pushes the name and its associated character
            name_id.push_back(temp);
            //default just exits the loop
            break;
        }
        if(z_check(temp)) return 0; // DEBUG DELETE LATER



        while (true)
        {
            
            std::cout<< "█\t" << "(ex: "<< (char)toupper(temp[0]) << ", H, J, etc)"<< N << "█ Character identifier: ";
            std::cin>> temp;

            if (in_list((char)toupper(temp[0]), char_id))
            {
                std::cout<<"█ Duplicate character. Try again." << N;
                continue;
            }
            //default
            char_id.push_back(toupper(temp[0]));
            break;
        }
        std::cout << "█" << N << "█ NAME: " << name_id[i] << "  ID: " << char_id[i] << N;

        if(z_check(temp)) return 0; // DEBUG DELETE LATER

    }

    std::cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" << N;

    //INITS THE BOARD
    board a(rows, columns, char_id);
    

    std::cout << a;


    
    //MOVING !!!
    for(int i=0; i<4; ++i) {

        //repeats for each player
        for (int i = 0; i < char_id.size(); i++)
        {   
            int move;
            std::cout << "█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" << N;
            while (true)
            {
                std::cout<<"█ " << name_id[i] << " (identifier " << char_id[i] << "), move: ";
                std::cin>> move;

                if(!std::cin)
                {
                    std::cout<< "█ Invalid move. Try again." << N << "█" << N;
                    cin_clear(std::cin);
                    continue;
                }else if (move ==0) {
                    return 0;
                
                } else if (move < 1 || move > columns) {
                    std::cout << "█ Out of range. Try again." << N << "█" << N;
                    continue;
                }
                std::cout << "█" << N;
                std::cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" << N;
                break;
            }

                a.move_win(move-1, char_id[i]);

                std::cout<<a;

        }
        
    }
    


   
    std::cout << a;

}