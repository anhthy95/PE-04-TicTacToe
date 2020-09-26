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
    bool check = false;
    int row, col;

    while (!check){
        std::cout << "Please choose the cell that you want to mark." << std::endl;
        std::cout << "Row: ";
        std::cin >> row;
        std::cout << "Col: ";
        std::cin >> col;

        row_ = row - 1;
        col_ = col - 1;

        if (board_[row_][col_] == Cell::Empty) {
            check = true;
            std::cout << "You have chosen to mark cell at: (" << row <<" , " << col << ")." << std::endl;
            std::cout << std::endl;
        }
        else {
            check = false;
            std::cout << "The cell is illegal, please choose again!" << std::endl;
            std::cout << std::endl;
        }
    }
}


int TicTacToe::PlaceMarker(){
    //int row = row_ - 1; //coordinate starting at 1 in the game
    //int col = col_ - 1;

        if ((board_[row_][col_] == Cell::Empty) && (turn_ == 1)) {
            board_[row_][col_] = Cell::X;
            turn_ = 2;
        }
        else if ((board_[row_][col_] == Cell::Empty) && (turn_ == 2)) {
            board_[row_][col_] = Cell::O;
            turn_ = 1;
        }    
    return turn_;
}

void TicTacToe::GameStart() {
    //bool winnerCheck = false; 
    CreateBoard();
    turn_ = 1;
    int i = 0;

    while (i < 9) {
        std:: cout << "Player " << turn_ << "'s turn" << std::endl;
        DisplayBoard();
        GetPlayerChoice(); //just to test
        turn_ = PlaceMarker();
        i++;
    }
}