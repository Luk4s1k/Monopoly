#include "UserPlayer.h"

UserPlayer::UserPlayer(std::string name): Player(name){}
bool UserPlayer::makeDecision()
{
    char choice;
    std::cout << " BUY PROPERTY ? (Y - yes / else no) " << std::endl;
    std::cin >> choice;
    return choice == 'Y' ? true : false; 
}