#include <cstdint>
#include <iostream>

void printoneline(const std::uint8_t player_pos);

int main()
{
    std::uint8_t LEN_X = 10U;
    std::uint8_t START = 0U;
    std::uint8_t GOAL = 9U;
    char LEFT = 'a';
    char RIGHT = 'd';

    std::uint8_t player_pos = START;

    while (player_pos < GOAL)
    {
        printoneline(player_pos);

        char move;
        std::cin >> move;

        if ((LEFT == move) && (player_pos > 0))
        {
            player_pos--;
        }
        else if ((RIGHT == move) && (player_pos < LEN_X-1))
        {
            player_pos++;
        }
        else
        {
            std::cout << static_cast<char>(7); //oder "\a"
        }
    }

    printoneline(player_pos);

    std::cout << "\n\n You have won !!! \n\n";

    return 0;
}

void printoneline(const std::uint8_t player_pos)
{
    system("clear");
    for (std::int8_t pos = 0; pos < 10; pos++)
    {
        if ((pos > 0) && (pos < 9))
        {
            if (player_pos != pos)
            {
                std::cout << ".";
            }
            else
            {
                std::cout << "P";
            }
        }
        else
        {
            if (pos != player_pos)
            {
                std::cout << "|";
            }
            else
            {
                std::cout << "P";
            }
        }
    }
}
