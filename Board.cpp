#include "Board.h"
#include "StartField.h"
#include "RewardField.h"
#include "PenaltyField.h"

Board::Board()
{
    init();
}

void Board::init() 
{
    for (int i = 0; i < boardSize; ++i)
    {
        board.push_back(std::make_unique<RewardField>());
    }

    board.at(0) = std::make_unique<StartField>();
    board.at(4) = std::make_unique<PenaltyField>();
    board.at(8) = std::make_unique<PenaltyField>();

    addPlayer("Alex");
    addPlayer("Carl");
    // addPlayer("Jerry");
    // addPlayer("Julia");
    // addPlayer("Daria");
}

void Board::movePlayer(Player &player, int tiles)
{
    player.move(tiles);
    if(newTile >= boardSize) 
    {
        grantStartBonus(player);
    }
    player.setTileNumber(newTile % boardSize);
}

void Board::activateOnPass(Player &player)
{
    for (int i = player.getTileNumber(); i < )
}

void Board::activateOnStop(Player &player)
{
    // board.at(player.getTileNumber())->doAction(player);
}

void Board::grantStartBonus(Player &player) // Tobe changed
{
    board.at(0)->doAction(player);
}

int Board::throwDice() ///dfferent dices
{
    return rand()%12 + 1;
}