#include "main.h"
/**
* more_numbers - Entry point
*a: is a the iterador
*i: is a condition
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int a;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar (a + '0');
		}
		_putchar ('\n');
		i++;
	}
}
