#include "PenaltyField.h"

 void PenaltyField::doAction(Player &player)
 {
   int newBalance = player.getMoney() - 400;
   player.setMoney(newBalance);
   std::cout << player.getName() << " LOST " << 400 << " coins "  << std::endl;
   // std::cout << "PenaltyField doAction called " << std::endl;
 }

 void PenaltyField::onPass(Player &player)
 {
   int newBalance = player.getMoney() + 400; // change to add money
   player.setMoney(newBalance);
   std::cout << player.getName() << " START POINT GOT " << 400 << " coins "  << std::endl;
 }

void PenaltyField::onStop(Player &player)
{
   onPass(player);
}