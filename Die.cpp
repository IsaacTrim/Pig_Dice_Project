#include "Die.h"

    Die::Die() {
        die_sides = 6;
    }
    Die::Die(int d) {
        die_sides = d;
    }
    int Die::result() {
        srand(time(0));
        int die_val = (rand() % die_sides) + 1;
        return die_val;
    }
    int Die::get_result() {
        return result();
    }
