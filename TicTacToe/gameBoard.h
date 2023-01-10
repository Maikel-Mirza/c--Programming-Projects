#pragma once
using namespace std;


class GameBoard
{
	int boardSizeX;
	int boardSizeY;
public:
	void setBoard();
	void printBoard();
private:
	char board[3][3];
	
};

