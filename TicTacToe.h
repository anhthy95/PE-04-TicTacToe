#ifndef _TICTACTOEBOARD_
#define _TICTACTOEBOARD_

/** 
	Cell enum to represent spaces on the board
*/

enum class Cell {X, O, Empty};

/**
	Class for 3x3 Tic Tac Toe board game
*/

class TicTacToe
{
public:
    std::vector<Cell> CreateBoard(); // Create an empty 3 x 3 board.

private:
	Cell board_[3][3];
};

#endif


