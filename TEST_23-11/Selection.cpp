#include "Selection.h"
#include "MAIN_GAME.h"
#include <iostream>
#include <cstring>
#include <conio.h>
#include <cstdlib>
using namespace std;
void Show_Selection(int selection)
{
	int U = 57, T = 12;
	switch (selection)
	{
	case 1:
		GotoXY(51, T + 4);
		TextColor(ColorCode_DarkCyan);
		cout << "       EXIT       ";
		GotoXY(U - 1 - 5, T);
		TextColor(ColorCode_Red);
		cout << ">>   NEW GAME   <<";
		GotoXY(51, T + 1);
		TextColor(ColorCode_DarkCyan);
		cout << "       LOAD       ";
		ShowConsoleCursor(0);
		break;
	case 2:
		GotoXY(U - 1 - 5, T);
		TextColor(ColorCode_DarkCyan);
		cout << "     NEW GAME     ";
		GotoXY(51, T + 1);
		TextColor(ColorCode_Red);
		cout << ">>     LOAD     <<";
		ShowConsoleCursor(0);
		GotoXY(51, T + 2);
		TextColor(ColorCode_DarkCyan);
		cout << "     SETTINGS     ";
		break;
	case 3:
		GotoXY(51, T + 1);
		TextColor(ColorCode_DarkCyan);
		cout << "       LOAD       ";
		GotoXY(51, T + 2);
		TextColor(ColorCode_Red);
		cout << ">>   SETTINGS   <<";
		GotoXY(51, T + 3);
		TextColor(ColorCode_DarkCyan);
		cout << "       GUIDE      ";
		ShowConsoleCursor(0);
		break;
	case 4:
		GotoXY(51, T + 2);
		TextColor(ColorCode_DarkCyan);
		cout << "     SETTINGS     ";
		GotoXY(51, T + 3);
		TextColor(ColorCode_Red);
		cout << ">>     GUIDE    <<";
		GotoXY(51, T + 4);
		TextColor(ColorCode_DarkCyan);
		cout << "       EXIT       ";
		ShowConsoleCursor(0);
		break;
	case 5:
		GotoXY(51, T + 3);
		TextColor(ColorCode_DarkCyan);
		cout << "       GUIDE      ";
		GotoXY(51, T + 4);
		TextColor(ColorCode_Red);
		cout << ">>     EXIT     <<";
		GotoXY(U - 1 - 5, T);
		TextColor(ColorCode_DarkCyan);
		cout << "     NEW GAME     ";
		ShowConsoleCursor(0);
		break;
	}
}
void Selection()
{
	int selection = 1;
	
	int T = 12, U = 57;
	GotoXY(U - 1-5, T);
	TextColor(ColorCode_Red);
	cout <<">>   NEW GAME   <<";
	ShowConsoleCursor(0);

	while (1)
	{
		char key = toupper(_getch());
		if (key == 'W' || key == 72)
		{
			if (selection > 1)
			{
				selection--;
			}
			else selection = 5;
		}
		if (key == 'S' || key == 80)
		{
			if (selection <5)
			{
				selection++;
			}
			else selection = 1;
		}

		//51
		Show_Selection(selection);//ở trên
		if (key == 13 || key == 32)
		{
			switch (selection)
			{
			case 1:
				MODE();//MAIN_GAME->GAME->MAIN_GAME.cpp
				break;
			case 5:
				system("cls");
				exit(0);
				break;
			}
			
		}
	}
}

/*
	GotoXY(U, T + 2);
	cout << "OPTION";
	GotoXY(U - 1, T + 3);
	cout << "TUTORIAL";
	GotoXY(U + 1, T + 4);
	cout << "EXIT";
*/