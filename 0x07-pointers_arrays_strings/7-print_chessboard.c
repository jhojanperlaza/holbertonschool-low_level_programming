#include "main.h"
/**
* print_chessboard - Entry point
*@a: is a the pointer of in.
* Return: Always 0 (Success)
*/
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; i++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
