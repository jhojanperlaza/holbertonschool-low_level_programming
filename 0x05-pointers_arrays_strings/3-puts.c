#include "main.h"
/**
 * _puts - this function reset n for the value 98
 * @str: a char value
 *
 * Return: nothing.
 */

void _puts(char *str)
{
	int i=0;
	while (*(str+i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

