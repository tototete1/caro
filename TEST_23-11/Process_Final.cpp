#include "Process_Final.h"
#include <iostream>
#include <algorithm>
using namespace std;
int XOTT[9] = { 0,-1,0,1,1,1,0,-1,-1 };
int YOTT[9] = { 0,-1,-1,-1,0,1,1,1,0 };

DATA B[20][20][2];
bool check(int x, int y)
{
    if ((x >= 0 && x < 14) && (y >= 0 && y < 14)) return 1;
    return 0;
}
bool checkd(int X, int Y, int TURN,int what)
{
    int x1 = X, x2 = X;
    int y1 = Y, y2 = Y;
    int dem = 0;
    while (1)
    {
        x1 = x1 + XOTT[what];
        y1 = y1 + YOTT[what];
        if (check(x1, y1) == 1 && _A[y1][x1].c == _A[Y][X].c)
        {
            dem++;
        }
        else break;
    }
    while (1)
    {
        x2 = x2 + XOTT[what+4];
        y2 = y2 + YOTT[what+4];
        if (check(x2, y2) == 1 && _A[y2][x2].c == _A[Y][X].c)
        {
            dem++;
        }
        else break;
    }
    //cout << dem;
    if (dem >= 4) return 1;
    return 0;
}


bool Process_Final(int X, int Y,int TURN)
{
    X = (X - 2) / 4;
    Y = (Y - 1) / 2;
	bool t =checkd(X, Y,TURN,2);
    bool u = checkd(X, Y, TURN,1);
    if (t < u) t = u;
    u = checkd(X, Y, TURN,3);
    if (t < u) t = u;
    u = checkd(X, Y, TURN,4);
    if (t < u) t = u;
	return t;
}