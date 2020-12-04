#include "NewGame.h"
void NewGame()
{
	player1.move = 0;
	player2.move = 0;
	system("cls");
	DrawBoard(14);//DRAW
	DrawOUTLine(14);
	DrawINLine(14);
	Draw4corner(14);
	//Profile();
	ResetData();//DATA->ResetData.cpp
	ShowConsoleCursor(1);
	ShowGuide();
	MenuINGame();
	TextColor(ColorCode_DarkCyan);
	X();//MAIN->GAME->MENU_GAME.cpp
	TextColor(default_ColorCode);
	O();//MAIN->GAME->MENU_GAME.cpp
	GotoXY(_X, _Y);//Console.cpp
	Process();//GAME->Process->Process.cpp
}