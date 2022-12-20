#pragma once
#include "field.h"
#include "Player.h"
#include <vector>
#include <memory>

class Board
{
private:
    std::vector<std::unique_ptr<Field>> board; 
    std::vector<Player> players;
    void init();
public:
    Board();
    void movePlayer(Player player, int tiles);
    void activateField(Field *field, Player player);
    void play();
    void addPlayer(std::string playerName);
    static int throwDice();
};