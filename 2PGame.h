//
// Created by Isaac on 3/14/2025.
//

#ifndef INC_2PGAME_H
#define INC_2PGAME_H
#include "Game.h"

class 2PGame : public Game {
    void displayRules()override;
    Player p1;
    Player p2;
    public:
    2PGame(string p1Name,string p2Name);
    void playGame() override;
    Turn p1Turn;
    Turn p2Turn;
    gameOver = false;
};
#endif //INC_2PGAME_H
