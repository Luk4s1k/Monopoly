#include "PenaltyField.h"

PenaltyField::PenaltyField(){};

void PenaltyField::onStop(Player &player)
{
  player.subtractMoney(400);
  std::cout << player.getName() << " ### Penalty POINT LOST " << 400 << " coins "  << std::endl;
}

void PenaltyField::onPass(Player &player){}