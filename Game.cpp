
#include "Game.h"
#include "UserPlayer.h" 

Game::Game()
{
    dice = new Dice(6);
}

void Game::play(int moves)
{
    for (int i = 0; i < moves; i++)
    {
        std::cout << std::endl;
        std::cout << " /||/ Turn #" << i << std::endl << std::endl;
        playMove();
    }
}

void Game::addGreedyPlayer(std::string playerName)
{
    players.push_back(Player(playerName));
}

void Game::addUserPlayer(std::string playerName)
{
    players.push_back(UserPlayer(playerName));
}

void Game::playMove()
{
    for(auto &player : players)
    {
        board.performMove(player,dice->rollTest(1));
    }
}