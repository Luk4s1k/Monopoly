#include "Board.h"
#include "StartField.h"
#include "Game.h"
#include <memory>

int main () 
{
   Game *game = new Game();
   game->addUserPlayer("Alex");
   game->addGreedyPlayer("Jojo");
   game->play(7);
    return 0;
}