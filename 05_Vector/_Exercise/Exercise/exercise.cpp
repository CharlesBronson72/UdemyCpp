#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

#include "exercise.h"

// Exercise 2
VectorT max_row_values(MatrixT &matrix)
{
    auto maxRowValues = VectorT(matrix.size(), 0.0F);
    /*for (size_t row = 0; row < matrix.size(); row++)
    {
        for (size_t column = 0; column < matrix[row].size(); column++)
        {
            if (maxRowValues[row] < matrix[row][column])
                maxRowValues[row] = matrix[row][column];
        }
    }*/
    /*for (int i{};auto &row : matrix)
    {
        for (auto &col : row)
        {
            if (maxRowValues[i] < col)
                maxRowValues[i] = col;
        }
        ++i;
    }*/
    for (size_t i{}; auto &val : maxRowValues)
    {
        val = *std::max_element(matrix[i].begin(), matrix[i].end());
        ++i;
    }
    return maxRowValues;
}

// Exercise 3
ValueT sort_and_max(VectorT &vec)
{
    std::ranges::sort(vec, [](auto i, auto j) { return i < j; });
    return *(vec.end() - 1);
}
