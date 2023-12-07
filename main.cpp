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

    while (true)
    {
        std::cout << "Enter number of players:" << N;
        std::cin>> player_num;

        if(!std::cin || player_num <2)
        {
            std::cout<< "Invalid number of players.\nAt least 2 players are required.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), N);
            continue;
        }
        break;
    }
    
    

    board a;
    std::cout << a;

}