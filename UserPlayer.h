#pragma once
#include <string>
#include <iostream>
#include "Player.h"

class UserPlayer : public Player
{
public:
    UserPlayer(std::string name);
    virtual bool makeDecision() override;

};