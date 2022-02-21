#include "main.h"
/**
 * _puts - this function reset n for the value 98
 * @str: a char value
 *
 * Return: nothing.
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

