#include "allvarsandfct.h"
#include <iostream>
void display() {
    //Trigger aggressive mode for the bot
    if (bot_points == -2) {
        if (!aggressive) {
            std::cout<<std::endl;
            std::cout<<"               !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<std::endl;
            std::cout<<"               Be careful! The bot is now in AGGRESSIVE mode! It will make more accurate guesses."<<std::endl;
            std::cout<<R"(
                         _____                                                      _____
                        ( ___ )----------------------------------------------------( ___ )
                         |   |                                                      |   |
                         |   |      _                                 _             |   |
                         |   |     / \   __ _  __ _ _ __ ___  ___ ___(_)_   _____   |   |
                         |   |    / _ \ / _` |/ _` | '__/ _ \/ __/ __| \ \ / / _ \  |   |
                         |   |   / ___ \ (_| | (_| | | |  __/\__ \__ \ |\ V /  __/  |   |
                         |   |  /_/   \_\__, |\__, |_|  \___||___/___/_| \_/ \___|  |   |
                         |   |          |___/ |___/                                 |   |
                         |___|                                                      |___|
                        (_____)----------------------------------------------------(_____))";
            std::cout<<std::endl;
            aggressive = true;
        }
    }
    switch(player_points) {
    //Player has 0 points
    case 0:
        switch (bot_points) {
            //And the bot has 0 points
            case 0:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |    0   |                      |    0   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -1 points
            case -1:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |    0   |                      |   -1   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -2 points
            case -2:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |    0   |                      |   -2   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -3 points
            case -3:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |    0   |                      |   -3   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -4 points
            case -4:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |    0   |                      |   -4   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -5 points
            case -5:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |    0   |                      |   -5   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -6 points
            case -6:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   0    |                      |   -6   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
    }
        break;

    //Player has -1 points
    case -1:
        switch (bot_points) {
            //And the bot has 0 points
            case 0:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -1   |                      |    0   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -1 points
            case -1:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -1   |                      |   -1   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -2 points
            case -2:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -1   |                      |   -2   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -3 points
            case -3:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -1   |                      |   -3   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -4 points
            case -4:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -1   |                      |   -4   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -5 points
            case -5:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -1   |                      |   -5   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -6 points
            case -6:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -1   |                      |   -6   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
}
        break;
    //Player has -2 points
    case -2:
        switch (bot_points) {
            //And the bot has 0 points
            case 0:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -2   |                      |    0   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -1 points
            case -1:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -2   |                      |   -1   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -2 points
            case -2:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -2   |                      |   -2   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -3 points
            case -3:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -2   |                      |   -3   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -4 points
            case -4:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -2   |                      |   -4   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -5 points
            case -5:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -2   |                      |   -5   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -6 points
            case -6:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -2   |                      |   -6   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
        }
        break;
    //Player has -3 points
    case -3:
        switch (bot_points) {
            //And the bot has 0 points
            case 0:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -3   |                      |    0   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -1 points
            case -1:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -3   |                      |   -1   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -2 points
            case -2:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -3   |                      |   -2   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -3 points
            case -3:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -3   |                      |   -3   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -4 points
            case -4:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -3   |                      |   -4   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -5 points
            case -5:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -3   |                      |   -5   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -6 points
            case -6:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -3   |                      |   -6   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
        }
        break;
    //Player has -4 points
    case -4:
        switch (bot_points) {
            //And the bot has 0 points
            case 0:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -4   |                      |    0   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -1 points
            case -1:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -4   |                      |   -1   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -2 points
            case -2:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -4   |                      |   -2   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -3 points
            case -3:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -4   |                      |   -3   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -4 points
            case -4:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -4   |                      |   -4   |
                                    |________|                      |________|
                                                                                        )";
                break;
            //And the bot has -5 points
            case -5:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -4   |                      |   -5   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -6 points
            case -6:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -4   |                      |   -6   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
        }
        break;
    //Player has -5 points
    case -5:
        switch (bot_points) {
            //And the bot has 0 points
            case 0:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -5   |                      |    0   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -1 points
            case -1:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -5   |                      |   -1   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -2 points
            case -2:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -5   |                      |   -2   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -3 points
            case -3:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -5   |                      |   -3   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -4 points
            case -4:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -5   |                      |   -4   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -5 points
            case -5:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -5   |                      |   -5   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
        }
        break;
    //The very rare case of -6 points
    case -6:
        switch (bot_points) {
            //And the bot has 0 points
            case 0:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -6   |                      |    0   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -1 points
            case -1:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -6   |                      |   -1   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -2 points
            case -2:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -6   |                      |   -2   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -3 points
            case -3:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -6   |                      |   -3   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;
            //And the bot has -4 points
            case -4:
                std::cout<<R"(
                                    ----------                      ----------
                                    |        |                      |        |
                                    |   You  |                      |   Bot  |
                                    |        |                      |        |
                                    |   -6   |                      |   -4   |
                                    |________|                      |________|
                                                                                        )";
                std::cout<<std::endl;
                break;

        }
        break;


}
}
