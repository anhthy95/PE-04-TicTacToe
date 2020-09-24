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
TicTacToe::CreateBoard(){
	turn = X ;
	int boardSize = get_size();

  	for(int i = 0; i<boardSize; i++){
  	  for(int j = 0; j<boardSize; j++){
    	  board_[i][j] = Cell::blank ;
  	  }
	}
}