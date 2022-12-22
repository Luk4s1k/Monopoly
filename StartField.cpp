#include "StartField.h"


StartField::StartField(){}


 void StartField::onPass(Player &player)
 {
   player.increaseMoney(400);
   std::cout << "### " << player.getName() << " ### START POINT GOT " << 400 << " coins "  << std::endl;
 }

void StartField::onStop(Player &player)
{
   onPass(player);
}