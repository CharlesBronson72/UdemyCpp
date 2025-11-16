#include <iostream>
#include <vector>

struct Data
{
    float x;
    float y;
};

void printvec(const std::vector<Data> &vec);

int main()
{
    auto vec = std::vector<Data>{Data{.x = 1.0F, .y = 2.0F}, Data{.x = 4.0F, .y = 6.0F}};
    printvec(vec);
    for (auto [x_, y_] : vec)
    {
        x_ = -1.0F;
        std::cout << x_ << " " << y_ << '\n';
    }
    std::cout << '\n';

    printvec(vec);
    for (auto &[x_, y_] : vec)
    {
        x_ = -1.0F;
        std::cout << x_ << " " << y_ << '\n';
    }
    std::cout << '\n';

    printvec(vec);
    return 0;
}

void printvec(const std::vector<Data> &vec)
{
    for (const auto &[x, y] : vec)
    {
        std::cout << x << " " << y << '\n';
    }
    std::cout << '\n';
}
