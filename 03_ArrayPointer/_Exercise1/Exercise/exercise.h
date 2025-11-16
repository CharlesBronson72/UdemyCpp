#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

// Exercise 2
double array_sumold(const double array[], const std::size_t length);

// Exercise 3
template <typename T, std::size_t N>
double array_sumnew(const std::array<T, N> array)
{
    double sum = 0.0;
    for (std::uint64_t i = 0; i < array.size(); i++)
    {
        sum += array[i];
    }

    return sum;
}
