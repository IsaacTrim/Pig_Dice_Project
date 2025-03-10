//
// Created by Isaac on 2/20/2025.
//

#include "Turn.h"
    void Turn::take_turn() {
        turn_over = false;
        cout << endl << "Turn: " << getTurnCount() << endl;
        while(!turn_over) {
            cout << "roll or hold? (r/h): ";
            cin >> choice;
            if(choice == 'r') {
                roll();
            }
            else if(choice == 'h') {
                hold();
                game_score += score_this_turn;
                score_this_turn = 0;
            }
            else {
                cout << "Invalid choice! Try again." << endl;
            }
        }
        cout << "Total score: " << game_score << endl;
    }
    int Turn::getTurnCount() {
        return turn_counter;
    }
    void Turn::roll(){
        Die new_die (6);
        new_die.result();
        int pig_die_val = new_die.get_result();
        cout << "Die: " << pig_die_val << endl;
        if(pig_die_val == 1) {
            score_this_turn = 0;
            turn_over = true;
            turn_counter++;
            cout << "Turn over. No score." << endl;
            cout << "Score for turn: " << score_this_turn << endl;
        }
        else {
            score_this_turn += pig_die_val;
        }
    }
    void Turn::hold() {
        cout << "Score for turn: " << score_this_turn << endl;
        game_score += score_this_turn;
        score_this_turn = 0;
        turn_over = true;
        turn_counter++;
    };