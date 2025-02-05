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

void display_rules();
void play_game();

int main() {
    display_rules();
    play_game();
}