#include <iostream>

int main()
{
    auto a = 12U;
    auto b = static_cast<double>(a);

    auto c = 12.3F;
    auto d = static_cast<float>(c);

    return 0;
}
