#include "RewardField.h"


RewardField::RewardField(){}

void RewardField::onStop(Player &player)
{
   player.increaseMoney(100);
   std::cout << "### "<< player.getName() << " ### REWARD ONSTOP " << 100 << " coins "  << std::endl;
}

void RewardField::onPass(Player &player){}