#include <iostream>

int main()
{
    int *p = new int;
    *p = 4;

    std::cout << "Address of p: " << &p << "\n";
    std::cout << "P points to the address: " << p << "\n";
    std::cout << "The value of the address where p points to: " << *p << "\n\n";

    *p = 1337;

    std::cout << "Address of p: " << &p << "\n";
    std::cout << "P points to the address: " << p << "\n";
    std::cout << "The value of the address where p points to: " << *p << "\n\n";

    delete p;
    p=nullptr;

    std::cout << "Address of p: " << &p << "\n";
    std::cout << "P points to the address: " << p << "\n";
    (p==nullptr) ? (std::cout << "p=nullptr\n\n") : (std::cout << *p << "\n\n");
    std::cout << "The value of the address where p points to: " << *p << "\n\n";

    return 0;
}
