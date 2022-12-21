#include "field.h"

class DepositField : public Field
{
    virtual void onPass(Player &player) override;
    virtual void onStop(Player &player) override;
};