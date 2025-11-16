#pragma once

enum class Player_Part
{
    ALLIED,
    ENEMY,
};

struct PlayerData
{
    std::uint32_t id;
    float x_pos;
    float y_pos;
    std::uint32_t health;
    std::uint32_t energy;
    Player_Part team;
};

void print_Player_Pos(const PlayerData &player);
