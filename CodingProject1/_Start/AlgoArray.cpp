#include <cmath>
#include <cstdlib>
//#include <iostream>

#include "AlgoArray.h"
#include "DynArray.h"

double sum(const DynamicArray &dynamic_array)
{
    auto sum_value = double{0.0};

    for (std::size_t i = 0; i < dynamic_array.m_length; i++)
    {
        //std::cout << dynamic_array.m_data[i];
        sum_value += dynamic_array.m_data[i];
    }
    //std::cout << '\n';
    return sum_value;
}

double mean(const DynamicArray &dynamic_array)
{
    return sum(dynamic_array) / dynamic_array.m_length;
}

double median(const DynamicArray &dynamic_array)
{
    auto median = 0.0;

    auto *temp = new double[dynamic_array.m_length];

    for (std::size_t i = 0; i < dynamic_array.m_length; i++)
    {
        temp[i] = dynamic_array.m_data[i];
    }

    for (std::size_t i = 0; i < dynamic_array.m_length; i++)
    {
        for (std::size_t j = i + 1; j < dynamic_array.m_length; j++)
        {
            if (temp[i] > temp[j])
            {
                auto temp_value = temp[i];
                temp[i] = temp[j];
                temp[j] = temp_value;
            }
        }
    }

    if (dynamic_array.m_length % 2 == 0)
    {
        median = (temp[dynamic_array.m_length / 2 - 1] + temp[dynamic_array.m_length / 2]) / 2;
    }
    else
    {
        median = temp[dynamic_array.m_length / 2];
    }

    delete[] temp;

    return median;
}
