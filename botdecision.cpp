#include "allvarsandfct.h"
#include <iostream>
static short int decision; //The bot has a 50% chance to choose 100 and win or 50% chance to choose any other number between 1 and 10
void botdecide() {
    //If the bot has 0 points, -1 or -2, he will have a 50% chance of winning
    switch(bot_points) {
        case 0:
            if (player_num >= 1 && player_num <=10) {
                bot_num = rand()%21; //Bot chooses a number between 0 and 20
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num == 0) {
                decision = rand()%2; //The bot has a 50% chance to choose 100 and win or 50% chance to choose any other number between 1 and 10
                if (decision == 0) {
                    bot_num = 100;
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum();
                }
                else {
                    bot_num = rand()%21; //Bot chooses a number between 0 and 20
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum(); //Call the function to calculate the final number
                }
            }
            else if (player_num > 10 && player_num <= 20) {
                bot_num = 10+rand()%21; //Bot chooses a number between 10 and 30
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 20 && player_num <=30) {
                bot_num = 20+rand()%21; //Bot chooses a number between 20 and 40
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 30 && player_num <=40) {
                bot_num = 30+rand()%21; //Bot chooses a number between 30 and 50
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 40 && player_num <=50) {
                bot_num = 40+rand()%21; //Bot chooses a number between 40 and 60
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 50 && player_num <= 60) {
                bot_num = 50+rand()%21; //Bot chooses a number between 50 and 70
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 60 && player_num <= 70) {
                bot_num = 60+rand()%21; //Bot chooses a number between 60 and 80
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 70 && player_num <= 80) {
                bot_num = 70+rand()%21; //Bot chooses a number between 70 and 90
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 80 && player_num <=90) {
                bot_num = 80+rand()%21; //Bot chooses a number between 80 and 100
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 90 && player_num < 100) {
                bot_num = 90+rand()%11; //Bot chooses a number between 90 and 100
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num == 100) {
                decision = rand()%2;
                if (decision == 0) {
                    bot_num = 0;
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum();
                }
                else {
                    bot_num = 1+rand()%99; //Bot chooses a number between 1 and 99, the bot will win whichever number it decides to pick
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum(); //Call the function to calculate the final number
            }
            }
             break;
        case -1:
            if (player_num >= 1 && player_num <=10) {
                bot_num = rand()%21; //Bot chooses a number between 0 and 20
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num == 0) {
                decision = rand()%2; //The bot has a 50% chance to choose 100 and win or 50% chance to choose any other number between 1 and 10
                if (decision == 0) {
                    bot_num = 100;
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum();
                }
                else {
                    bot_num = rand()%21; //Bot chooses a number between 0 and 20
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum(); //Call the function to calculate the final number
                }
            }
            else if (player_num > 10 && player_num <= 20) {
                bot_num = 10+rand()%21; //Bot chooses a number between 10 and 30
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 20 && player_num <=30) {
                bot_num = 20+rand()%21; //Bot chooses a number between 20 and 40
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 30 && player_num <=40) {
                bot_num = 30+rand()%21; //Bot chooses a number between 30 and 50
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 40 && player_num <=50) {
                bot_num = 40+rand()%21; //Bot chooses a number between 40 and 60
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 50 && player_num <= 60) {
                bot_num = 50+rand()%21; //Bot chooses a number between 50 and 70
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 60 && player_num <= 70) {
                bot_num = 60+rand()%21; //Bot chooses a number between 60 and 80
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 70 && player_num <= 80) {
                bot_num = 70+rand()%21; //Bot chooses a number between 70 and 90
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 80 && player_num <=90) {
                bot_num = 80+rand()%21; //Bot chooses a number between 80 and 100
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 90 && player_num < 100) {
                bot_num = 90+rand()%11; //Bot chooses a number between 90 and 100
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num == 100) {
                decision = rand()%2;
                if (decision == 0) {
                    bot_num = 0;
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum();
                }
                else {
                    bot_num = 1+rand()%99; //Bot chooses a number between 1 and 99, the bot will win whichever number it decides to pick
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum(); //Call the function to calculate the final number
            }
            }
            break;
        case -2:
            //Activate aggressive mode for the bot
            if (player_num >= 1 && player_num <=5) {
                bot_num = rand()%4; //Bot chooses a number between 0 and 3
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num == 0) {
                decision = rand()%2;
                if (decision == 0) {
                    bot_num = 100;
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum();
                }
                else {
                    bot_num = rand()%2; // //Has a 50% chance to choose 0, forcing a draw, and a 50% chance of choosing 1, therefore letting the player win
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum(); //Call the function to calculate the final number
                }
            }
            else if (player_num > 5 && player_num <= 10) {
                bot_num = rand()%13; //Bot chooses a number between 0 and 13 ( 0-5 guaranteed win, 6-9 random, 10-12 guaranteed lose )
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 10 && player_num <=15) {
                bot_num = 5+rand()%18; //Bot chooses a number between 5 and 17
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 15 && player_num <=20) {
                bot_num = 10+rand()%23; //Bot chooses a number between 10 and 22
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 20 && player_num <=25) {
                bot_num = 15+rand()%28; //Bot chooses a number between 15 and 27
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 25 && player_num <= 30) {
                bot_num = 20+rand()%33; //Bot chooses a number between 20 and 32
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 30 && player_num <= 35) {
                bot_num = 25+rand()%38; //Bot chooses a number between 25 and 37
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 35 && player_num <= 40) {
                bot_num = 30+rand()%43; //Bot chooses a number between 30 and 42
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 40 && player_num <= 45) {
                bot_num = 35+rand()%48; //Bot chooses a number between 35 and 47
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 45 && player_num <= 50) {
                bot_num = 40+rand()%53; //Bot chooses a number between 40 and 52
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 50 && player_num <= 55) {
                bot_num = 45+rand()%58; //Bot chooses a number between 45 and 57
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 55 && player_num <= 60) {
                bot_num = 50+rand()%63; //Bot chooses a number between 50 and 62
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 60 && player_num <= 65) {
                bot_num = 55+rand()%68; //Bot chooses a number between 55 and 67
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 65 && player_num <= 70) {
                bot_num = 60+rand()%73; //Bot chooses a number between 60 and 72
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 70 && player_num <= 75) {
                bot_num = 65+rand()%78; //Bot chooses a number between 65 and 77
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 75 && player_num <= 80) {
                bot_num = 70+rand()%83; //Bot chooses a number between 70 and 82
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 80 && player_num <= 85) {
                bot_num = 75+rand()%88; //Bot chooses a number between 75 and 87
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 85 && player_num <= 90) {
                bot_num = 80+rand()%93; //Bot chooses a number between 80 and 92
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 90 && player_num <= 95) {
                bot_num = 85+rand()%98; //Bot chooses a number between 85 and 97
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 95 && player_num <= 99) {
                bot_num = 90+rand()%101; //Bot chooses a number between 90 and 100
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num == 100) {
                decision = rand()%2;
                if (decision == 0) {
                    bot_num = 0;
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum();
                }
                else {
                    bot_num = 1+rand()%99; // //Has a 50% chance to choose 100, forcing a draw, and a 50% chance of choosing a number between 1 and 99, therefore winning
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum(); //Call the function to calculate the final number
                }
            }
            break;
        case -3:
            if (player_num >= 1 && player_num <=5) {
                bot_num = rand()%4; //Bot chooses a number between 0 and 3
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num == 0) {
                decision = rand()%2;
                if (decision == 0) {
                    bot_num = 100;
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum();
                }
                else {
                    bot_num = rand()%2; // //Has a 50% chance to choose 0, forcing a draw, and a 50% chance of choosing 1, therefore letting the player win
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum(); //Call the function to calculate the final number
                }
            }
            else if (player_num > 5 && player_num <= 10) {
                bot_num = rand()%13; //Bot chooses a number between 0 and 13 ( 0-5 guaranteed win, 6-9 random, 10-12 guaranteed lose )
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 10 && player_num <=15) {
                bot_num = 5+rand()%18; //Bot chooses a number between 5 and 17
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 15 && player_num <=20) {
                bot_num = 10+rand()%23; //Bot chooses a number between 10 and 22
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 20 && player_num <=25) {
                bot_num = 15+rand()%28; //Bot chooses a number between 15 and 27
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 25 && player_num <= 30) {
                bot_num = 20+rand()%33; //Bot chooses a number between 20 and 32
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 30 && player_num <= 35) {
                bot_num = 25+rand()%38; //Bot chooses a number between 25 and 37
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 35 && player_num <= 40) {
                bot_num = 30+rand()%43; //Bot chooses a number between 30 and 42
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 40 && player_num <= 45) {
                bot_num = 35+rand()%48; //Bot chooses a number between 35 and 47
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 45 && player_num <= 50) {
                bot_num = 40+rand()%53; //Bot chooses a number between 40 and 52
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 50 && player_num <= 55) {
                bot_num = 45+rand()%58; //Bot chooses a number between 45 and 57
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 55 && player_num <= 60) {
                bot_num = 50+rand()%63; //Bot chooses a number between 50 and 62
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 60 && player_num <= 65) {
                bot_num = 55+rand()%68; //Bot chooses a number between 55 and 67
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 65 && player_num <= 70) {
                bot_num = 60+rand()%73; //Bot chooses a number between 60 and 72
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 70 && player_num <= 75) {
                bot_num = 65+rand()%78; //Bot chooses a number between 65 and 77
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 75 && player_num <= 80) {
                bot_num = 70+rand()%83; //Bot chooses a number between 70 and 82
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 80 && player_num <= 85) {
                bot_num = 75+rand()%88; //Bot chooses a number between 75 and 87
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 85 && player_num <= 90) {
                bot_num = 80+rand()%93; //Bot chooses a number between 80 and 92
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 90 && player_num <= 95) {
                bot_num = 85+rand()%98; //Bot chooses a number between 85 and 97
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 95 && player_num <= 99) {
                bot_num = 90+rand()%101; //Bot chooses a number between 90 and 100
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num == 100) {
                decision = rand()%2;
                if (decision == 0) {
                    bot_num = 0;
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum();
                }
                else {
                    bot_num = 1+rand()%99; // //Has a 50% chance to choose 100, forcing a draw, and a 50% chance of choosing a number between 1 and 99, therefore winning
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum(); //Call the function to calculate the final number
                }
            }
            break;
        case -4:
            if (player_num >= 1 && player_num <=5) {
                bot_num = rand()%4; //Bot chooses a number between 0 and 3
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num == 0) {
                decision = rand()%2;
                if (decision == 0) {
                    bot_num = 100;
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum();
                }
                else {
                    bot_num = rand()%2; // //Has a 50% chance to choose 0, forcing a draw, and a 50% chance of choosing 1, therefore letting the player win
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum(); //Call the function to calculate the final number
                }
            }
            else if (player_num > 5 && player_num <= 10) {
                bot_num = rand()%13; //Bot chooses a number between 0 and 13 ( 0-5 guaranteed win, 6-9 random, 10-12 guaranteed lose )
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 10 && player_num <=15) {
                bot_num = 5+rand()%18; //Bot chooses a number between 5 and 17
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 15 && player_num <=20) {
                bot_num = 10+rand()%23; //Bot chooses a number between 10 and 22
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 20 && player_num <=25) {
                bot_num = 15+rand()%28; //Bot chooses a number between 15 and 27
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 25 && player_num <= 30) {
                bot_num = 20+rand()%33; //Bot chooses a number between 20 and 32
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 30 && player_num <= 35) {
                bot_num = 25+rand()%38; //Bot chooses a number between 25 and 37
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 35 && player_num <= 40) {
                bot_num = 30+rand()%43; //Bot chooses a number between 30 and 42
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 40 && player_num <= 45) {
                bot_num = 35+rand()%48; //Bot chooses a number between 35 and 47
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 45 && player_num <= 50) {
                bot_num = 40+rand()%53; //Bot chooses a number between 40 and 52
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 50 && player_num <= 55) {
                bot_num = 45+rand()%58; //Bot chooses a number between 45 and 57
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 55 && player_num <= 60) {
                bot_num = 50+rand()%63; //Bot chooses a number between 50 and 62
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 60 && player_num <= 65) {
                bot_num = 55+rand()%68; //Bot chooses a number between 55 and 67
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 65 && player_num <= 70) {
                bot_num = 60+rand()%73; //Bot chooses a number between 60 and 72
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 70 && player_num <= 75) {
                bot_num = 65+rand()%78; //Bot chooses a number between 65 and 77
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 75 && player_num <= 80) {
                bot_num = 70+rand()%83; //Bot chooses a number between 70 and 82
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 80 && player_num <= 85) {
                bot_num = 75+rand()%88; //Bot chooses a number between 75 and 87
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 85 && player_num <= 90) {
                bot_num = 80+rand()%93; //Bot chooses a number between 80 and 92
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 90 && player_num <= 95) {
                bot_num = 85+rand()%98; //Bot chooses a number between 85 and 97
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num > 95 && player_num <= 99) {
                bot_num = 90+rand()%101; //Bot chooses a number between 90 and 100
                std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                std::cout<<::std::endl;
                finalNum(); //Call the function to calculate the final number
            }
            else if (player_num == 100) {
                decision = rand()%2;
                if (decision == 0) {
                    bot_num = 0;
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum();
                }
                else {
                    bot_num = 1+rand()%99; // //Has a 50% chance to choose 100, forcing a draw, and a 50% chance of choosing a number between 1 and 99, therefore winning
                    std::cout<<"- The bot chose: "<<bot_num<<std::endl;
                    std::cout<<::std::endl;
                    finalNum(); //Call the function to calculate the final number
                }
            }
            break;
    }

}
