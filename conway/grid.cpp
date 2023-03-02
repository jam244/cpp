#include "grid.h"
#include <iostream>

void Grid::create_cell(int row, int col)
{
    cells[row][col].create();
}


void Grid::draw()
{
    std::cout << "\x1b[2J";
    for(int row = 0; row < rowmax; row++)
    {
        for(int col = 0; col < colmax; col++)
        {
            cells[row][col].draw(row, col);
        }
    }
}

void Grid::randomize()
{
    const int factor = 5;
    const int cutoff = RAND_MAX/factor;
    for(int row = 1; row < rowmax; row++)
    {
        for(int col = 1; col < colmax; col++)
        {
            if(rand() / cutoff == 0)
            {
                create_cell(row, col);
            }
        }
    }

}

bool Grid::will_survive(int row, int col)
{
    if (!cells[row][col].isalive())
    {
        // no cell
        return false;
    }

    int neighbours = cells[row-1][col-1].isalive() +
            cells[row][col+1].isalive() +
            cells[row][col-1].isalive() +
            cells[row-1][col].isalive() +
            cells[row+1][col].isalive() +
            cells[row+1][col+1].isalive() +
            cells[row-1][col+1].isalive() +
            cells[row+1][col-1].isalive();

    if(neighbours < min_neighbours || neighbours > max_neighbours)
    {
        return false;
    }

    return true;
}

bool Grid::will_create(int row, int col)
{
    if (cells[row][col].isalive())
    {
        // cell is present
        return false;
    }

    int neighbours = cells[row-1][col-1].isalive() +
                     cells[row][col+1].isalive() +
                     cells[row][col-1].isalive() +
                     cells[row-1][col].isalive() +
                     cells[row+1][col].isalive() +
                     cells[row+1][col+1].isalive() +
                     cells[row-1][col+1].isalive() +
                     cells[row+1][col-1].isalive();

    if(neighbours < min_parents || neighbours > max_parents)
    {
        // cell died
        return false;
    }
    // cell survived
    return true;
}

void Grid::update_next_gen(const Grid& next)
{
    for(int row = 1; row < rowmax; row++)
    {
        for(int col = 1; col < colmax; col++)
        {
            cells[row][col] = next.cells[row][col];
        }
    }
}

void calculate(Grid& old_gen, Grid& next_gen)
{
    for(int row = 1; row < rowmax; row++)
    {
        for(int col = 1; col < colmax; col++)
        {
            if (old_gen.will_survive(row, col))
            {
                next_gen.create_cell(row, col);
            }
            else if(old_gen.will_create(row, col))
            {
                next_gen.create_cell(row, col);
            }
        }
    }
}