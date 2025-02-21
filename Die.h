//
// Created by Isaac on 2/20/2025.
//

#ifndef DIE_H
#define DIE_H
#include "stdlib.h"
#include <ctime>

class Die {
    int die_val;
    int die_sides;
    int result();
public:
    int get_result();
};
#endif //DIE_H
