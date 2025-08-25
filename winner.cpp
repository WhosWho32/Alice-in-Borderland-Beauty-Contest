#include "allvarsandfct.h"
#include <iostream>
void winner() {
    static short int playerdif; //Calculate the distance from the final number for the player
    static short int botdif; //Calculate the distance from the final number for the bot
    //For the player
    if (player_num < final_num) {
        playerdif = final_num - player_num;
    }
    else if (player_num > final_num) {
        playerdif = player_num - final_num;
    }
    else {
        playerdif = 0;
    }
    //For the bot
    if (bot_num < final_num) {
        botdif = final_num - bot_num;
    }
    else if (bot_num > final_num) {
        botdif = bot_num - final_num;
    }
    else {
        botdif = 0;
    }
    //If player guessed the exact number
    if (playerdif == 0) {
            if (player_num != bot_num) {
                std::cout<<"[!] Since a contestant chose the exact number, the other one will lose 2 points."<<std::endl<<std::endl;
                bot_points--;
            }
    }
    //If bot guessed the exact number
    if (botdif == 0) {
            if (player_num != bot_num) {
                std::cout<<"[!] Since a contestant chose the exact number, the other one will lose 2 points."<<std::endl<<std::endl;
                player_points--;
            }
    }
    //Declare the winner
    if (playerdif > botdif) {
        if (player_num!=100) {
            player_points--;
            std::cout<<"                                               And the winner is..."<<std::endl;
            std::cout<<R"(
                                             .:''''''''''''''''''':.
                                            : :  ____        _    : :
                                            : : | __ )  ___ | |_  : :
                                            : : |  _ \ / _ \| __| : :
                                            : : | |_) | (_) | |_  : :
                                            : : |____/ \___/ \__| : :
                                             ':...................:')";
            std::cout<<std::endl;
            display();
            if (player_points > -5) {
               choice();
            }
            else if (player_points == -5) {
                std::cout<<"[X] Since you reached -5 points, you are eliminated. The bot wins."<<std::endl;
            }
            else {
                std::cout<<"[X] Since you're overboard, you'll be eliminated. The bot wins."<<std::endl;
            }

        }
        else {
                if (bot_num == 0) {
                    std::cout<<"                                    Owing to special rule number 3, the winner is..."<<std::endl;
                    bot_points--;
                    std::cout<<R"(
                                             .:''''''''''''''''''':.
                                            : : __   __           : :
                                            : : \ \ / /__  _   _  : :
                                            : :  \ V / _ \| | | | : :
                                            : :   | | (_) | |_| | : :
                                            : :   |_|\___/ \__,_| : :
                                             ':...................:')";
                    std::cout<<std::endl;
                    display();
                    if (bot_points > -5) {
                        choice();
                    }
                    else if (bot_points == -5){
                        std::cout<<"[!] It looks like the bot has reached -5 points, therefore it will be eliminated."<<std::endl;
                        std::cout<<"As a result, you are the winner of this game!"<<std::endl;
                    }
                    else {
                        std::cout<<"[!] It looks like the bot went overboard, therefore it will be eliminated."<<std::endl;
                        std::cout<<"As a result, you are the winner of this game!"<<std::endl;
                    }
                }
                else {
                    player_points--;
                    std::cout<<"                                               And the winner is..."<<std::endl;
                    std::cout<<R"(
                                             .:''''''''''''''''''':.
                                            : :  ____        _    : :
                                            : : | __ )  ___ | |_  : :
                                            : : |  _ \ / _ \| __| : :
                                            : : | |_) | (_) | |_  : :
                                            : : |____/ \___/ \__| : :
                                             ':...................:')";
                    std::cout<<std::endl;
                    display();
                    if (player_points > -5) {
                       choice();
                    }
                    else if (player_points == -5) {
                        std::cout<<"[X] Since you reached -5 points, you are eliminated. The bot wins."<<std::endl;
                    }
                    else {
                        std::cout<<"[X] Since you're overboard, you'll be eliminated. The bot wins."<<std::endl;
                    }
                        }

        }

    }
    else if (playerdif < botdif) {
        if (bot_num !=100) {
            bot_points--;
            std::cout<<"                                               And the winner is..."<<std::endl;
            std::cout<<R"(
                                             .:''''''''''''''''''':.
                                            : : __   __           : :
                                            : : \ \ / /__  _   _  : :
                                            : :  \ V / _ \| | | | : :
                                            : :   | | (_) | |_| | : :
                                            : :   |_|\___/ \__,_| : :
                                             ':...................:')";
            std::cout<<std::endl;
            display();
            if (bot_points > -5) {
                choice();
            }
            else if (bot_points == -5){
                std::cout<<"[!] It looks like the bot has reached -5 points, therefore it will be eliminated."<<std::endl;
                std::cout<<"As a result, you are the winner of this game!"<<std::endl;
            }
            else {
                std::cout<<"[!] It looks like the bot went overboard, therefore it will be eliminated."<<std::endl;
                std::cout<<"As a result, you are the winner of this game!"<<std::endl;
            }
        }
        else {
            std::cout<<"                                    Owing to special rule number 3, the winner is..."<<std::endl;
            player_points--;
            std::cout<<R"(
                                             .:''''''''''''''''''':.
                                            : :  ____        _    : :
                                            : : | __ )  ___ | |_  : :
                                            : : |  _ \ / _ \| __| : :
                                            : : | |_) | (_) | |_  : :
                                            : : |____/ \___/ \__| : :
                                             ':...................:')";
            std::cout<<std::endl;
            display();
            if (player_points > -5) {
                choice();
            }
            else if (player_points == -5){
                std::cout<<"[X] Since you reached -5 points, you are eliminated. The bot wins."<<std::endl;
            }
            else {
                std::cout<<"[X] Since you're overboard, you'll be eliminated. The bot wins."<<std::endl;
            }

        }

    }
    else {
        bot_points--;
        player_points--;
        std::cout<<"[!] Since the distance from the number is the same for both contestants, they each will lose one point."<<std::endl;
        display();
        if (player_points != -5) {
            //Case P: !=-5 B: !=-5
            if (bot_points != -5) {
                choice();
            }
            //Case P: !=-5 B: -5
            else {
                std::cout<<"[!] It looks like the bot has reached -5 points, therefore it will be eliminated."<<std::endl;
                std::cout<<"As a result, you are the winner of this game!"<<std::endl;
            }
        }
        else {
            //Case P:-5 B:!=-5
            if (bot_points != -5) {
               std::cout<<"[X] Since you reached -5 points, you are eliminated. The bot wins."<<std::endl;
            }
            //Case P:-5 B:-5
            else {
                std::cout<<"[XX] It looks like both contestants lost the game. What a shame."<<std::endl;
            }
        }
    }
}
