#include "field.h"

class PenaltyField : public Field
{
    virtual void onPass(Player &player) override;
    virtual void onStop(Player &player) override;
public:
    PenaltyField();
};