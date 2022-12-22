
#pragma once
#include "Board.h"
#include "Dice.h"

class Game 
{
private:
    Board board;
    std::vector<Player> players; // to pointers 
    Dice *dice;
public:
    Game();
    void play(int moves);
    void playMove();
    void addGreedyPlayer(std::string playerName);
    void addUserPlayer(std::string playerName);


};