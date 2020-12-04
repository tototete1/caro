#ifndef _DATA_USER_
#define _DATA_USER_
#include <cstring>
#include <iostream>
using namespace std;
struct data_user
{
	long int win, lose;
	long move;
	string name;
};
extern data_user player1, player2,Player1[11],Player2[11];
#endif // !_DATA_USER_
