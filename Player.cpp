#include "Player.h"

Player::Player(std::string name): name(name){}

void Player::setTileNumber(const int tile)
{
    tileNumber = tile;
    std::cout << name << " moved to tile " << tileNumber << std::endl;
}

void Player::increaseMoney(int amount)
{
    money += amount;
    std::cout << " --- Balance increased " << money << std::endl;
}
void Player::subtractMoney(int amount)
{
    money -= amount;
    std::cout << " --- Balance decreased " << money << std::endl;
}

void Player::move(int tiles)
{
    tileNumber += tiles;
    std::cout << " --- Player moved " << money << std::endl;
}