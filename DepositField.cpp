#include "RewardField.h"

//  void RewardField::doAction(Player &player)
//  {
//    int newBalance = player.getMoney() - 200;
//    player.setMoney(newBalance);
//    player.increaseDeposit(200);
//    std::cout << player.getName() << " GOT " << 100 << " coins "  << std::endl;
//  }

void RewardField::onPass(Player &player)
 {
   int newBalance = player.getMoney() + 400; // change to add money
   player.setMoney(newBalance);
   std::cout << player.getName() << " START POINT GOT " << 400 << " coins "  << std::endl;
 }

void RewardField::onStop(Player &player)
{
   onPass(player);
}