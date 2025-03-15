#include "Die.h"

    Die::Die() {
        dieSides = 6;
    }
    Die::Die(int d) {
        dieSides = d;
    }
    int Die::result() {
        srand(time(0));
        int die_val = (rand() % dieSides) + 1;
        return die_val;
    }
    int Die::getResult() {
        return result();
    }
