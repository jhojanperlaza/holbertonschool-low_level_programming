#include "main.h"
/**
 *puts_half - this function reset n for the value 98
 *@str: a char value
 *len: is the variable that counts the character string for me
 *n: number of characters to print
 * Return: nothing.
 */
void puts_half(char *str)
{
	int len = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
