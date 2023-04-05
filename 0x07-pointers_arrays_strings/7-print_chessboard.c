#include"main.h"

/**
* print_chessboard - function that prints the chessboard,
* i: is a columns, j: is a rows.
*@a: is array.
*/

void print_chessboard(char (*a)[8])
{
	int i, j;
		for (j = 0; j < 8; j++)
		{
		for (i = 0; i < 8; i++)
		{
		putchar (a[j][i]);
		}
		putchar ('\n');
		}
}
