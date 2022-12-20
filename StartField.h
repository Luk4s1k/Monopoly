#pragma once
#include "field.h"

class StartField : public Field
{
public:
    StartField();
    virtual void doAction() override;
};