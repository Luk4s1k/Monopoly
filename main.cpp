#include "Board.h"
#include <memory>
#include "StartField.h"

int main () 
{
   Board *game = new Board();
   game->play();
// StartField sf;
// sf.doAction();
    return 0;
}