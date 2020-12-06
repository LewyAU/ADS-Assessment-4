#include "FunctionProtos.h"

const int rows= 3;
const int colums= 3;
char board[3][3] = {

{'1','2','3'}, // important to nto have to many spaces between letters or else they wont show
{'4','5','6'},
{'7','8','9'},
};

int humanVhuman()
{
	// initialize and declare  players
	bool playerOne = false;
	bool playerTwo = false;
	bool playerHasQuit1= false;

	if (playerHasQuit1 == 1) // player quitting game
	{
		playerHasQuit();
	}

	// display board
	boardDisplay();
	do
	{
	

	// allow players to enter on the board
	askPlayersToMove(playerOne, playerTwo);
	
	// Display board after user selection
	system("cls"); // clear board so it dosent redisplay all the time
	boardDisplay();

	// check for win
	 checkForWin( playerOne, playerTwo);

	} while (!playerOne || !playerTwo || !playerHasQuit1);
	//--------------------------------- end of loop 
	
	if (playerOne == true) // meesage to player if they've won
	{
	cout << "player X won the game, press any button to return to menu" << endl;
	_getch();
	}
	else if (playerTwo == true)
	{
	cout << "player O won the game, press any button to return to menu" << endl;
	_getch(); // wait till player presses a key to exit
	}

	displayMenuScreen(); // display main menu so players can choose to play again
	return 0;
}

int askPlayersToMove(int playerOne,int playerTwo)
{
	

	cout << "enter your X somewhere on the board ";
	cin >> playerOne;
	cout << "enter your O somewhere on the board ";
	cin >> playerTwo;
	
	if (playerOne == 1)
		board[0][0] ='X';
	else if (playerOne == 2)
		board[0][1] = 'X';
	else if (playerOne == 3)
		board[0][2] = 'X';
	else if (playerOne == 4)
		board[1][0] = 'X';
	else if (playerOne == 5)
		board[1][1] = 'X';
	else if (playerOne == 6)
		board[1][2] = 'X';
	else if (playerOne == 7)
		board[2][0] = 'X';
	else if (playerOne == 8)
		board[2][1] = 'X';
	else if (playerOne == 9)
		board[2][2] = 'X';
	
	if (playerTwo == 1)
		board[0][0] = 'O';
	else if (playerTwo == 2)
		board[0][1] = 'O';
	else if (playerTwo == 3)
		board[0][2] = 'O';
	else if (playerTwo == 4)
		board[1][0] = 'O';
	else if (playerTwo == 5)
		board[1][1] = 'O';
	else if (playerTwo == 6)
		board[1][2] = 'O';
	else if (playerTwo == 7)
		board[2][0] = 'O';
	else if (playerTwo == 8)
		board[2][1] = 'O';
	else if (playerTwo == 9)
		board[2][2] = 'O';

	return 0;
}
 
void boardDisplay()
{ // display board so player knows the situation of the gmae
	cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
	cout << "-----------" << endl;
	cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
	cout << "-----------" << endl;
	cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;

	return;
}

bool checkForWin(bool playerOne,bool playerTwo)
{ // if true player has won and loop should be exited 
	
	
	
	// check for wins 

	// By rows
	if ('X' == board[0][0] && 'X' == board[0][1] && 'X' == board[0][2] ||
		'X' == board[1][0] && 'X' == board[1][1] && 'X' == board[1][2] ||
		'X' == board[2][0] && 'X' == board[2][1] && 'X' == board[2][2])
	{
		playerOne = true;
	}

	// by colums
	else if ('X' == board[0][0] && 'X' == board[1][0] && 'X' == board[2][0] ||
		'X' == board[0][1] && 'X' == board[1][1] && 'X' == board[2][1] ||
		'X' == board[0][2] && 'X' == board[1][2] && 'X' == board[2][2])
	{
		playerOne = true;
	}

	// by diagonal
	else if ('X' == board[0][0] && 'X' == board[1][1] && 'X' == board[2][2] ||
		'X' == board[2][2] && 'X' == board[1][1] && 'X' == board[0][0])
	{
		playerOne = true;
	}
	else if ('O' == board[0][0] && 'O' == board[0][1] && 'O' == board[0][2] ||
		'O' == board[1][0] && 'O' == board[1][1] && 'O' == board[1][2] ||
		'O' == board[2][0] && 'O' == board[2][1] && 'O' == board[2][2])
	{
		playerTwo = true;
	}

	else if ('O' == board[0][0] && 'O' == board[1][0] && 'O' == board[2][0] ||
		'O' == board[0][1] && 'O' == board[1][1] && 'O' == board[2][1] ||
		'O' == board[0][2] && 'O' == board[1][2] && 'O' == board[2][2])
	{
		playerTwo = true;
	}

	else if ('O' == board[0][0] && 'O' == board[1][1] && 'O' == board[2][2] ||
		'O' == board[2][2] && 'O' == board[1][1] && 'O' == board[0][0])
	{
		playerTwo = true;
	}

	return 0; // if nothing is true return nothing 
}

int playerHasQuit()
{
	bool gameOverLegLoss = false;
	int choice = 0;
	do
	{
		if (choice ==1)
		{

			gameOverLegLoss = true;
		}

		cout << "You are quitting press any" << endl;
		cout << "key to return to the main menu" << endl;

		
	} while (!gameOverLegLoss);

	return gameOverLegLoss;
}

// ---------  End of human v human functions -----------

int humanVai()
{
	// initialize and declare  players
	bool playerOne = false;
	bool AI1 = false;
	bool playerHasQuit3 = false;

	if (playerHasQuit3== 1) // player quitting game
	{
		playerHasQuit2();
	}

	// display board
	boardDisplay();
	do
	{


		// allow players to enter on the board
		askPlayersToMove1(playerOne);

		// Display board after user selection
		system("cls"); // clear board so it dosent redisplay all the time
		boardDisplay();

		// check for win
		checkForWinAI();

		//check if any spots available for AI to move to
		MovesAvailableAI();

		//minimax function, evaluates check for win function and moves available
		minimaxAI();

	} while (!playerOne || !AI1 || !playerHasQuit3);
	//--------------------------------- end of loop 

	if (playerOne == true) // meesage to player if they've won
	{
		cout << "player X won the game, press any button to return to menu" << endl;
		_getch();
	}
	else if (AI1 == true)
	{
		cout << "AI has won the game, press any button to return to menu" << endl;
		_getch(); // wait till player presses a key to exit
	}

	displayMenuScreen(); // display main menu so players can choose to play again
	return 0;
}

int checkForWinAI()// user is X, AI is O
{
	// check for wins 

// By rows
	if ('X' == board[0][0] && 'X' == board[0][1] && 'X' == board[0][2] ||
		'X' == board[1][0] && 'X' == board[1][1] && 'X' == board[1][2] ||
		'X' == board[2][0] && 'X' == board[2][1] && 'X' == board[2][2])
	{
		return 'X';
	}

	// by colums
	else if ('X' == board[0][0] && 'X' == board[1][0] && 'X' == board[2][0] ||
		'X' == board[0][1] && 'X' == board[1][1] && 'X' == board[2][1] ||
		'X' == board[0][2] && 'X' == board[1][2] && 'X' == board[2][2])
	{
		return 'X';
	}

	// by diagonal
	else if ('X' == board[0][0] && 'X' == board[1][1] && 'X' == board[2][2] ||
		'X' == board[2][2] && 'X' == board[1][1] && 'X' == board[0][0])
	{
		return 'X';
	}

	//AI movement

	else if ('O' == board[0][0] && 'O' == board[0][1] && 'O' == board[0][2] ||
		'O' == board[1][0] && 'O' == board[1][1] && 'O' == board[1][2] ||
		'O' == board[2][0] && 'O' == board[2][1] && 'O' == board[2][2])
	{
		return 'O' +10;
	}

	else if ('O' == board[0][0] && 'O' == board[1][0] && 'O' == board[2][0] ||
		'O' == board[0][1] && 'O' == board[1][1] && 'O' == board[2][1] ||
		'O' == board[0][2] && 'O' == board[1][2] && 'O' == board[2][2])
	{
		return 'O' +10;
	}

	else if ('O' == board[0][0] && 'O' == board[1][1] && 'O' == board[2][2] ||
		'O' == board[2][2] && 'O' == board[1][1] && 'O' == board[0][0])
	{
		return 'O' +10;
	}

	
	return 0; // if none of the bool statements are true return nothing
}

int minimaxAI(int depth, int AI, bool maxMove) // returns value
{


	int scoreAI = checkForWinAI();

	if (scoreAI == +10)
		return scoreAI;

	if (MovesAvailableAI() == false)
		return 0;

	if (maxMove) // get best move for AI to win 
	{
		int best = -1000;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (board[i][j] = '_')
				{
					board[i][j] = AI;

					best = max(best, minimaxAI(AI, depth + 1, !maxMove)); // call maximiser

					board[i][j] ='_';
				}
			}
		}
	}


	return best;
}

bool MovesAvailableAI() // checking weather theres any moves left
{


	for (int i= 0; i< 3; i++)
	{
		for (int j= 0; j < 3;j++)
		{
			if (board[i][j]== '_')
			{
				return true;
			}
			else
				return false;
		}
	}
}

int playerHasQuit2()
{
	bool gameOverLegLoss2 = false;
	int choice2 = 0;
	do
	{
		if (choice2 == 1)
		{

			gameOverLegLoss2 = true;
		}

		cout << "You are quitting press any" << endl;
		cout << "key to return to the main menu" << endl;


	} while (!gameOverLegLoss2);

	return gameOverLegLoss2;
}

int askPlayersToMove1(int playerOne)
{
	cout << "enter your X somewhere on the board ";
	cin >> playerOne;

	if (playerOne == 1)
		board[0][0] = 'X';
	else if (playerOne == 2)
		board[0][1] = 'X';
	else if (playerOne == 3)
		board[0][2] = 'X';
	else if (playerOne == 4)
		board[1][0] = 'X';
	else if (playerOne == 5)
		board[1][1] = 'X';
	else if (playerOne == 6)
		board[1][2] = 'X';
	else if (playerOne == 7)
		board[2][0] = 'X';
	else if (playerOne == 8)
		board[2][1] = 'X';
	else if (playerOne == 9)
		board[2][2] = 'X';

	return 0;
}

// -------- End of human v AI functions ------------

int displayMenuScreen()
{
	bool validChoice = false; /// until they enter 1,2 or 3
	int choice = 0;
	string error = "";

	while (!validChoice)
	{
		

		// Here i use `red` to change the foreground color, then go back to `white`.
		// To see all colours and functions of termcolour, type `termcolor::` and let 
		cout << green  << "1"  << ": Play vs a friend \n";
		cout << green  << "2"  << ": Play against AI \n";
		cout << green  << "3"  << ": Exit \n\n";
		cout << green  << "\t Enter your choice > ";

		if (!error.empty()) // If the player messed up, the error string won't be empty
		{
			cout << "\t" << error << endl;
			cout << "\t\t\t";
		}
		cin >> choice;

		//There's no 0 in the menu , and choices end gives us a limit to stay below
		if (choice > 0 && choice < Menu::END)
		{
			validChoice = true;
		}
		else
		{
			error = "There is no " + to_string(choice) + " Try Again";
			system("cls");    // Need to clear again before redrawing menu
		}
	}
	return choice;
}

void displayExitScreen()
{
    cout << "press any key to exit";
    _getch();
    return;
}
