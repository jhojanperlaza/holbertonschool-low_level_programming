#include "main.h"
/**
*print_diagonal - Entry point
*@n: is a the iterador
*f: is a condition
*c: is a condition
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int f;
	int c;

	if (n > 0)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		for (f = 1; f <= n; f++)
		{
			for (c = 0; c <= f; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');	
		}
	} 
	else
	{
	_putchar('\n');
	}
}
