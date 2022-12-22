#include "Dice.h"


Dice::Dice(int dimentions) : dimentions(dimentions)
{
    srand(time(NULL));
}

int Dice::roll(int dices)
{
    return rand()%(dimentions*dices) + dices;
}

int Dice::rollTest(int value)
{
    return value;
}