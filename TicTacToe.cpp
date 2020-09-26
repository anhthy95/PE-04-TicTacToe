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
    while (!check){
    std::cout << "Please choose the location that you want to mark." << std::endl;
    std::cout << "Row: " << std::endl;
    std::cin >> row_;
    std::cout << "Col: " << std::endl;
    std::cin >> col_;

    std::cout << "You have chosen to mark cell at: " << row_ <<" ; " << col_ << std::endl;

    if (board_[row_][col_] == Cell::Empty){
        check = true;
    }
    else {
        check = false;
        std::cout << "The cell is alreeady marker, choose empty cell please!"<< std::endl;
    }


    }
}


void TicTacToe::PlaceMarker(int turn_){
    int row = row_ = 1; //coordinate starting at 1 in the game
    int col = col_ = 1;

        if ((board_[row][col] == Cell::Empty) && (turn_ == 1)){
            board_[row][col] = Cell::X;
            turn_ = 2;
        }
        else if ((board_[row][col] == Cell::Empty) && (turn_ == 2)){
            board_[row_][col] = Cell::O;
            turn_ = 1;
        }    
}

void TicTacToe::GameStart(){
    //bool winnerCheck = false; 
    CreateBoard();
    turn_ = 1;

    int i = 0;
    while (i < 7){
    DisplayBoard();

    GetPlayerChoice(); //just to test
    std:: cout<< "Turn: "<< turn_ <<std::endl;
    PlaceMarker(turn_);
    i++;

    }
}