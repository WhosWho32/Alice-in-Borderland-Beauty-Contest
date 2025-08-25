#include "allvarsandfct.h"
#include <iostream>
void rules() {
    std::cout<<R"(
                        /========================================================================\
                        || ____                   _            ____            _            _   ||
                        ||| __ )  ___  __ _ _   _| |_ _   _   / ___|___  _ __ | |_ ___  ___| |_ ||
                        |||  _ \ / _ \/ _` | | | | __| | | | | |   / _ \| '_ \| __/ _ \/ __| __|||
                        ||| |_) |  __/ (_| | |_| | |_| |_| | | |__| (_) | | | | ||  __/\__ \ |_ ||
                        |||____/ \___|\__,_|\__,_|\__|\__, |  \____\___/|_| |_|\__\___||___/\__|||
                        ||                            |___/                                     ||
                        ||                                                                      ||
                        ||                                                                      ||
                        ||                                                                      ||
                        ||   GENERAL RULES                                                      ||
                        ||   -------------                                                      ||
                        ||   Contestants have to choose a number between 0 and 100.             ||
                        ||   The AVERAGE of the numbers everyone selected is multiplied by 0.8  ||
                        ||   The person whose number is the closest to that result wins,        ||
                        ||   and the losing players will have a point deducted.                 ||
                        ||   When a player reaches -5 points (or more), they are eliminated.    ||
                        ||   The more players are eliminated, the more rules will be added.     ||
                        ||   Since there are only two players in this game,                     ||
                        ||   the following SPECIAL RULES will be added:                         ||
                        ||                                                                      ||
                        \========================================================================/
                                        |                                      |
                                        |                                      |
                                        |                                      |
                                        |                                      |
                                        |                                      |
                                        |                                      |
                            /================================================================\
                            ||  ____                  _       _   ____        _             ||
                            || / ___| _ __   ___  ___(_) __ _| | |  _ \ _   _| | ___  ___   ||
                            || \___ \| '_ \ / _ \/ __| |/ _` | | | |_) | | | | |/ _ \/ __|  ||
                            ||  ___) | |_) |  __/ (__| | (_| | | |  _ <| |_| | |  __/\__ \  ||
                            || |____/| .__/ \___|\___|_|\__,_|_| |_| \_\\__,_|_|\___||___/  ||
                            ||       |_|                                                    ||
                            ||                                                              ||
                            ||  1. If both players choose the same number,                  ||
                            ||  that number becomes invalid and both players lose 1 point.  ||
                            ||                                                              ||
                            ||  2. Choosing the exact correct number will                   ||
                            ||  cause the other player to lose 2 points.                    ||
                            ||                                                              ||
                            ||  3. If one player chooses 0,                                 ||
                            ||  the other player can win by choosing 100.                   ||
                            ||                                                              ||
                            \================================================================/)";
    std::cout<<std::endl;
    choice(); //After reading the rules, prompt the player to choose again
}
