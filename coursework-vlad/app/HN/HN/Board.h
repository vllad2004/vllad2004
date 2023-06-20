#pragma once
#include <iostream>
class Board
{
public:
	Board();
	bool has_won(char player);
	void print_board();

	void SetArray(int i, char value);
	char GetArray(int i);
private:
	char gameBoard[9];
};