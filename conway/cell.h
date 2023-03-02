#ifndef CONWAY_CELL_H
#define CONWAY_CELL_H

#include "life.h"

class Cell
{
    bool alive;
public:
    Cell() : alive(false) {}

    void draw(int row, int col) const;

    void create()
    {
        alive = true;
    }

    void erase()
    {
        alive = false;
    }

    bool isalive()
    {
        return alive;
    }
};

#endif //CONWAY_CELL_H
