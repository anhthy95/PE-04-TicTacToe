//Name: Person 1: Thy Nguyen 
//		Person 2: TianWei Zhao
//CSCI 3010 - PE 04 - Tic Tac Toe

//header
#include <string>
#include <iostream>
#include <vector>

#include <sstream>
#include <stdio.h>
#include <ctype.h>

//linked file
#include "TicTacToe.h"


using namespace std;


//-----------FUNCTIONS-------------//

/** 
	Create an "empty" 3x3 matrix
*/

std::vector<Cell> TicTacToe::CreateBoard(){
	for(int row = 0; row < 4; row++){
		for(int col = 0; col < 4; col++){
			board_[row][col] = Cell::Empty;
		}
	}
}

void DisplayBoard(std::vector<Cell> vec){
	for (int i = 0; i < 4; i+++){
		for (int j = 0; j < 4; i+++){
			std::cout<<"| "<<vec[i][j] <<" |";
		}
	}
	cout<<"\n"
}

