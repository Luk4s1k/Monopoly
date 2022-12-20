#include "Player.h"

Player::Player(std::string name): name(name){}

void Player::setTileNumber(const int tile)
{
    tileNumber = tile;
    std::cout << name << " moved to tile " << tileNumber << std::endl;
}