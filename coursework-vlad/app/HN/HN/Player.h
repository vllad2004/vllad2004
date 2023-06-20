#pragma once
#include "Board.h"
class Player :
    public Board
{
public:
    int get_move();
    char play();
private:
    Board board;
};

