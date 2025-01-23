#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    bool game_over = false;
    bool turn_over = false;
    int turn_counter = 1;
    int die_val = 0;
    char choice = 'd';
    int score_this_turn = 0;
    int game_score = 0;
    bool valid = true;

    srand(time(0));

    cout << "Let's Play PIG Dice!" << endl;
    cout << endl;
    cout << "* See how many turns it takes you to get to 20." << endl;
    cout << "* Turn ends when you roll a 1." << endl;
    cout << "* If you roll a 1 you lose all points for the turn." << endl;
    cout << "* If you hold you save all points for the turn." << endl << endl;
    cout << "TURN " << turn_counter << endl;
    while(!game_over) {
        while(!turn_over) {
            cout << "roll or hold? (r/h): ";
            cin >> choice;
            if(choice != 'r' && choice != 'h') {
                valid = false;
                while(!valid) {
                    cout << "Invalid choice! Try again." << endl;
                    cout << "roll or hold? (r/h): ";
                    cin >> choice;
                    if(choice == 'r' || choice == 'h') {
                        valid = true;
                    }
                }
            }
            if(choice == 'r') {
                die_val = (rand() % 6) + 1;
                cout << "Die: " << die_val << endl;
                score_this_turn += die_val;
                if(die_val == 1) {
                    score_this_turn = 0;
                    turn_over = true;
                    cout << "Turn over. No score." << endl;
                    cout << "Score for turn: " << score_this_turn << endl;
                    cout << "Total score: " << game_score << endl;
                }
            }
            if(choice == 'h') {
                cout << "Score for turn: " << score_this_turn << endl;
                game_score += score_this_turn;
                turn_counter++;
                score_this_turn = 0;
                cout << "Total score: " << game_score << endl;
                turn_over = true;
            }
                if(game_score >= 20) {
                    game_over = true;
                }
        }
        cout << endl;
        cout << "TURN " << turn_counter << endl;
        turn_over = false;
    }
    cout << "You finished with a score of 20 or higher in " << turn_counter << " turns." << endl;
                return 0;
}
