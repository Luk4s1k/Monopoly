#pragma once
#include <string>
#include "field.h"

class Player {
private:
    std::string name;
    int tileNumber = 0;
    int money = 3000;
public:
    Player(std::string name);
    Player();
    void setTileNumber(const int tile);
    int getTileNumber(){ return tileNumber;};

};