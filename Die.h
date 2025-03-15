//
// Created by Isaac on 2/20/2025.
//

#ifndef DIE_H
#define DIE_H
#include "stdlib.h"
#include <ctime>

class Die {
    int dieVal;
    int dieSides;

public:
    Die();
    Die(int d);
    int result();
    int getResult();
};
#endif //DIE_H
