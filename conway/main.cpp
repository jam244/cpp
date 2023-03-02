#include "grid.h"
#include <iostream>
#include <unistd.h>

int main(int argc, char* argv[])
{
    std::cout << "Conway's game of life\n";
    std::cout << "Press any key to start\n";
    std::cin.get();

    Grid current_generation;
    current_generation.randomize();

    while(true)
    {
        current_generation.draw();
        //std::cin.get();
        unsigned int microsecond = 1000000;
        usleep(0.5*microsecond);

        Grid next_generation;
        calculate(current_generation, next_generation);
        current_generation.update_next_gen(next_generation);
    }

    std::cout << "\x1b[" << 0 << ";" << rowmax - 1 << "H";
}


