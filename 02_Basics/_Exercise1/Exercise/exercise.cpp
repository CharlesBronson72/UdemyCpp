#include <iostream>

#include "exercise.h"

void print_equal_nonequal(const int zahl);

void mod_cross_sum(int I, int J)
{
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            std::cout << "i: " << i << ", j: " << j << " : ";
            print_equal_nonequal(i+j);
        }
    }
}

void print_equal_nonequal(const int zahl)
{
    if (zahl%2 == 0)
    {
        std::cout << "Gerade!\n";
    }
    else
    {
        std::cout << "Ungerade!\n";
    }
    return;
}
