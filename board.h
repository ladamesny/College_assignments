/*
Title: Homework#1 - Tic Tac Toe game
Author: Larry Adames
Create on: February 18, 2014
Description: Develop a program that will allow a user and computer to play the game of tic-tac-toe. The program should ask for moves alternatively from player and computer. At the beginning of the game, the program should display the board as follow. Whenever a winning or tie situation occur the program must display the board and a message.

Purpose: The purpose of this file is to write the class to be used for this game and list the methods to be used within this class.
*/

#ifndef board_h
#define board_h

/**A class for tictactoe board*/

class board{

public:
bool checkwin(char);/*This method checks the board for a winner*/
void printboard();/**prints the board**/
void newboard();/**sets up board for game**/
void computermove();/** this executes the computer's move**/
void playermove(); /** records player moves**/
void choose();/*This method executes the game*/

private:

char arrboard[3][3]; /*Gameboard recorded as a two dimensional array*/
int R,C,M, T;/*Row-Column-Player Selector-Counter*/
char PM, CM;/*Player's X-O Selection, Computer's X-O Assignment*/
};

#endif
