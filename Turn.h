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
    bool turnOver = false;
    int turnCounter = 1;
    int playerScore = 0;
    int scoreThisTurn = 0;
    char choice;

    void roll();
    void hold();

public:
    void takeTurn();
    int getTurnCount();
    int getPlayerScore();

};



#endif //TURN_H
