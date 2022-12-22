#include "PropertyField.h"

PropertyField::PropertyField(){};

void PropertyField::onStop(Player &player)
{
    std::cout << player.getName() << " ### Property Field " << std::endl;
    if(owner != nullptr and owner != &player)
    {
        std::cout << player.getName() << " ### Payed rent to " << owner->getName() << std::endl;
        player.subtractMoney(rent);
        owner->increaseMoney(rent);
    }
    else if(owner == nullptr)
    {
       buyProperty(player);
    }
}

void PropertyField::onPass(Player &player){}

void PropertyField::buyProperty(Player &player)
{
    if(player.makeDecision()){
        if(player.getMoney() - estatePrice >= 0)
        {
            owner = &player;
            player.subtractMoney(estatePrice);
            std::cout << " ### Property bought by " << owner->getName() << std::endl;

        }
        else
        {
            std::cout << player.getName() << " !!! NOT ENOUGH MONEY "  << std::endl;
        }
    }
}