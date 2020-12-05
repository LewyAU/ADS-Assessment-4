#include "FunctionProtos.h"


int main()
{
	int choice = 0;
	
	do /// Core loop ; shows menus, goes to screens or exits based on player choice
	{
		system("cls");
		choice = displayMenuScreen();

		if (choice == 1)
		{
			system("cls");
			humanVhuman();
		}
		else if (choice == 2)
		{
			system("cls");
			humanVai();
		}
		
		// Loop back to 'do' if choice is not 2 

	} while (choice != 3);

	system("cls");
	displayExitScreen();
	
	return 0;
}