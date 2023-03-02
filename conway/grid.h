//
// Created by box on 02/03/23.
//

#ifndef CONWAY_GRID_H
#define CONWAY_GRID_H

#include "cell.h"

class Grid
{
    Cell cells[rowmax+2][colmax+2];
public:
    void create_cell(int row, int col);
    void draw();
    void randomize();
    bool will_survive(int row, int col);
    bool will_create(int row, int col);
    void update_next_gen(const Grid& next);

};

void calculate(Grid& old_gen, Grid& next_gen);

#endif //CONWAY_GRID_H
