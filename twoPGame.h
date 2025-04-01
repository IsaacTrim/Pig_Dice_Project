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
    twoPGame;
    void play2PlayerGame();
    Player p1(String pName);
    Player p2(String pName);
    Turn p1Turn;
    Turn p2Turn;
    gameOver = false;
};
#endif //INC_2PGAME_H
