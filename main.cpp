#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void display_rules();
void play_game();
void take_turn(int&,int&, int&, bool&, bool&);
void roll(int&, bool&, int&);
void hold(int&, int&, int&, bool&, bool&);

int main() {
    display_rules();
    play_game();
}

void display_rules() {
    cout << "Let's Play PIG Dice!" << endl;
    cout << endl;
    cout << "* See how many turns it takes you to get to 20." << endl;
    cout << "* Turn ends when you roll a 1." << endl;
    cout << "* If you roll a 1 you lose all points for the turn." << endl;
    cout << "* If you hold you save all points for the turn." << endl << endl;
}

void play_game() {
    int score_this_turn = 0;
    int game_score = 0;
    bool turn_over = false;
    int turn_counter = 1;
    bool game_over = false;
    while(!game_over) {
        turn_over = false;
        take_turn(game_score, score_this_turn, turn_counter, turn_over, game_over);
    }
    if(game_over) {
        cout << "You finished with a score of 20 or higher in " << turn_counter << " turns.";
    }
}

void take_turn(int& game_score,int& score_this_turn, int& turn_counter, bool& turn_over, bool& game_over) {
    char choice;
    bool valid = true;
    cout << endl << "Turn: " << turn_counter << endl;
    while(!turn_over) {
        cout << "roll or hold? (r/h): ";
        cin >> choice;
        if(choice == 'r') {
            roll(score_this_turn, turn_over, turn_counter);
            game_score += score_this_turn;
            score_this_turn = 0;
        }
        else if(choice == 'h') {
            hold(game_score, score_this_turn, turn_counter, turn_over, game_over);
        }
        else {
            cout << "Invalid choice! Try again." << endl;
        }
            cout << "Total score: " << game_score << endl;

    }
}

void roll(int& score_this_turn, bool& turn_over, int& turn_counter) {
    srand(time(0));
    int die_val = (rand() % 6) + 1;
    cout << "Die: " << die_val << endl;
    score_this_turn += die_val;
    if(die_val == 1) {
        score_this_turn = 0;
        turn_over = true;
        turn_counter++;
        cout << "Turn over. No score." << endl;
        cout << "Score for turn: " << score_this_turn << endl;
    }
}

void hold(int& game_score, int& score_this_turn, int& turn_counter, bool& turn_over, bool& game_over) {
    cout << "Score for turn: " << score_this_turn << endl;
    game_score += score_this_turn;
    score_this_turn = 0;
    turn_over = true;
    if(game_score >= 20) {
        game_over = true;
    }
    else {
        turn_counter++;
    }
}