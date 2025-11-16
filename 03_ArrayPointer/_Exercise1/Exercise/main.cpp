#include <cstdint>
#include <iostream>

#include "exercise.h"

//template <typename T, std::size_t N>
//double array_sumnew(const std::array<T , N> array);

int main()
{
    constexpr std::uint64_t arrlen = 100U;
    // Exercise 1
    constexpr auto array_length = std::size_t{arrlen};
    double array1[array_length] = {};

    for (std::size_t i = 0; i < array_length; i++)
    {
        array1[i] = i;
    }

    // Exercise 2
    //auto sum = 0.0;

    const auto sum1 = array_sumold(array1, array_length);
    std::cout << "(Exercise 2) Array Sum = " << sum1 << '\n';

    // Exercise 3
    std::array<double, array_length> array2;
    for (std::size_t i = 0; i < array2.size(); i++)
    {
        array2[i] = i;
    }

    const auto sum2 = array_sumnew(array2);
    std::cout << "(Exercise 2) Array Sum = " << sum2 << '\n';

    return 0;
}

//template <typename T, std::size_t N>
//double array_sumnew(const std::array<T, N> array)
//{
//    double sum = 0.0;
//    for (std::uint64_t i = 0; i < array.size(); i++)
//    {
//        sum += array[i];
//    }
//
//    return sum;
//
//}
