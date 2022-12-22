#include "Board.h"
#include "StartField.h"
#include "RewardField.h"
#include "PenaltyField.h"
#include "DepositField.h"
#include "PropertyField.h"

Board::Board()
{
    init();
}

void Board::init() 
{
    for (int i = 0; i < boardSize; ++i)
    {
        board.push_back(std::make_unique<PropertyField>());
    }

    board.at(0) = std::make_unique<StartField>();
    board.at(13) = std::make_unique<RewardField>();
    board.at(4) = std::make_unique<PenaltyField>();
    board.at(10) = std::make_unique<DepositField>();
    board.at(8) = std::make_unique<PenaltyField>();
}

void Board::performMove(Player &player, int tiles)
{
    std::cout << player.getName() 
              << " ---( " << player.getTileNumber() 
              << " )"
              << "-- Balance ("
              << player.getMoney()
              << " )"
              << std::endl;
    activateOnPass(player,tiles);
    player.move(tiles);
    activateOnStop(player);
    std::cout << player.getName() 
              << " ---( " << player.getTileNumber() 
              << " )"
              << "-- Balance ("
              << player.getMoney()
              << " )"
              << std::endl;
}

void Board::activateOnPass(Player &player, int moves)
{
    for (int i = 1; i < moves; i++)
    {
        int tileNumber = (player.getTileNumber() + i)%boardSize;
        //std::cout << "(((((( Tile on pass " << tileNumber << std::endl;
        board.at(tileNumber)->onPass(player);
    }
}

void Board::activateOnStop(Player &player)
{
    board.at(player.getTileNumber())->onStop(player);
}