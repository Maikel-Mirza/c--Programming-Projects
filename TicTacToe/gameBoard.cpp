#include "gameBoard.h"
#include <iostream>


void GameBoard::setBoard() {

	cout << "How wide would you like the board to be? ";
	cin >> boardSizeX;
	cout << "How high would you like the board to be? ";
	cin >> boardSizeY;
	for (int y = 0; y < boardSizeY; y++)
	{
		for (int x = 0; x < boardSizeX; x++)
		{
			if ((y + x) % 2 == 0)
			{
				board[y][x] = ' ';
		
			}
			else
			{
				board[y][x] = '*';
			}
		}
	}
}

void GameBoard::printBoard() {

	for (int y = 0; y < boardSizeY; y++)
	{
		for (int x = 0; x < boardSizeX; x++)
		{
			cout << board[y][x];
		}
		cout << endl;
	}
}