//Beauty Contest game inspired from Alice in Borderland, but it's 1v1 against a bot
//Program by: WhosWho
//Last edited: August 25th 2025
#include <iostream>
#include "allvarsandfct.h"
#include <cstdlib>
#include <cmath>
//Initially both the player and the bot have 0 points
short int player_points = 0;
short int bot_points = 0;
short int player_num;
short int bot_num;
float final_num;
static std::string c;
bool aggressive = false;

int finalNum() {
    final_num = (player_num + bot_num)/2 * 0.8;
    std::cout<<"[!] After multiplying the average of the numbers chosen by 0.8, the final number is... "<<final_num<<std::endl<<std::endl;
    final_num = round(final_num);
    winner(); //Declare the winner of the round
}

void choice() {
    std::cout<<std::endl;
    std::cout<<"[?] What would you like to do?"<<std::endl;
    std::cout<<"- Read the rules [r]"<<std::endl;
    std::cout<<"- Act [a]"<<std::endl;
    std::cout<<"> Your choice: ";
    std::cin>>c;
    //Make the user input only a single character instead of multiple
    while(!(c.size() == 1)) {
        std::cout<<"[!] Unknown command. Make sure you typed the initial for one of the commands provided."<<std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout<<"> Your choice: ";
        std::cin>>c;

    }
    if (c == "r") {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        rules();
    } else if (c == "a") {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout<<"You chose to act. You'll have to pick a number between 0 and 100 now."<<std::endl;
        std::cout<<"Your number of choice: ";
        //Validate user input
        while(!(std::cin>>player_num)) {
           std::cout<<"Not a number. Try again: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');

        }
        while (player_num < 0 || player_num > 100) {
            std::cout<<"The number of choice is outside of the interval mentioned. Try again: ";
            while(!(std::cin>>player_num)) {
                std::cout<<"Not a number. Try again: ";
                std::cin.clear();
                std::cin.ignore(10000, '\n');

        }
        }
        std::cout<<"- You chose: "<<player_num<<std::endl;
        if (bot_points != -5) {
        botdecide();
        }
    } else {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout<<"[!] Unknown command. Make sure you typed the initial for one of the commands provided."<<std::endl;
        choice();
    }

}

class Game {
public:
    //Title of the game
    std::string name = R"(
                         ____                   _            ____            _            _
                        | __ )  ___  __ _ _   _| |_ _   _   / ___|___  _ __ | |_ ___  ___| |_
                        |  _ \ / _ \/ _` | | | | __| | | | | |   / _ \| '_ \| __/ _ \/ __| __|
                        | |_) |  __/ (_| | |_| | |_| |_| | | |__| (_) | | | | ||  __/\__ \ |_
                        |____/ \___|\__,_|\__,_|\__|\__, |  \____\___/|_| |_|\__\___||___/\__|
                                                    |___/                                     )";

    Game() {
        std::cout<<name<<std::endl;
        std::cout<<"// The terminal version of the game Beauty Contest from the show Alice in Borderland, except it's just 2 players."<<std::endl;
        std::cout<<"// Program made by: WhosWho"<<std::endl;
        std::cout<<"// Github: https://github.com/WhosWho32"<<std::endl;
        display(); //Call the function to display the bot and player points on start (0 0)
        choice(); //Call the function to prompt the player with a set of choices
    }
};
int main() {
    srand(time(NULL));
    Game start;
}
