#include <iostream>

#include "Game.h"


namespace // anonymous namespace  dont need static
{
constexpr auto LEN = Coordinate{.x = 10U, .y = 10U};
constexpr auto START = Coordinate{.x = 0U, .y = 0U};
constexpr auto GOAL = Coordinate{.x = LEN.x - 1, .y = LEN.y - 1};
constexpr auto BEEP = char{7};
}; // namespace

void game()
{
    Coordinate player_pos = START;
    auto move = Direction::INVALID;
    char move_copy = ' ';

    while (!is_finished(player_pos))
    {
        print_game_state(player_pos);
        std::cin >> move_copy;
        move = static_cast<Direction>(move_copy);
        execute_move(player_pos, move);
    }

    print_game_state(player_pos);
    std::cout << BEEP << BEEP;
    std::cout << "\n\n\033[31m You have won !!! \n\n\033[0m";
}

bool is_finished(const Coordinate player)
{
    return (player.x == GOAL.x) && (player.y == GOAL.y);
}

void print_game_state(const Coordinate player_pos)
{
    system("clear");
    for (std::uint32_t yy = 0; yy < LEN.y; yy++)
    {
        for (std::uint32_t xx = 0; xx < LEN.x; xx++)
        {
            if ((xx > 0) && (xx < LEN.x - 1))
            {
                if (player_pos.x == xx && player_pos.y == yy)
                {
                    std::cout << "P";
                }
                else
                {
                    std::cout << ".";
                }
            }
            else
            {
                if (xx == player_pos.x && yy == player_pos.y)
                {
                    std::cout << "P";
                }
                else
                {
                    std::cout << "|";
                }
            }
        }
        std::cout << "\n";
    }
}

void execute_move(Coordinate &player_pos, const Direction move)
{
    switch (move)
    {
    case Direction::LEFT:
        if (player_pos.x > 0)
        {
            player_pos.x--;
        }
        break;

    case Direction::RIGHT:
        if (player_pos.x < LEN.x - 1)
        {
            player_pos.x++;
        }
        break;

    case Direction::UP:
        if (player_pos.y > 0)
        {
            player_pos.y--;
        }
        break;

    case Direction::DOWN:
        if (player_pos.y < LEN.y - 1)
        {
            player_pos.y++;
        }
        break;
    case Direction::INVALID:
    default:
        std::cout << BEEP; //static_cast<char>(7); //oder "\a"
        break;
    }
}
