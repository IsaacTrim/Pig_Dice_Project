//
// Created by Isaac on 2/20/2025.
//

#include "Turn.h"
    void Turn::takeTurn() {
        turnOver = false;
        cout << endl << "Turn: " << getTurnCount() << endl;
        while(!turnOver) {
            cout << "roll or hold? (r/h): ";
            cin >> choice;
            if(choice == 'r') {
                roll();
            }
            else if(choice == 'h') {
                hold();
                playerScore += scoreThisTurn;
                scoreThisTurn = 0;
            }
            else {
                cout << "Invalid choice! Try again." << endl;
            }
        }
        cout << "Total score: " << playerScore << endl;
    }
    int Turn::getTurnCount() {
        return turnCounter;
    }
    int Turn::getPlayerScore() {
        return playerScore;
    }

    void Turn::roll(){
        Die new_die (6);
        new_die.result();
        int pig_die_val = new_die.getResult();
        cout << "Die: " << pig_die_val << endl;
        if(pig_die_val == 1) {
            scoreThisTurn = 0;
            turnOver = true;
            turnCounter++;
            cout << "Turn over. No score." << endl;
            cout << "Score for turn: " << scoreThisTurn << endl;
        }
        else {
            scoreThisTurn += pig_die_val;
        }
    }
    void Turn::hold() {
        cout << "Score for turn: " << scoreThisTurn << endl;
        playerScore += scoreThisTurn;
        scoreThisTurn = 0;
        turnOver = true;
        turnCounter++;
    };