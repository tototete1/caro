#include "SAVE.h"
#include <fstream>
#include <iostream>
using namespace std;
void C21(int t)
{
	for (int i = 1; i <= t; i++) cout << " ";
}
void Reset_Menu()
{
	int X = LEFT + 4 * BOARD_SIZE + 2;
	for (int i = 0; i <= 8; i++) {
		GotoXY(X, 19 + i);
		C21(119 - X);
	}
}
void Show_Selection1(int sel, int k)
{
	int X = LEFT + 4 * BOARD_SIZE + 2, Y = 20;
	TextColor(ColorCode_DarkRed);
	GotoXY(X + 15 - 5, Y + sel);
	cout << ">>";
	GotoXY(X + 15 - 5, Y + sel + 1 * (k == 1) - 1 * (k == 2));
	cout << "  ";
	if (k == 2 && sel == 1) {
		GotoXY(X + 15 - 5, Y + 7);
		cout << "  ";
	}
	if (k == 1 && sel == 7)
	{
		GotoXY(X + 15 - 5, Y + 1);
		cout << "  ";
	}
}
void Input_name_Save()
{
	ifstream fi("name_save.txt");
	string file_save_1, file_save_2, file_save_3, file_save_4, file_save_5, file_save_6;
	//fi >> file_save_1 >> file_save_2 >> file_save_3 >> file_save_4 >> file_save_5 >> file_save_6;
	fi >> file_save_1;
	fi.ignore();
	fi >> file_save_2;
	fi.ignore();
	fi >> file_save_3;
	fi.ignore();
	fi >> file_save_4;
	fi.ignore();
	fi >> file_save_5;
	fi.ignore();
	fi >> file_save_6;
	fi.ignore();
	Reset_Menu();
	int X = LEFT + 4 * BOARD_SIZE + 2;
	TextColor(ColorCode_Blue);
	GotoXY(X + 23, 19);
	cout << "SAVE";
	GotoXY(X + 15, 21);
	string name_save;
	cout << "Input name file save: ";
	cin >> name_save;
	Reset_Menu();
	GotoXY(X + 15, 19);
	cout << "Which file should you save to: ";
	TextColor(ColorCode_DarkRed);
	GotoXY(X + 15 - 5, 21);
	cout << ">>";
	TextColor(ColorCode_DarkCyan);
	GotoXY(X + 15, 21);
	cout << "File 1: " << file_save_1;
	GotoXY(X + 15, 22);
	cout << "File 2: " << file_save_2;
	GotoXY(X + 15, 23);
	cout << "File 3: " << file_save_3;
	GotoXY(X + 15, 24);
	cout << "File 4: " << file_save_4;
	GotoXY(X + 15, 25);
	cout << "File 5: " << file_save_5;
	GotoXY(X + 15, 26);
	cout << "File 6: " << file_save_6;
	GotoXY(X + 15, 27);
	cout << "Exit";
	int selection = 1, k = 1;
	while (1)
	{
		TextColor(ColorCode_DarkCyan);

		char move = toupper(_getch());
		if (move == 'S' || move == 72)
		{
			selection++;
			if (selection == 8) selection = 1;
			k = 2;
		}
		if (move == 'W' || move == 80)
		{
			selection--;
			if (selection == 0) selection = 7;
			k = 1;
		}
		Show_Selection1(selection, k);
		
		TextColor(default_ColorCode);
		if (move == 13)
		{
			switch (selection)
			{
			case 1:
			{
				file_save_1 = name_save;
				GotoXY(X + 15, 21);
				cout << "File 1: " << file_save_1;
				break;
			}
			case 2:
			{
				file_save_2 = name_save;
				GotoXY(X + 15, 22);
				cout << "File 2: " << file_save_2;
				break;
			}
			case 3:
			{
				
				file_save_3 = name_save;
				GotoXY(X + 15, 23);
				cout << "File 3: " << file_save_3;
				break;
			}
			case 4:
			{
				
				file_save_4 = name_save;
				GotoXY(X + 15, 24);
				cout << "File 4: " << file_save_4;
				break;
			}
			case 5:
			{
				
				file_save_5 = name_save;
				GotoXY(X + 15, 25);
				cout << "File 5: " << file_save_5;
				break;
			}
			case 6:
			{
				
				file_save_6 = name_save;
				GotoXY(X + 15, 26);
				cout << "File 6: " << file_save_6;
				break;
			}
			case 7:
			{
				ofstream fo("name_save.txt");
				fo << file_save_1 << endl << file_save_2 << endl << file_save_3 << endl << file_save_4 << endl << file_save_5 << endl << file_save_6;
				Reset_Menu();
				ChooseMENUINGAME();
			}
			}
			
		}
	}
	
}