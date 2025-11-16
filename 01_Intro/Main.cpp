#include <iostream>
#include <cstdint>

int main(void)
{
    int32_t age_man, age_woman;
    std::cout << "Gib Dein Alter ein : ";
    std::cin >> age_man;
    std::cout << "Gib das Alter Deiner Frau ein : ";
    std::cin >> age_woman;

    int32_t maxage ( age_man>age_woman ? age_man : age_woman);

    if (maxage>age_woman)
    {
        std::cout << "Der Mann ist älter\n" << std::endl;
    }
    else
    {
        std::cout << "Die Frau ist älter\n"  << std::endl;
    }


    return 0;
}
