
#pragma once
#include "Board.h"

class Game 
{
private:
    Board board;
    std::vector<Player> players;
    // dices
public:
    void play(int moves);
    void performMove(Player &player);
    void addPlayer(std::string playerName);

};