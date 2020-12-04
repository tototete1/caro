#include "DRAW.h"
#include <iostream>
using namespace std;

void DrawBoard(int pSize) {
	for (int i = 0; i < pSize; i++) {
		for (int j = 0; j < pSize; j++) {
			GotoXY(LEFT + 4 * i, TOP + 2 * j);
			cout << ".";
		}
	}
}
void Draw4corner(int pSize)
{
	GotoXY(0, 0);
	cout << (char)201;
	GotoXY(0, TOP + pSize * 2 - 1);
	cout << (char)200;
	GotoXY(LEFT + (pSize - 1) * 4 + 2, 0);
	cout << (char)203;
	GotoXY(LEFT + (pSize - 1) * 4 + 2, TOP + (pSize - 1) * 2 + 1);
	cout << (char)188;
	GotoXY(LEFT + (pSize - 1) * 4 + 2, 14);
	cout << (char)215;
	GotoXY(119, 0);
	cout << (char)187;
	GotoXY(119, 2 * pSize);
	cout << (char)188;
	GotoXY(LEFT + (pSize - 1) * 4 + 2, 2 * pSize);
	cout << (char)202;
}
void DrawOUTLine(int pSize)
{
	//Dung
	for (int i = 1; i <= (pSize - 1) * 2 + 1; i++)
	{
		GotoXY(0, i);
		if (i % 2 != 0) cout << (char)186;
		if (i % 2 == 0) cout << (char)199;
		GotoXY(LEFT + (pSize - 1) * 4 + 2, i);
		if (i % 2 != 0) cout << (char)186;
		if (i % 2 == 0) cout << (char)182;
		if (i == 2)
		{
			GotoXY(LEFT + (pSize - 1) * 4 + 2, i);
			cout << (char)215;
		}
	}
	//Ngang
	for (int i = 1; i <= LEFT + (pSize - 1) * 4 + 1; i++)
	{
		GotoXY(i, 0);
		if (i % 4 != 0) cout << (char)205;
		else cout << (char)209;
		GotoXY(i, TOP + (pSize - 1) * 2 + 1);
		if (i % 4 != 0) cout << (char)205;
		else cout << (char)207;
	}
	//Ngang mo rong
	for (int i = LEFT + (pSize - 1) * 4 + 3; i < 119; i++)
	{
		GotoXY(i, 0);
		cout << (char)205;
		GotoXY(i, 14);
		cout << (char)196;
		GotoXY(i, 2 * pSize);
		cout << (char)205;
	}
	//Dung mo rong
	GotoXY(31 + 60 - 3, 0);
	cout << (char)203;
	for (int i = 1; i <= (2 * pSize - 1) + 1; i++)
	{
		if (i <= pSize) {
			GotoXY(31 + 60 - 3, i);
			cout << (char)186;
		}
		if (i == 14) { GotoXY(31 + 60 - 3, i); cout << (char)208; }
		GotoXY(119, i);
		cout << (char)186;
		if (i == 14)
		{
			GotoXY(119, i);
			cout << (char)182;
		}
		if (i == 18)
		{
			GotoXY(LEFT + 4 * (pSize-1)+2 , i);
			cout << (char)215;
			GotoXY(119, i);
			cout << (char)182;
		}
	}
}
void DrawINLine(int pSize)
{
	for (int i = 1; i <= pSize - 1; i++)
	{
		for (int j = 1; j <= TOP + (pSize - 1) * 2; j++)
		{
			GotoXY(i * 4, j);
			if (j % 2 != 0) cout << (char)179;
			else cout << (char)197;
		}
	}
	for (int i = 1; i <= pSize - 1; i++)
	{
		for (int j = 1; j <= LEFT + (pSize - 1) * 4 + 1; j++)
		{
			GotoXY(j, i * 2);
			if (j % 4 != 0) cout << (char)196;
		}
	}
	for (int j = LEFT + (pSize - 1) * 4 + 3; j < 60 + 30 * 2 - 1; j++)
	{
		GotoXY(j, 2);
		if (j != 60 + 28)cout << (char)196;
		if (j == 60 + 28) cout << (char)215;
		GotoXY(j, 18);
		cout << (char)196;

	}
}