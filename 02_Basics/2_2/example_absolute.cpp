#include <iostream>

// 1.) User-Input: number
// 2.) Compute the absolute value of the number
// 3.) Print out the absolute value
// The number can be a float/double/int etc. its up to you :)

// x < 0: -x
// x >= 0: x

int main()
{
    char name[10];
    std::cout << "Gib Deinen Namen ein : ";
    int i=0;
    while (i <= 9)
    {
        std::cin >> name[i];        /* code */
        ++i;
    }


    std::cout << name[1];
    return 0;
}
