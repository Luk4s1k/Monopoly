#pragma once
#include <iostream>
#include "Player.h"

class Field 
{
public:
    Field();
    virtual void onPass(Player &player) = 0;
    virtual void onStop(Player &player) = 0;

};
