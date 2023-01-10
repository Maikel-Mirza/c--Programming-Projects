#include "gameBoard.h"
#include <iostream>
using namespace std;
// this is a tic-tac-toe game
// you can have 2 or more players
// a board will be generated and you have to pick a position to place your symbol
// first player to get 3 or more squares to line up wins
// ask the player for there name
// let the player decide number of players
// let the player decide symbol
// let the player decide size of game board

int main()
{
	GameBoard game;
	game.setBoard();
	game.printBoard();
	return 0;
}
