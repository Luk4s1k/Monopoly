#pragma once
#include "field.h"

class RewardField : public Field
{
    virtual void onPass(Player &player) override;
    virtual void onStop(Player &player) override;
public:
    RewardField();
};