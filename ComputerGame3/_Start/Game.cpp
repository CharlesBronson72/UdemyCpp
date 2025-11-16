#include<iostream>

#include "Game.h"

void game()
{
    std::uint8_t player_pos = START;

    while (player_pos < GOAL)
    {
        print_line(player_pos);

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
            std::cout << BEEP; //static_cast<char>(7); //oder "\a"
        }
    }

    print_line(player_pos);
    std::cout << BEEP << BEEP;
    std::cout << "\n\n You have won !!! \n\n";

    return;
}

void print_line(const std::uint8_t player_pos)
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
