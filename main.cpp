//Name: Person 1: Thy Nguyen 
//		Person 2: TianWei Zhao
//CSCI 3010 - PE 04 - Tic Tac Toe

//header
#include <string>
#include <iostream>


//linked file
#include "TicTacToe.h"
#include "TicTacToe.cpp"


int main(){


	TicTacToe *p = new TicTacToe;
	p->CreateBoard();
	p->DisplayBoard();


	return 0;
}