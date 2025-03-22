    2PGame::Game(string p1Name, string p2Name) {

    }
    void 2PGame::displayRules() {
        cout << "Let's Play PIG Dice!" << endl;
        cout << endl;
        cout << "* See how many turns it takes you to get to 50." << endl;
        cout << "* Turn ends when you roll a 1." << endl;
        cout << "* If you roll a 1 you lose all points for the turn." << endl;
        cout << "* If you hold you save all points for the turn." << endl << endl;
    }
    void 2PGame::playGame() {
        displayRules();
        while(!gameOver) {
            p1Turn.takeTurn();
            p1Score = p1Turn.getP1Score();
            p2Turn.takeTurn();
            p2Score = p2Turn.getP2Score();
            if(p1Score >= 50 || p2Score >= 50) {
                gameOver = true;
            }
        }
        ;
        cout << "You finished with a score of 20 or higher in " << turn.getTurnCount()-1 << " turns.";
    }