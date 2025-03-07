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
    bool game_over;
    int game_score;
    public:
    Game();
    void play_game();

};



#endif //GAME_H
