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
  	for(int row = 0; row < 3; row++){
  	    for(int col = 0; col < 3; col++){
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

void TicTacToe::GetPlayerChoice() {
    std::cout << "Please choose the location that you want to mark." << std::endl;
    std::cout << "Row: " << std::endl;
    std::cin >> row_;
    std::cout << "Col: " << std::endl;
    std::cin >> col_;

    std::cout << "You have chosen to mark cell at: " << row_ <<" ; " << col_ << std::endl;
}

