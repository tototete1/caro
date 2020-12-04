#include "MODE.h"
#include <iostream>
using namespace std;
void MODE()
{
	system("cls");
	GotoXY(59 - 4, 10);
	TextColor(ColorCode_Blue);
	cout << "CHOOSE MODE:";
	GotoXY(59-3, 12);
	TextColor(ColorCode_Cyan);
	cout << ">>  PVP  <<";
	GotoXY(59-3, 14);
	TextColor(ColorCode_Red);
	cout << "    PVE    ";
	int selection1 = 1;
	while (1)
	{
		char move1 = toupper(_getch());
		if (move1 == 'S' || move1 == 80)
		{
			selection1++;
				if (selection1 == 3) selection1 = 1;
		}
		if (move1 == 'W' || move1 == 72)
		{
			selection1--;
				if (selection1 == 0) selection1 = 2;
		}
		switch (selection1)
		{
		case 1:
			GotoXY(59-3, 12);
			TextColor(ColorCode_Cyan);
			cout << ">>  PVP  <<";
			GotoXY(59-3, 14);
			TextColor(ColorCode_Red);
			cout << "    PVE    ";
			break;
		case 2:
			GotoXY(59-3 , 12);
			TextColor(ColorCode_Red);
			cout << "    PVP    ";
			GotoXY(59-3, 14);
			TextColor(ColorCode_Cyan);
			cout << ">>  PVE  <<";
			break;
		}
		if (move1 == 13 || move1 == 32)
		{
			TextColor(default_ColorCode);
			INPUT1();
		}
	}
}