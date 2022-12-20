#pragma once
#include "field.h"
#include "Player.h"
#include <vector>
#include <memory>

// static const int TILE_NUMBER = 40;
class Board{
private:
    std::vector<std::unique_ptr<Field>> board; 
    std::vector<Player> players;
    void init();
public:
    Board();
    void movePlayer(Player player, int tiles);
    void activateField(Field *field, Player player);
    void play();
    static int throwDice();
};