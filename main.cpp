#include "Board.h"
#include "StartField.h"
#include "Game.h"
#include <memory>

int main () 
{
   Game *game = new Game();
   game->play(5);
    return 0;
}