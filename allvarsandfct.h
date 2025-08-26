#pragma once
void rules(); //Explain the rules
void display(); //Display the points for the player and bot
void choice(); //Prompt the player with a set of choices
void winner(); //Declare the winner of the round, and subtract the points
void botdecide();//Where the bot is thinking of what to do
int finalNum(); //Calculate the final number: the average of chosen numbers * 0.8
extern short int player_points;
extern short int bot_points;
extern short int player_num; //The number the player chooses
extern short int bot_num; //The number the bot chooses
extern float final_num; //The final number, which is the number that gets multiplied by 0.8 after the average is calculated
extern bool aggressive; //Trigger aggressive mode for the bot
