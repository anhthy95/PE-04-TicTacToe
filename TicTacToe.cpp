//Name: Person 1: Thy Nguyen 
//		Person 2: TianWei Zhao
//CSCI 3010 - PE 04 - Tic Tac Toe

//header
#include <string>
#include <iostream>
#include <vector>



//linked file
#include "TicTacToe.h"

//-----------FUNCTIONS-------------//

/** 
	Create an "empty" 3x3 matrix
*/
void TicTacToe::CreateBoard() {
  	for(int row = 0; row < 4; row++){
  	    for(int col = 0; col < 4; col++){
    	  board_[row][col] = Cell::Empty;
  	    }
  	}
}

void TicTacToe::DisplayBoard() {
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            if (board_[row][col] == Cell::Empty) {
                std::cout << "⬜️ ";
            }
            else if (board_[row][col] == Cell::X) {
                std::cout << "✖️️ ";
            }
            else if (board_[row][col] == Cell::O) {
                std::cout << "🔘️ ";
            }
            else {
                std::cout << "⬜️ ";
            }
        }
        std::cout << std::endl;
    }
}
