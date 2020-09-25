//Name: Person 1: Thy Nguyen 
//		Person 2: TianWei Zhao
//CSCI 3010 - PE 04 - Tic Tac Toe

//header
#include <string>
#include <iostream>
#include <vector>

#include <sstream>
#include <stdio.h>

//linked file
#include "TicTacToe.h"


using namespace std;


//-----------FUNCTIONS-------------//

/** 
	Create an "empty" 3x3 matrix
*/

void TicTacToe::CreateBoard(){
	for(int row = 0; row < 3; row++){
		for(int col = 0; col < 3; col++){
			board_[row][col] = Cell::Empty;
		}
	}
}

void TicTacToe::DisplayBoard(){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; i++){
			if (board_[i][j] == Cell::Empty){
				std::cout<<"| "<<  "  "<<" |";
			}
			if (board_[i][j] == Cell::X){
				std::cout<<"| "<<  "X" <<" |";

			}
			if (board_[i][j] == Cell::O){
				std::cout<<"| "<<  "O" <<" |";

			}
		}
	}
	cout<<"\n";

}

