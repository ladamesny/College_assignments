/*
Title: Homework#1 - Tic Tac Toe game
Author: Larry Adames
Create on: February 18, 2014
Description: Develop a program that will allow a user and computer to play the game of tic-tac-toe. The program should ask for moves alternatively from player and computer. At the beginning of the game, the program should display the board as follow. Whenever a winning or tie situation occur the program must display the board and a message.

Purpose: This is the main file of the tic tac toe assignment.
*/

#include <iostream>
#include "board.h"
using namespace std;

board X; /*constructs a board object*/

int main() {
cout << "Hello, welcome to tictactoe game." << endl;
X.newboard();/*Initializes a new board*/
X.choose();/*Initializes the game*/

return 0;
}
