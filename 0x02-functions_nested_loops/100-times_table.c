#include "main.h"
/**
*print_times_table - Write a function that prints the n times table.
*@n: number of input
* Return: the answer
*/
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 0)
		_putchar('0');
	for (b = 0; b <= n && n < 15 && n > 0; b++)
	{
		for (a = 0; a <= n; a++)
		{
			c = a * b;
			if (a != 0 && c < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (a != 0 && c >= 100)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (a == 0)
				_putchar('0');
			if (c >= 10 && c <= 99)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (c >= 100)
			{
				_putchar((c / 100) + '0');
				_putchar(((c / 10)) % 10 + '0');
				_putchar((c % 10) + '0');
			}
			if ((c < 10) && (a != 0))
			{
				_putchar(' ');
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
