#include "Player.h"

int Player::get_move()
{
	std::cout << "Controls\n";
	std::cout << "-7-|-8-|-9-\n";
	std::cout << "-4-|-5-|-6-\n";
	std::cout << "-1-|-2-|-3-\n";
	std::cout << std::endl;

	board.print_board();

	int move;
	std::cin >> move;
	while (move > 9 || move < 1 || board.GetArray(move - 1) != '-') {
		std::cout << "Enter your number(0-9)\n";
		std::cin >> move;
	}
	return move;
}


char Player::play()
{
	int turn = 0;
	char value;
	while (!board.has_won('X') && !board.has_won('O') && turn < 9)
	{
		int move = get_move();
		if (turn % 2 == 0)
		{
			value = 'X';
			board.SetArray(move - 1, value);
			if (board.has_won('X'))
			{
				std::cout << "Win the player 'X'!\n";
				return 'X';
			}
		}
		else
		{
			value = 'O';
			board.SetArray(move - 1, value);
			if (board.has_won('O'))
			{
				std::cout << "Win the player 'O'!\n";
				return 'O';
			}
		}
		system("CLS");
		turn++;
	}
	std::cout << "Draw :(\n";
	return 'D';
}

