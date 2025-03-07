//
// Created by Isaac on 2/20/2025.
//

#ifndef TURN_H
#define TURN_H
using namespace std;
#include <iostream>
#include "Die.h"

class Turn {
    Die die;
    bool turn_over = false;
    int turn_counter = 0;
    int game_score = 0;
    int score_this_turn = 0;
    char choice;

    void roll();
    void hold();

public:
    void take_turn();
    int getTurnCount();

};



#endif //TURN_H
