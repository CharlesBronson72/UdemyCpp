#include <iostream>
// #include <cstdint>


int main (){

    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello Wor2ld!" << std::endl;
    std::cout << "Hello World!" << std::endl;
    for (char i = 32; i<=126; i++)
    {
        std::cout << i << "\t\t" << static_cast<int>(i) << '\n';
    }
//    system("say Victor ! Du bist richtig toll !!!");
    return 0;
}
