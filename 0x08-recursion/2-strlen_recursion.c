#include "main.h"
/**
* _strlen_recursion - mi first program with recursion
*@s:is a pointer that contain one char
* Return: the answer
*/
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	return (1+_strlen_recursion(s+1));
}
