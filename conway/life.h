#ifndef CONWAY_LIFE_H
#define CONWAY_LIFE_H
const char live_cell{'X'};
const char dead_cell{' '};

const int rowmax = 23;
const int colmax = 79;

// Conways parameters
const int min_neighbours = 2;
const int max_neighbours = 3;
const int min_parents = 3;
const int max_parents = 3;
#endif //CONWAY_LIFE_H
