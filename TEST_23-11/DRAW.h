#ifndef _DRAW_
#define _DRAW_
#include "Console.h"
#define BOARD_SIZE 14
#define LEFT 2
#define TOP 1

struct _POINT { int x, y, c; };
extern _POINT _A[BOARD_SIZE][BOARD_SIZE];

extern bool _TURN;
extern int _COMMAND;
extern int _X, _Y;
void DrawBoard(int);
void Draw4corner(int);
void DrawOUTLine(int);
void DrawINLine(int);
#endif // !_DRAW_

