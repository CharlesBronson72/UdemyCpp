#include <iostream>

#include "Game.h"

namespace
{
constexpr static std::uint32_t LEN_X = 10U;
constexpr static std::uint32_t START = 0U;
constexpr static std::uint32_t GOAL = 9U;
constexpr static char LEFT = 'a';
constexpr static char RIGHT = 'd';
constexpr static char BEEP = 7;
}; // namespace

void game()
{
    std::uint32_t player_pos = START;

    while (!is_finished(player_pos))
    {
        print_game_state(player_pos);

        char move;
        std::cin >> move;

        execute_move(player_pos, move);
    }

    print_game_state(player_pos);
    std::cout << BEEP << BEEP;
    std::cout << "\n\n You have won !!! \n\n";

    return;
}

bool is_finished(const std::uint32_t player)
{
    if (player < GOAL)
        return false;

    return true;
}

void print_game_state(const std::uint32_t player_pos)
{
    system("clear");
    for (std::uint32_t pos = 0; pos < 10; pos++)
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

void execute_move(std::uint32_t &player_pos, const char move)
{
    if ((LEFT == move) && (player_pos > 0))
    {
        player_pos--;
    }
    else if ((RIGHT == move) && (player_pos < LEN_X - 1))
    {
        player_pos++;
    }
    else
    {
        std::cout << BEEP; //static_cast<char>(7); //oder "\a"
    }
}
