#ifndef _TICTACTOEBOARD_
#define _TICTACTOEBOARD_

/** 
	Cell enum to represent spaces on the board
*/

enum class Cell {X, O, Empty};

/**
	Class for 3x3 Tic Tac Toe board game
*/

class TicTacToe {
public:

    void CreateBoard(); // Create an empty 3 x 3 board.
    void DisplayBoard();
    void GetPlayerChoice();
   	int PlaceMarker();
    void GameStart();

private:
    int turn_;
    int row_;
    int col_;
    Cell board_[3][3];
};



#endif


