//
// Created by Isaac on 3/14/2025.
//

#ifndef INC_2PGAME_H
#define INC_2PGAME_H
#include "Game.h"

class 2PGame : public Game {
    void displayRules();
    public:
    2PGame;
    void play2PlayerGame();
    Player p1;
    Player p2;
    Turn p1Turn;
    Turn p2Turn;
    gameOver = false;
};
#endif //INC_2PGAME_H
