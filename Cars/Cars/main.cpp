#include "UI/console.h"

void DisplayMenu(UserInterface* GUI)
{
	GUI->MainMenu();
}

int main()
{
	UserInterface* console = new ConsoleUI();
	

	return 0;
}