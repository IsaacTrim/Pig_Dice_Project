//
// Created by Isaac on 2/20/2025.
//

#ifndef GAME_H
#define GAME_H
using namespace std;
#include "Turn.h"
#include "Die.h"


class Game {
    void displayRules();
    Turn turn;
    bool gameOver;
    int gameScore;
    public:
    Game();
    void playGame();

};



#endif //GAME_H
