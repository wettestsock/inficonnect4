#include "header.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <limits> //numeric limits


int main(){
std::cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"<<N;
std::cout << "█ █▄ █ █▀▀ █ █▄ █ █ ▀█▀ █▀▀   █▀▀ █▀█ █▄ █ █▄ █ █▀▀ █▀▀ ▀█▀   █ █"<<N;
std::cout << "█ █ ▀█ █▀  █ █ ▀█ █  █  ██▄   █▄▄ █▄█ █ ▀█ █ ▀█ ██▄ █▄▄  █    ▀▀█"<<N;
std::cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<N<<N;

    int player_num;
    std::vector<char> char_id;
    std::vector<std::string> name_id;

    while (true)
    {
        std::cout << "Number of players:   ";
        std::cin>> player_num;

        if(!std::cin || player_num <2)
        {
            std::cout<< "Invalid number of players."<<N<<"At least 2 players are required." << N;
            cin_clear(std::cin);
            continue;
        }
        break;
    }
    for (int i = 0; i < player_num; i++)
    {
        std::string temp;
        char temp_c;

        std::cout<< N << "PLAYER " << i+1 << N;

        while (true)
        {
            std::cout<< " Name: ";
            std::cin>> temp;

            //if name's already taken
            if(in_list(temp, name_id)){
                std::cout<<"Duplicate string. Try again." << N;
                continue;
            }

            //default just exits the loop
            break;
        }


        while (true)
        {
            
            std::cout<< T << "(ex: "<< (char)toupper(temp[0]) << ", H, J, etc)"<< N << " Character identifier: ";
            std::cin>> temp_c;

            if (in_list(toupper(temp_c), char_id))
            {
                std::cout<<"Duplicate character. Try again." << N;
                continue;
            }
            
            //default
            break;
        }

        //pushes the name and its associated character
        name_id.push_back(temp);
        char_id.push_back(toupper(temp_c));
        
    }
    

    
    

    board a;
    std::cout << a;

}