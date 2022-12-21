#pragma once
#include <string>
#include <iostream>

class Player
{
private:

    std::string name;
    int tileNumber = 0;
    int money = 3000;

public:

    Player(std::string name);
    Player();

    void setTileNumber(const int tile);
    void move(int tiles);
    void increaseMoney(int amount);
    void subtractMoney(int amount);

    std::string getName() {return name;};
    int getTileNumber(){ return tileNumber;};

};