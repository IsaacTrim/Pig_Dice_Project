    #include "twoPGame.h"
    twoPGame::twoPGame(){
        playGame();
    }
    void twoPGame::displayRules() {
        cout << "Let's Play PIG Dice!" << endl;
        cout << endl;
        cout << "* See which player will reach 50 points in the fewest turns." << endl;
        cout << "* Turn ends when you roll a 1." << endl;
        cout << "* If you roll a 1 you lose all points for the turn." << endl;
        cout << "* If you hold you save all points for the turn." << endl << endl;
    }
    void twoPGame::playGame() {
        displayRules();
        cout << "Enter player 1's name: ";
        getline(cin,pName[0]);
        cout << "Enter player 2's name: ";
        getline(cin,pName[1]);
        while(!gameOver) {
            cout << endl << pName[toggle] << " (Score:" << pScore[toggle] << ") ";
            pTurn[toggle].takeTurn();
            pScore[toggle] = pTurn[toggle].getPlayerScore();
            if(pScore[toggle] >= 50) {
                if(toggle == 0) {
                    toggle = !toggle;
                    cout << endl << pName[toggle] << " (Score:" << pScore[toggle] << ") ";
                    pTurn[toggle].takeTurn();
                    pScore[toggle] = pTurn[toggle].getPlayerScore();
                }
                gameOver = true;
            }
            toggle = !toggle;
        }
        ;

        if(pScore[0] >= pScore[1]) {
            toggle = 0;
        }
        else {
            toggle = 1;
        }
        cout << "Congratulations " << pName[toggle] << " you're the winner!" << endl << "You had a final score of " << pScore[toggle] << " points after " << pTurn[toggle].getTurnCount()-1 << " turns!" << endl;
        cout << "THANKS FOR PLAYING! " << endl;
    }
