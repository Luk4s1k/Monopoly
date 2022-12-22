#pragma once
#include <cstddef>
#include <memory>

class Dice
{
    int dimentions;
public:
    Dice(int dimentions);
    int roll(int dices);
    int rollTest(int value);
};