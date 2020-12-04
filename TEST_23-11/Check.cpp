#include "Check.h"
#include <iostream>
using namespace std;
int Check(int x, int y)
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			if (_A[i][j].x == x && _A[i][j].y == y && _A[i][j].c == 0)
			{
				if (_TURN == 1) _A[i][j].c = 1;
				else _A[i][j].c = -1;
				return _A[i][j].c;
			}
		}
	}
	return 0;
}