#include "main.h"
/**
*print_square - Entry point
*@size: is a the iterador
*f: is a condition
*c: is a condition
* Return: Always 0 (Success)
*/
void print_square(int size)
{
	int f, c;

	if (size > 0)
	{
		for (f = 1; f <= size; f++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
