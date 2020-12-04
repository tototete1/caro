#include "MAIN_MENU.h"
//================
#include <iostream>
#include <stdio.h> 
#include <Windows.h>
using namespace std;

void MAIN()
{
	//HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	//SetConsoleTextAttribute(hStdOut, 13);
	int U = 13, T = 3;
	TextColor(ColorCode_Red);
	GotoXY(U, T);
	cout << "  _|_|_|      _|_|      _|_|_|        _|_|        _|_|_|      _|_|      _|      _|    _|_|_|_|" << endl;
	GotoXY(U, T + 1);
	cout << "_|          _|    _|    _|    _|    _|    _|    _|          _|    _|    _|_|  _|_|    _|" << endl;
	GotoXY(U, T + 2);
	cout << "_|          _|_|_|_|    _|_|_|      _|    _|    _|  _|_|    _|_|_|_|    _|  _|  _|    _|_|_|" << endl;
	GotoXY(U, T + 3);
	cout << "_|          _|    _|    _|    _|    _|    _|    _|    _|    _|    _|    _|      _|    _|" << endl;
	GotoXY(U, T + 4);
	cout << "  _|_|_|    _|    _|    _|    _|      _|_|        _|_|_|    _|    _|    _|      _|    _|_|_|_|" << endl;
	T = 12, U = 57;
	GotoXY(U - 1, T);
	TextColor(ColorCode_DarkCyan);
	cout << "NEW GAME";
	GotoXY(U + 1, T + 1);
	cout << "LOAD";
	GotoXY(U-1, T + 2);
	cout << "SETTINGS";
	GotoXY(U - 1+2, T + 3);
	cout << "GUIDE";
	GotoXY(U + 1, T + 4);
	cout << "EXIT";
	Selection();//MENU->MAIN->SELECTION->Selection.cpp
}