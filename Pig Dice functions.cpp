#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct GameState {
    int game_score;
    int score_this_turn;
    int turn_counter;
    bool turn_over;
    bool game_over;
    char choice;
};

void take_turn(GameState &game);
void roll(GameState &game);
void hold(GameState &game);

void display_rules() {
    cout << "Let's Play PIG Dice!" << endl;
    cout << endl;
    cout << "* See how many turns it takes you to get to 20." << endl;
    cout << "* Turn ends when you roll a 1." << endl;
    cout << "* If you roll a 1 you lose all points for the turn." << endl;
    cout << "* If you hold you save all points for the turn." << endl << endl;
}

void play_game() {
        GameState game;
    game.game_score = 0;
    game.score_this_turn = 0;
    game.turn_counter = 1;
    game.turn_over = false;
    game.game_over = false;

    while(!game.game_over) {
        game.turn_over = false;
        take_turn(game);
    }
    if(game.game_over) {
        cout << "You finished with a score of 20 or higher in " << game.turn_counter << " turns.";
    }
}

void take_turn(GameState &game) {
    cout << endl << "Turn: " << game.turn_counter << endl;
    while(!game.turn_over) {
        cout << "roll or hold? (r/h): ";
        cin >> game.choice;
        if(game.choice == 'r') {
            roll(game);
        }
        else if(game.choice == 'h') {
            hold(game);
            game.game_score += game.score_this_turn;
            game.score_this_turn = 0;
        }
        else {
            cout << "Invalid choice! Try again." << endl;
        }


    }
    cout << "Total score: " << game.game_score << endl;
}

void roll(GameState &game) {
    srand(time(0));
    int die_val = (rand() % 6) + 1;
    cout << "Die: " << die_val << endl;
    if(die_val == 1) {
        game.score_this_turn = 0;
        game.turn_over = true;
        game.turn_counter++;
        cout << "Turn over. No score." << endl;
        cout << "Score for turn: " << game.score_this_turn << endl;
    }
    else {
        game.score_this_turn += die_val;
    }
}

void hold(GameState &game) {
    cout << "Score for turn: " << game.score_this_turn << endl;
    game.game_score += game.score_this_turn;
    game.score_this_turn = 0;
    game.turn_over = true;
    if(game.game_score >= 20) {
        game.game_over = true;
    }
    else {
        game.turn_counter++;
    }
}