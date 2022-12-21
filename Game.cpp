
#include "Game.h"

void Game::play(int moves)
{
    // srand(time(NULL));
    // for (int i = 0; i < moves; i++)
    // {
    //     for (auto &player : players)
    //     {
    //     movePlayer(player, throwDice());
    //     activateField(player);
    //     }
    //     std::cout << std::endl;
    // }

}

void Game::addPlayer(std::string playerName)
{
    players.push_back(Player(playerName));
}

void performMove(Player &player)
{
    
}