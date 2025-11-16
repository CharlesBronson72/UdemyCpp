#include <iostream>
#include <cstdint>

#include "exercise.h"



void print_Player_Pos(const PlayerData &player)
{
    std::cout << "Spieler \033[31m" << player.id << "\033[0m"
    << "\nsteht an der Position X : \t" << player.x_pos
    << "\nund an der Position Y : \t" << player.x_pos << "\n\n";
}
