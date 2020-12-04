#include <iostream>
//========================
#include "Console.h"
#include "MAIN_MENU.h"
using namespace std;
int main()
{
	//CONSOLE
	remove_scrollbar();//Console.cpp
	FixConsoleWindow();//console.cpp
	changeFont(16);
	system("color F0");

	//MENU
	MAIN();//MAIN_MENU.cpp
	//END(1);
	return 0;
}