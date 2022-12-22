#pragma once
#include "field.h"
#include <memory>

class PropertyField : public Field
{
    virtual void onPass(Player &player) override;
    virtual void onStop(Player &player) override;
    void buyProperty(Player &player);
    int rent = 40;
    int estatePrice = 500;
    Player* owner = nullptr;
public:
    PropertyField();
};