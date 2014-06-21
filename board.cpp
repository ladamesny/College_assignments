/*
Title: Homework#1 - Tic Tac Toe game
Author: Larry Adames
Create on: February 18, 2014
Description: Develop a program that will allow a user and computer to play the game of tic-tac-toe. The program should ask for moves alternatively from player and computer. At the beginning of the game, the program should display the board as follow. Whenever a winning or tie situation occur the program must display the board and a message.

Purpose: The purpose of this file is to implement the methods described in the 'board.h' file needed to run this game successfully.
*/


#include "board.h"
#include <iostream>


using namespace std;

/**This function initializes a new board and deletes all board array's contents*/
void board::newboard(){
	cout << "_____|__1__|__2__|__3__|" << endl;/* sets up header of board*/
		for (int i = 0; i <3; i++){
			cout << "__" << i+1 <<"__|"; /* numbers each row*/
				for (int j = 0; j <3; j++){
					cout << "_____|";
					arrboard[i][j] = ' ';} /*initializes each board's coordinates to blank state*/
				cout << endl;
				 	  }
			}

/**This function prints out the contents of the board at the time of the call**/
void board::printboard(){
	cout << "_____|__1__|__2__|__3__|" << endl;
		for (int i = 0; i <3; i++){
		cout << "__" << i+1 <<"__|"; 
			for (int j = 0; j <3; j++){
				cout << "__" << arrboard[i][j] << "__|";} /**This prints out each content of the arrayboard**/
					cout << endl;
					  }
			}

/**initializes player's move method**/
void board::playermove(){

	T++; /*Increment turn counter*/	
	cout << "Please enter row coordinate for your move: ";
	cin >> R;/* Records Row of player's move */
	cout << "Now please enter your column coordinate: ";
	cin >> C;/* Records Column of player's move */
	arrboard[R-1][C-1] = PM; /* Assigns player's character ('X' or 'O') to the coordinates of the board*/
	printboard();/*Updates board*/
	if (checkwin(PM)== true){ /*checks for win*/
	cout << "You beat the Computer!" << endl;
	}else {
	        computermove();}/*If game is not over, jump to computer's move*/
	
			}
/**Starts Computer's move by checking each array on board sequentially and marks the first empty board coordinate if finds**/
void board::computermove(){
	int j, k; /**Needed separate integers from iterators in order to not lose place of what part of board was checked already**/
	T++;/*Increments turn counter*/
	for (int i = 0; i <3; i++){
			j=0;;	/**initializes column to zero at each iteration of'i'**/
			while (arrboard[k][j] != ' '){
				k=i;/**keeps place of i, which is the row of the board**/
				j++;/**cycles through each column after it starts from zero**/
				if (k==2 && j == 2){
					cout << "No more moves available to Computer" << endl;}
				}
	break;}/*terminates the for loop when computer finds an empty space (no strategy)****/

	arrboard[k][j] = CM;/**because we terminated the for loop after k and j were initialized, I still have the coordinates of the last available coordinates. Here I "mark" the board with 					the computer's move**/
	printboard();
	if (checkwin(CM)==true){
	cout << "Computer wins!" << endl;
	}else{ cout << "Player's turn" << endl;
	playermove(); }}


/* This method is designed to check the board for a winner at any given time*/
bool board::checkwin(char P){
if (T==9){
	cout << "It is a tie!" << endl;
	return true;
}else if (arrboard[0][0] == P && arrboard[1][1] == P && arrboard[2][2] == P){
    cout << "Player "<< P << " wins!!" << endl;	return true;
}else if (arrboard[0][2] == P && arrboard[1][1] == P && arrboard[2][0] == P){
    cout << "Player " << P << " wins!!" << endl; return true;
}else if (arrboard[0][0] == P && arrboard[0][1] == P && arrboard[0][2] == P){
    cout << "Player " << P <<" wins!!" << endl;return true;
}else if (arrboard[0][0] == P && arrboard[1][0] == P && arrboard[2][0] == P){
    cout << "Player " << P <<" wins!!" << endl;return true;
}else if (arrboard[1][0] == P && arrboard[1][1] == P && arrboard[1][2] == P){
    cout << "Player " << P <<" wins!!" << endl;return true;
}else if (arrboard[2][0] == P && arrboard[2][1] == P && arrboard[2][2] == P){
    cout << "Player " << P <<" wins!!" << endl;return true;
}else if (arrboard[0][1] == P && arrboard[1][1] == P && arrboard[2][1] == P){
    cout << "Player " << P <<" wins!!" << endl;return true;
}else if (arrboard[0][2] == P && arrboard[1][2] == P && arrboard[2][2] == P){
    cout << "Player " << P <<" wins!!" << endl;return true;
}else if (arrboard[0][0] == P && arrboard[1][0] == P && arrboard[2][0] == P){
    cout << "Player " << P <<" wins!!" << endl;return true;
}else cout << "Continue to next player" << endl;
return false;}

/*This method begins the game and chooses who goes first, the player or the machine*/
void board::choose(){

	cout << "Choose 'X' or 'O': ";
	cin >> PM; /*stores player's choice*/
	T = 0; /*Initialize turn counter*/

	if (PM == 'X'|PM == 'x') /*checks for both cases of capital or lower case 'X' for possible acceptable choices*/
		CM = 'O';
	else CM = 'X';

	cout << "Who goes first? (enter 1 for player  or 2 for Computer): ";
	cin >> M;

	if (M == 1){
		playermove();
	}else computermove();
		   
		   }
