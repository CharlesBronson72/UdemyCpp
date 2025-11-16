#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>

#include "exercise.h"

void printMatrix(const MatrixT &matrix)
{
    for (std::size_t i = 0; i != matrix.size(); ++i)
    {
        for (std::size_t j = 0; j != matrix[i].size(); ++j)
        {
            std::cout << "m[" << i << ", " << j << "] = " << matrix[i][j] << '\n';
        }
    }
    std::cout << '\n';
}

void printVector(const VectorT &vec)
{
    for (std::size_t i = 0; i != vec.size(); ++i)
    {
        std::cout << "v[" << i << "] = " << vec[i] << '\n';
    }
    std::cout << '\n';
}

int main()
{
    auto start = std::chrono::steady_clock::now();
    // Exercise 1
    auto matrix = MatrixT(3, VectorT(3));

    for (int i{}; auto &row : matrix)
    {
        for (int j{}; auto &col : row)
        {
            col = static_cast<double>(i + j);
            ++j;
        }
        ++i;
    }

    std::cout << "Exercise 1:\n";
    printMatrix(matrix);

    // Exercise 2
    auto row_max_vec = max_row_values(matrix);
    std::cout << "max_row_values:\n";
    printVector(row_max_vec);

    // Exercise 3
    auto temp = row_max_vec[2];
    row_max_vec[2] = row_max_vec[1];
    row_max_vec[1] = temp;
    std::cout << "other order:\n";
    printVector(row_max_vec);

    const auto max = sort_and_max(row_max_vec);
    std::cout << "sort_and_max:\n";
    printVector(row_max_vec);

    std::cout << "Vector max: " << max << "\n\n";

    //Tannenbaum
    const size_t height = 15;
    for (size_t i = 0; i < height; i++)
    {
        for (size_t j = i; j < height; j++)
        {
            std::cout << " ";
        }
        for (size_t k = i + 1; k < (i * 3); k++)
        {
            std::cout << "X";
        }
        std::cout << '\n';
    }

    for (size_t i = height; i > 0; i--)
    {
        for (size_t j = i; j < height; j++)
        {
            std::cout << " ";
        }
        for (size_t k = i + 1; k < (i * 3); k++)
        {
            std::cout << "X";
        }
        std::cout << '\n';
    }


    auto end = std::chrono::steady_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "\nDauer in Mikrosekunden : " << duration.count() << "\n\n";

    return 0;
}
