#pragma once
#include "field.h"

class RewardField : public Field
{
    virtual void doAction(Player &player) override;
};