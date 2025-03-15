#include "Game.h"
using namespace std;

    Game::Game() {
        playGame();
    }
    void Game::displayRules() {
        cout << "Let's Play PIG Dice!" << endl;
        cout << endl;
        cout << "* See how many turns it takes you to get to 20." << endl;
        cout << "* Turn ends when you roll a 1." << endl;
        cout << "* If you roll a 1 you lose all points for the turn." << endl;
        cout << "* If you hold you save all points for the turn." << endl << endl;
    }
    void Game::playGame() {
        Turn turn;
        gameOver = false;
        displayRules();
        while(!gameOver) {
            turn.takeTurn();
            gameScore = turn.getGameScore();
            if(gameScore >= 20) {
                gameOver = true;
            }
        }
 ;      cout << "You finished with a score of 20 or higher in " << turn.getTurnCount()-1 << " turns.";

    }
