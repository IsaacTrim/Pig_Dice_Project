    #include "twoPGame.h"
    twoPGame::twoPGame(){
        playGame();
    }
    void twoPGame::displayRules() {
        cout << "Let's Play PIG Dice!" << endl;
        cout << endl;
        cout << "* See how many turns it takes you to get to 50." << endl;
        cout << "* Turn ends when you roll a 1." << endl;
        cout << "* If you roll a 1 you lose all points for the turn." << endl;
        cout << "* If you hold you save all points for the turn." << endl << endl;
    }
    void twoPGame::playGame() {
        displayRules();
        cout << "input name 1";
        getline(cin,pName[0]);
        cout << "input name 2";
        getline(cin,pName[1]);
        while(!gameOver) {
            pTurn[toggle].takeTurn();
            pScore[toggle] = pTurn[toggle].getPlayerScore();
            if(pScore[toggle] >= 50) {
                if(toggle == 0) {
                    toggle = !toggle;
                    pTurn[toggle].takeTurn();
                    pScore[toggle] = pTurn[toggle].getPlayerScore();
                }
                gameOver = true;
            }
            toggle = !toggle;
        }
        ;

        if(pScore[0] >= pScore[1]) {
            cout << pName[0] << " finished with a score of 50 or higher in " << pTurn[0].getTurnCount()-1 << " turns.";
        }
        else {
            cout << pName[1] << " finished with a score of 50 or higher in " << pTurn[1].getTurnCount()-1 << " turns.";
        }
    }
