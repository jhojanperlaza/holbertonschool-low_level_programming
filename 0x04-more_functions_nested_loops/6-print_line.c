#include "main.h"
/**
* print_line - Entry point
*@n: is a the iterador
*i: is a condition
* Return: Always 0 (Success)
*/
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		if (n == 0)
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
