#include "Board.h"

Board::Board() {
    for (int i = 0; i < 9; i++) {
		gameBoard[i] = '-';
    }
}

bool Board::has_won(char player) {
	int wins[][3] = { {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6} };
	for (int i = 0; i < 8; i++)
	{
		int count = 0;
		for (int j = 0; j <= 2; j++)
		{
			if (gameBoard[wins[i][j]] == player)
				count++;
			if (count == 3)
				return true;
		}
	}
	return false;
}

void Board::print_board() {
	std::cout << "Game Field\n";
	std::cout << "-" << gameBoard[6] << "-|-" << gameBoard[7] << "-|-" << gameBoard[8] << "-\n";
	std::cout << "-" << gameBoard[3] << "-|-" << gameBoard[4] << "-|-" << gameBoard[5] << "-\n";
	std::cout << "-" << gameBoard[0] << "-|-" << gameBoard[1] << "-|-" << gameBoard[2] << "-\n";
	std::cout << "Your turn:\n";
}

void Board::SetArray(int i, char value) {
	gameBoard[i] = value;
}

char Board::GetArray(int i) {
	return gameBoard[i];
}
