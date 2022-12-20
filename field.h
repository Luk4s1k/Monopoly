#pragma once
#include <iostream>

class Field {
public:
    Field();
    virtual void doAction() = 0;
    int getTileNumber();

};
