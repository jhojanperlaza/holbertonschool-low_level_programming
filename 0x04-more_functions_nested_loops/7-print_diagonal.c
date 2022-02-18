#include "main.h"
/**
* more_numbers - Entry point
*a: is a the iterador
*i: is a condition
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int f;
	int c;
	
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
