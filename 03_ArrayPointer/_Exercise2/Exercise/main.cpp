#include <cstdint>
#include <iostream>
#include <array>

std::int32_t *array_constructor(const std::int32_t value,
                                const std::size_t length)
{
    auto *arr = new std::int32_t[length];
    //std::array<int32_t, length> *arr = new[length];
    for (std::size_t i = 0; i < length; i++)
    {
        arr[i] = value;
    }

    //std::int32_t pointer = arr;
    return arr;
}

int main()
{
    // Exercise
    auto input_array_length = std::size_t{0};
    auto input_array_value = std::int32_t{0};

    std::cout << '\n' << "Enter the array length: " << '\n';
    std::cin >> input_array_length;
    std::cout << '\n' << "Enter the array value: " << '\n';
    std::cin >> input_array_value;
    std::cout << '\n';

    auto *array2 = array_constructor(input_array_value, input_array_length);

    for (std::size_t i = 0; i < input_array_length; i++)
    {
        std::cout << array2[i] << '\n'; //unter der Haube *(array2+i)
    }

    delete[] array2;
    array2 = nullptr;

    return 0;
}
