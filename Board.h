#pragma once
#include "field.h"
#include "Player.h"
#include <vector>
#include <memory>
constexpr int CLASSIC_BOARD_SIZE = 40;
class Board
{
private:
    int boardSize = CLASSIC_BOARD_SIZE;
    std::vector<std::unique_ptr<Field>> board; 
    
    void activateOnPass(Player &player);
    void activateOnStop(Player &player);
    void grantStartBonus(Player &player);
    void init();
public:
    Board();
    void movePlayer(Player &player, int tiles);
    static int throwDice();
};