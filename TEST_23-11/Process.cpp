#include "Process.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
COORD coord;
int nho[3];
void Process()
{
	int Enter = 1,uty=0;
	while (1)
	{
		
		char COMMAND = toupper(_getch());
		if (COMMAND == 'D' || COMMAND == 77) MoveLeft();//MAIN_GAME->GAME->Control->Move.cpp
		if (COMMAND == 'A' || COMMAND == 75) MoveRight();
		if (COMMAND == 'W' || COMMAND == 72) MoveUp();
		if (COMMAND == 'S' || COMMAND == 80) MoveDown();
		if (COMMAND == 'N')
		{
			ResetData();
			DrawBoard(14);
			GotoXY(LEFT, TOP);
		}
		if (COMMAND == 'Z' && uty==1)
		{
			GotoXY(nho[1], nho[2]);
			cout << ".";
			
			int x = (nho[1] - LEFT) / 4;
			int y = (nho[2] - TOP) / 2;
			_A[y][x].c = 0;
			if (uty == 1)
			{
				if (_TURN == 1)
				{
					player2.move--;
					TextColor(ColorCode_DarkCyan);
					X();
					TextColor(default_ColorCode);
					O();
				}
				else
				{
					player1.move--;
					TextColor(default_ColorCode);
					X();//MENU->GAME->MENU_GAME.cpp
					TextColor(ColorCode_DarkRed);
					O();
				}
				
			}
			_TURN = 1 - _TURN;
			if (_TURN == 1)
			{
				TextColor(ColorCode_DarkCyan);
				X();
				TextColor(default_ColorCode);
				O();
			}
			else
			{
				TextColor(default_ColorCode);
				X();//MENU->GAME->MENU_GAME.cpp
				TextColor(ColorCode_DarkRed);
				O();
			}
			_X = nho[1];
			_Y = nho[2];
			GotoXY(nho[1], nho[2]);
			uty = 0;
		}
		if (COMMAND == 27)
		{
			ChooseMENUINGAME();
			ShowConsoleCursor(1);
			
			GotoXY(_X, _Y);
		}
		if (COMMAND == 13 || COMMAND == 32)
		{
			int T = Check(_X, _Y);//MAIN_GAME->GAME->Process->Check.cpp
			if (T == 1)
			{
				TextColor(ColorCode_DarkCyan);
				cout << "X";
				player1.move++;
				TextColor(default_ColorCode);
				X();//MENU->GAME->MENU_GAME.cpp
				TextColor(ColorCode_DarkRed);
				O();
				//Check123++;
				coord.X = _X;
				coord.Y = _Y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
				_TURN = 0;
				nho[1] = _X;
				nho[2] = _Y;
			}
			else if (T == -1)
			{
				TextColor(ColorCode_DarkRed);
				cout << "O";
				player2.move++;
				TextColor(ColorCode_DarkCyan);
				X();
				TextColor(default_ColorCode);
				O();
				//Check123++;
				coord.X = _X;
				coord.Y = _Y;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
				_TURN = 1;
				nho[1] = _X;
				nho[2] = _Y;
			}
			else if (T == 0) Enter = 0;
			if (Enter == 1)
			{
				uty = 1;
				if (Process_Final(_X, _Y,1-_TURN) == 1)//GAME->Process->Process_Final.cpp
				{
					END(1-_TURN);
				}
				else
				{
					GotoXY(_X, _Y);
				}
				//else{}
			}
			Enter = 1;
		}
	}
}