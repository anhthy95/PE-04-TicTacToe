#ifndef _TICTACTOEBOARD_
#define _TICTACTOEBOARD_

/** 
	Cell enum to represent spaces on the board
*/

enum Cell
{
    X = 'X',
    O = 'O',
    Invalid = '?',
    blank = '--'
};

/**
	Class for 3x3 Tic Tac Toe board game
*/

class TicTacToe
{
	private:
		Cell board_[boardSize][boardSize];
		Cell turn;

		int size_;

	public:
		//Constructor create an empty board 3x3
		CreateBoard(); 

		int get_size() const {return 3; }  // you should be able to change the size of your 


}

#endif
