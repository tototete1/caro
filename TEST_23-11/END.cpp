#include <iostream>
#include "END.h"
#include <Windows.h>
using namespace std;
void WIN(int TURN)
{
	if (TURN == 1) {
		int U = 30;
		GotoXY(U, 0);
		cout << "_|_|_|    _|                                                _|  " << endl; GotoXY(U, 1);
		cout << "_|    _|  _|    _|_|_|  _|    _|    _|_|    _|  _|_|      _|_|  " << endl; GotoXY(U, 2);
		cout << "_|_|_|    _|  _|    _|  _|    _|  _|_|_|_|  _|_|            _|  " << endl; GotoXY(U, 3);
		cout << "_|        _|  _|    _|  _|    _|  _|        _|              _|  " << endl; GotoXY(U, 4);
		cout << "_|        _|    _|_|_|    _|_|_|    _|_|_|  _|              _|  " << endl; GotoXY(U, 5);
		cout << "                              _|            " << endl; GotoXY(U, 6);
		cout << "                          _|_|                                         " << endl;
		U = 40;
		GotoXY(U, 8);
		cout << "                    _|" << endl; GotoXY(U, 9);
		cout << "_|      _|      _|      _| _| _|" << endl; GotoXY(U, 10);
		cout << "_|      _|      _|  _|  _|      _|   " << endl; GotoXY(U, 11);
		cout << "  _|  _|  _|  _|    _|  _|      _|   " << endl; GotoXY(U, 12);
		cout << "    _|      _|      _|  _|      _|     " << endl;
	}
	else
	{
		int U = 30, T = 0;
		GotoXY(U, T + 0);
		cout << "_|_|_|    _|                                                _|_|      " << endl; GotoXY(U, 1);
		cout << "_|    _|  _|    _|_|_|  _|    _|    _|_|    _|  _|_|      _|    _|    " << endl; GotoXY(U, 2);
		cout << "_|_|_|    _|  _|    _|  _|    _|  _|_|_|_|  _|_|              _|      " << endl; GotoXY(U, 3);
		cout << "_|        _|  _|    _|  _|    _|  _|        _|              _|        " << endl; GotoXY(U, 4);
		cout << "_|        _|    _|_|_|    _|_|_|    _|_|_|  _|            _|_|_|_|    " << endl; GotoXY(U, 5);
		cout << "                              _|            " << endl; GotoXY(U, 6);
		cout << "                          _|_|                                         " << endl; GotoXY(U, 7);
		U = 40;
		GotoXY(U, 8);
		cout << "                    _|" << endl; GotoXY(U, 9);
		cout << "_|      _|      _|      _| _| _|" << endl; GotoXY(U, 10);
		cout << "_|      _|      _|  _|  _|      _|   " << endl; GotoXY(U, 11);
		cout << "  _|  _|  _|  _|    _|  _|      _|   " << endl; GotoXY(40, 12);
		cout << "    _|      _|      _|  _|      _|     ";
	}
}
void LOSEA(int TURN)
{
	if (TURN == 1) {
		int U = 30, T = 17;
		GotoXY(U, T);
		cout << "_|_|_|    _|                                                _|  " << endl; GotoXY(U, T + 1);
		cout << "_|    _|  _|    _|_|_|  _|    _|    _|_|    _|  _|_|      _|_|  " << endl; GotoXY(U, T + 2);
		cout << "_|_|_|    _|  _|    _|  _|    _|  _|_|_|_|  _|_|            _|  " << endl; GotoXY(U, T + 3);
		cout << "_|        _|  _|    _|  _|    _|  _|        _|              _|  " << endl; GotoXY(U, T + 4);
		cout << "_|        _|    _|_|_|    _|_|_|    _|_|_|  _|              _|  " << endl; GotoXY(U, T + 5);
		cout << "                              _|            " << endl; GotoXY(U, T + 6);
		cout << "                          _|_|                                         " << endl;
		U = 40;
		GotoXY(U, T + 8);
		cout << "_|" << endl; GotoXY(U, T + 9);
		cout << "_|    _|_|      _|_|_|    _|_|    " << endl; GotoXY(U, T + 10);
		cout << "_|  _|    _|  _|_|      _|_|_|_|  " << endl; GotoXY(U, T + 11);
		cout << "_|  _|    _|      _|_|  _|        " << endl; GotoXY(U, T + 12);
		cout << "_|    _|_|    _|_|_|      _|_|_| ";

	}
	else
	{
		int U = 30, T = 17;
		GotoXY(U, T + 0);
		cout << "_|_|_|    _|                                                _|_|      " << endl; GotoXY(U, T + 1);
		cout << "_|    _|  _|    _|_|_|  _|    _|    _|_|    _|  _|_|      _|    _|    " << endl; GotoXY(U, 2 + T);
		cout << "_|_|_|    _|  _|    _|  _|    _|  _|_|_|_|  _|_|              _|      " << endl; GotoXY(U, 3 + T);
		cout << "_|        _|  _|    _|  _|    _|  _|        _|              _|        " << endl; GotoXY(U, 4 + T);
		cout << "_|        _|    _|_|_|    _|_|_|    _|_|_|  _|            _|_|_|_|    " << endl; GotoXY(U, 5 + T);
		cout << "                              _|            " << endl; GotoXY(U, 6 + T);
		cout << "                          _|_|                                         " << endl;
		U = 40;
		GotoXY(U, T + 8);
		cout << "_|" << endl; GotoXY(U, T + 9);
		cout << "_|    _|_|      _|_|_|    _|_|    " << endl; GotoXY(U, 10 + T);
		cout << "_|  _|    _|  _|_|      _|_|_|_|  " << endl; GotoXY(U, 11 + T);
		cout << "_|  _|    _|      _|_|  _|        " << endl; GotoXY(U, 12 + T);
		cout << "_|    _|_|    _|_|_|      _|_|_| ";

	}
}
void LINE()
{
	GotoXY(0, 13);
	for (int i = 1; i <= 119; i++) cout << (char)196;
	GotoXY(0, 16);
	for (int i = 1; i <= 119; i++) cout << (char)196;
	GotoXY(0, 13);
	cout << (char)218;
	GotoXY(0, 16);
	cout << (char)192;
	GotoXY(119, 13);
	cout << (char)191;
	GotoXY(119, 16);
	cout << (char)217;
	GotoXY(0, 14);
	cout << (char)179;
	GotoXY(0, 15);
	cout << (char)179;
	GotoXY(119, 14);
	cout << (char)179;
	GotoXY(119, 15);
	cout << (char)179;
}
void CHAR1()
{

	GotoXY(59 - 10, 14);
	TextColor(ColorCode_DarkYellow);

	cout << "DO YOU WANT CONTINUE?";
	GotoXY(59 - 10 + 5 - 3 - 3, 15);
	TextColor(ColorCode_Pink);
	cout << ">> YES <<";
	GotoXY(59 - 10 + 5 + 10, 15);	
	TextColor(ColorCode_DarkYellow);
	cout << "NO";
	int U = 0, T = 0; int selection1 = 1;
	while (1)
	{

		char move1 = toupper(_getch());
		GotoXY(U, T);
		U = U + 3;;
		if (move1 == 'D' || move1 == 77)
		{
			selection1++;
			if (selection1 == 3) selection1 = 1;
		}
		if (move1 == 'A' || move1 == 75)
		{
			selection1--;
			if (selection1 == 0) selection1 = 2;
		}
		switch (selection1)
		{
		case 1:
			GotoXY(59 - 10 + 5 - 3 - 3, 15);
			TextColor(ColorCode_Pink);
			cout << ">> YES <<";
			GotoXY(59 - 10 + 5 + 7, 15);
			TextColor(ColorCode_DarkYellow);
			cout << "   NO   ";
			break;
		case 2:
			GotoXY(59 - 10 + 5 - 3 - 3, 15);
			TextColor(ColorCode_DarkYellow);
			cout << "   YES   ";
			GotoXY(59 - 10 + 5 + 7, 15);
			TextColor(ColorCode_Pink);
			cout << ">> NO <<";
			break;
		}
		if (move1 == 13 || move1 == 32)
		{
			if (selection1 == 1)
			{
				TextColor(default_ColorCode);
				NewGame();
			
			}
			else {
				system("cls");
				MAIN();
			}
		}
	}
}
void END(int TURN)
{
	system("cls");
	ShowConsoleCursor(0);
	TextColor(ColorCode_Green);
	WIN(TURN);
	Sleep(1000);
	TextColor(ColorCode_DarkCyan);
	WIN(TURN);
	TextColor(ColorCode_Blue);
	Sleep(1000);
	LOSEA(1 - TURN);
	Sleep(1000);
	TextColor(ColorCode_Red);
	LOSEA(1 - TURN);
	Sleep(1000);
	TextColor(default_ColorCode);
	LINE();
	CHAR1();
}