#ifndef _PROCESS_FINAL_
#define _PROCESS_FINAL_
#include "DRAW.h"
#include "Console.h"
//extern int XOTT[9] = { 0,-1,0,1,1,1,0,-1,-1 };
//extern int YOTT[9] = { 0,-1,-1,-1,0,1,1,1,0 };
struct DATA { int t, n, c1, c2; };
void Check11(int x, int y, int x1, int y1, DATA S, DATA T, bool u);

void Check12(int x, int y, int x2, int y2, DATA S, DATA T, DATA R, bool u);
bool Check1(int X, int Y);
bool Process_Final(int X, int Y,int TURN);
#endif // !_PROCESS_FINAL_
