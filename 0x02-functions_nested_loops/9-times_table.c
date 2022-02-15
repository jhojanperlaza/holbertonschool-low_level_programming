#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
*times_table - is a fuction to prints the lower character.
*a: letter being tested
*b: letter being tested
*c: letter being tested
* Return: Always 0 (Success)
*/
void times_table(void)

{
	int a;
	int b;
	int c;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 9; a++)
		{
			c = a * b;
			if (a != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (a == 0)
			{
				_putchar('0');
			}
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
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
