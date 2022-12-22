#include "DepositField.h"

void DepositField::onPass(Player &player)
 {
   player.subtractMoney(20);
   deposit += 20;
   std::cout << " ### Deposit taken from " << player.getName() << std::endl;
 }

void DepositField::onStop(Player &player)
{
   player.increaseMoney(deposit);
   deposit = 0;
   std::cout << " ### Deposit given to " << player.getName() << std::endl;
}