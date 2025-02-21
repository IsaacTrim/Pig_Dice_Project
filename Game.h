//
// Created by Isaac on 2/20/2025.
//

#ifndef GAME_H
#define GAME_H
using namespace std;
#include "Turn.h"
#include "Die.h"


class Game {
    void display_rules();
    Turn turn;
    bool gameover;
    public:
    Game();

};



#endif //GAME_H
