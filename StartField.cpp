#include "StartField.h"


StartField::StartField(){}


 void StartField::onPass(Player &player)
 {
   int newBalance = player.getMoney() + 400; // change to add money
   player.setMoney(newBalance);
   std::cout << player.getName() << " START POINT GOT " << 400 << " coins "  << std::endl;
 }

void StartField::onStop(Player &player)
{
   onPass(player);
}