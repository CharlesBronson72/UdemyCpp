#include <iostream>

#include "exercise.h"

int main()
{
    const auto player1 =
        PlayerData{.id = 5U, .x_pos = 5.0F, .y_pos = 5.0F, .health = 5, .energy = 5, .team = Player_Part::ALLIED};

    auto player2 =
        PlayerData{.id = 6U, .x_pos = 6.0F, .y_pos = 6.0F, .health = 57, .energy = 55, .team = Player_Part::ENEMY};

    print_Player_Pos(player1);

    player2.id = 7;

    print_Player_Pos(player2);

    return 0;
}
