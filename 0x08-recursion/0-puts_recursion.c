#include "main.h"
/**
* _puts_recursion - mi first program with recursion
*@s: is a pointer that contain one char 
* Return: the answer
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1);
}
