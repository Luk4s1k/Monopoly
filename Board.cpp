#include "Board.h"
#include "StartField.h"
#include "RewardField.h"
#include "penaltyField.h"

    Board::Board() 
    {
        init();
    }

    void Board::init() 
    {
        for (int i = 0; i < 40; ++i)
        {
            board.push_back(std::make_unique<RewardField>());
        }

        board.at(0) = std::make_unique<StartField>();
        board.at(4) = std::make_unique<PenaltyField>();
        board.at(8) = std::make_unique<PenaltyField>();

        addPlayer("Alex");
        addPlayer("Carl");
        addPlayer("Jerry");
        addPlayer("Julia");
        addPlayer("Daria");
    }

    void Board::movePlayer(Player player, int tiles)
    {
        int newTile = player.getTileNumber() + tiles;
        player.setTileNumber(newTile);
    }
    
    void Board::activateField(Field *field, Player player){}

    void Board::addPlayer(std::string playerName)
    {
        players.push_back(Player(playerName));
    }

    void Board::play()
    {
        for (auto player : players)
        {
            movePlayer(player, throwDice());
        }
        
    }
    int Board::throwDice()
    {
        return rand()%12 + 1;
    }