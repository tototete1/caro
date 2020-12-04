#include <iostream>
#include "INPUT1.h"
using namespace std;
data_user player1, player2,Player1[11],Player2[11];

void INPUT1()
{
	TextColor(ColorCode_DarkGreen);
	GotoXY(59 - 3, 14);
	cout << "PLAYER 1";
	GotoXY(59 - 5, 16);
	cout << "NAME: ";
	cin >>player1.name;
	GotoXY(59 - 3, 18);
	cout << "PLAYER 2";
	GotoXY(59 - 5, 20);
	cout << "NAME: ";
	cin >> player2.name;
	TextColor(default_ColorCode);
	NewGame();
}