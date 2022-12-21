#pragma once
#include "field.h"

class StartField : public Field
{
public:
    StartField();
    virtual void onPass(Player &player) override;
    virtual void onStop(Player &player) override;
};