#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include "termcolor.h"

using namespace std;
using namespace termcolor;

// Menus
enum Menu
{
	HUMANVHUMAN =1,
	HUMANVAI,
	EXIT,
	END
};

// human v human gamemode functions
int humanVhuman();
int askPlayersToMove(int playerOne, int playerTwo); // used HVH mode reference in this function
void boardDisplay();
bool checkForWin(bool playerOne,bool playerTwo);
int playerHasQuit();

// human v AI gamemode functions
int humanVai();
int checkForWinAI(); 
// int BestMoveForAI(char board); //  evaluates all the available moves using minimax() and then returns the best move the maximizer can make.
bool MovesAvailableAI(); // used HVA references in this function
int minimaxAI(int depth, int AI, bool maxMove); // used HVA references in this function
int playerHasQuit2();
int askPlayersToMove1(int playerOne);

//menu loop functions
int displayMenuScreen();
void displayExitScreen();

// references

// HVH mode
// https://www.youtube.com/watch?v=xwwl8TgkwgU (Nvitanovic)

// HVAI mode
// https://www.geeksforgeeks.org/minimax-algorithm-in-game-theory-set-1-introduction/
// https://www.geeksforgeeks.org/minimax-algorithm-in-game-theory-set-3-tic-tac-toe-ai-finding-optimal-move/?ref=rp

