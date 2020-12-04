#include "MENU_GAME.h"
#include <iostream>
using namespace std;
void C(int t)
{
	for (int i = 1; i <= t; i++) cout << (char)219;
}
void C1(int t)
{
	for (int i = 1; i <= t; i++) cout << " ";
}

void X()
{
	GotoXY(10 - 1 + 60, 3);
	C(2), C1(3), C(2);
	GotoXY(10 - 1 + 60, 4);
	C1(1), C(2), C1(1), C(2);
	GotoXY(10 - 1 + 60, 5);
	C1(2), C(3);
	GotoXY(10 - 1 + 60, 6);
	C1(1), C(2), C1(1), C(2);
	GotoXY(10 - 1 + 60, 7);
	C(2), C1(3), C(2);
	GotoXY(72 - 6 + 3, 1);
	cout << "PLAYER 1";
	GotoXY(60, 9);
	cout << "Name: " << player1.name;

	GotoXY(60, 10);
	cout << "Move: " << player1.move;
	GotoXY(60, 11);
	cout << "Win: " << player1.win;
	GotoXY(60, 12);
	cout << "Lose: " << player1.lose;
}
void O()
{
	GotoXY(60 + 31 + 5 + 4, 3);
	C1(1), C(6);
	GotoXY(60 + 31 + 5 + 4, 4);
	C(2), C1(4), C(2);
	GotoXY(60 + 31 + 5 + 4, 5);
	C(2), C1(4), C(2);
	GotoXY(60 + 31 + 5 + 4, 6);
	C(2), C1(4), C(2);
	GotoXY(60 + 31 + 5 + 4, 7);
	C1(1), C(6);
	GotoXY(56 + 33 + 16 - 7 + 2, 1);
	cout << "PLAYER 2";
	GotoXY(72 + 20, 9);
	cout << "Name: " << player2.name;
	GotoXY(72 + 20, 10);
	cout << "Move: " << player2.move;
	GotoXY(72 + 20, 11);
	cout << "Win: " << player2.win;
	GotoXY(72 + 20, 12);
	cout << "Lose: " << player2.lose;
}
void ShowGuide()
{
	TextColor(ColorCode_Red);
	int X = LEFT + 4 * BOARD_SIZE + 2;
	GotoXY(X, 15);
	cout << "W: Move Up";
	GotoXY(X + 13, 15);
	cout << "A: Move Right";
	GotoXY(X + 13 + 16, 15);
	cout << "S: Move Down";
	GotoXY(X + 13 + 16 + 16, 15);
	cout << "D: Move Left";
	GotoXY(X + 6, 17);
	cout << "Enter: Choose";
	GotoXY(X + 6 + 15 + 1, 17);
	cout << "Esc: Menu Game";
	GotoXY(X + 6 + 16 + 2 + 15 - 1, 17);
	cout << "Z: Undo";
	TextColor(default_ColorCode);
}
void MenuINGame()
{
	int X = LEFT + 4 * BOARD_SIZE + 2;
	TextColor(ColorCode_Blue);
	GotoXY(X + 23, 19);
	cout << "MENU  GAME";
	GotoXY(X + 24 - 5, 21);
	cout << "     NEW GAME     ";
	GotoXY(X + 24 - 5, 22);
	cout << "     CONTINUE     ";
	GotoXY(X + 24 - 5 + 2, 23);
	cout << "     SAVE     ";
	GotoXY(X + 24 + 2 - 5, 24);
	cout << "     LOAD     ";
	GotoXY(X + 24 - 5, 25);
	cout << "     SETTINGS     ";
	GotoXY(X + 24 - 5 + 2, 26);
	cout << "     MENU     ";
}
void ShowSelection(int sel, int k)
{
	int X = LEFT + 4 * BOARD_SIZE + 2;
	int Y = 20;
	TextColor(ColorCode_DarkRed);
	switch (sel) {
	case 1:
		GotoXY(X + 24, 21);
		cout << "NEW GAME";
		break;
	case 2:
		GotoXY(X + 24, 22);
		cout << "CONTINUE";
		break;
	case 3:
		GotoXY(X + 24 + 2, 23);
		cout << "SAVE";
		break;
	case 4:
		GotoXY(X + 24 + 2, 24);
		cout << "LOAD";
		break;
	case 5:
		GotoXY(X + 24, 25);
		cout << "SETTINGS";
		break;
	case 6:
		GotoXY(X + 24 + 2, 26);
		cout << "MENU";
		break;
	}
	GotoXY(X + 23 - 4, Y + sel);
	cout << ">>";
	GotoXY(X + 23 + 10 + 2, Y + sel);
	cout << "<<";
	if (k == 1)
	{
		TextColor(ColorCode_Blue);
		int WE = sel - 1;
		if (WE == 0) WE = 6;
		switch (WE) {
		case 1:
			GotoXY(X + 24, Y + WE);
			cout << "NEW GAME";
			break;
		case 2:
			GotoXY(X + 24, Y + WE);
			cout << "CONTINUE";
			break;
		case 3:
			GotoXY(X + 24 + 2, Y + WE);
			cout << "SAVE";
			break;
		case 4:
			GotoXY(X + 24 + 2, Y + WE);
			cout << "LOAD";
			break;
		case 5:
			GotoXY(X + 24, Y + WE);
			cout << "SETTINGS";
			break;
		case 6:
			GotoXY(X + 24 + 2, Y + WE);
			cout << "MENU";
			break;
		}
		GotoXY(X + 23 - 4, Y + sel - 1 + 6 * (sel == 1));
		cout << "  ";
		GotoXY(X + 23 + 10 + 2, Y + sel - 1 + 6 * (sel == 1));
		cout << "  ";
	}
	if (k == 2)
	{
		TextColor(ColorCode_Blue);
		int WE = sel + 1;
		if (WE == 7) WE = 1;
		switch (WE) {
		case 1:
			GotoXY(X + 24, Y + WE);
			cout << "NEW GAME";
			break;
		case 2:
			GotoXY(X + 24, Y + WE);
			cout << "CONTINUE";
			break;
		case 3:
			GotoXY(X + 24 + 2, Y + WE);
			cout << "SAVE";
			break;
		case 4:
			GotoXY(X + 24 + 2, Y + WE);
			cout << "LOAD";
			break;
		case 5:
			GotoXY(X + 24, Y + WE);
			cout << "SETTINGS";
			break;
		case 6:
			GotoXY(X + 24 + 2, Y + WE);
			cout << "MENU";
			break;
		}
		GotoXY(X + 23 - 4, Y + sel + 1 - sel * (sel == 6));
		cout << "  ";
		GotoXY(X + 23 + 10 + 2, Y + sel + 1 - sel * (sel == 6));
		cout << "  ";
	}
}
void ChooseMENUINGAME()
{
	ShowConsoleCursor(0);
	int X = LEFT + 4 * BOARD_SIZE + 2;
	TextColor(ColorCode_Blue);
	GotoXY(X + 23, 19);
	cout << "MENU  GAME";
	ShowSelection(1, 1);
	int	dksd = 1, selection = 1, k = 1, BREAK1 = 0;
	while (dksd == 1)
	{
		char move = toupper(_getch());
		if (move == 'S' || move == 72)
		{
			selection++;
			if (selection == 7) selection = 1;
			k = 1;
		}
		if (move == 'W' || move == 80)
		{
			selection--;
			if (selection == 0) selection = 6;
			k = 2;
		}
		ShowSelection(selection, k);
		TextColor(default_ColorCode);
		if (move == 13 || move == 32)
		{
			switch (selection)
			{
			case 1:
				NewGame();
				break;
			case 2:
				BREAK1 = 1;
				break;
			case 6:
				system("cls");
				MAIN();
				break;
			case 3:
				Input_name_Save();
				break;
			}
		}
		if (BREAK1 == 1) dksd = 0;
	}
	MenuINGame();
}
void Profile()
{
	//TextColor(ColorCode_DarkCyan);
	//CHU X
	//X();
	//CHU O
	//TextColor(ColorCode_DarkRed);
	//O();


}
/*
GotoXY(X + 24-5, 21);
cout << "NEW GAME";
GotoXY(X + 24, 22);
cout << "CONTINUE";
GotoXY(X + 24 + 2, 23);
cout << "SAVE";
GotoXY(X + 24 + 2, 24);
cout << "LOAD";
GotoXY(X + 24, 25);
cout << "SETTINGS";
GotoXY(X + 24 + 2, 26);
cout << "MENU";*/