#include "Game.h"
using namespace std;
    void Game::display_rules() {
        cout << "Let's Play PIG Dice!" << endl;
        cout << endl;
        cout << "* See how many turns it takes you to get to 20." << endl;
        cout << "* Turn ends when you roll a 1." << endl;
        cout << "* If you roll a 1 you lose all points for the turn." << endl;
        cout << "* If you hold you save all points for the turn." << endl << endl;
    }
    void Game::play_game() {
        game_over = false;
        display_rules();
        while(!game_over) {
            turn.take_turn();
        }
        if(game_over) {
            cout << endl;
            cout << "You finished with a score of 20 or higher in " << turn_counter << " turns.";
        }
    }
}