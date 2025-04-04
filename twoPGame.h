//
// Created by Isaac on 3/14/2025.
//

#ifndef INC_twoPGAME_H
#define INC_twoPGAME_H
#include "Game.h"
using namespace std;

class twoPGame : public Game {
    void displayRules();
    public:
    twoPGame();
    void playGame();
    string pName[2];
    int pScore[2];
    Turn pTurn[2];
    bool gameOver = false;
    bool toggle = false;
};
#endif //INC_2PGAME_H
