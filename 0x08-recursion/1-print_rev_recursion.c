#include "main.h"
/**
* _print_rev_recursion - mi first program with recursion
*@s:is a pointer that contain one char
* Return: the answer
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

