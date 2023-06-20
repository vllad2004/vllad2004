#include <iostream>
#include "tchar.h"
#include "Game.h"

Game game;

int _tmain(int argc, _TCHAR* argv[])
{
	system("Title TicTacToe");
	system("color 2");
	game.Start();
	int a;
	std::cin >> a;
	return 0;
}