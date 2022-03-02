#include "main.h"

/**
* _strlen_recursion 
*@s:is a pointer that contain one char
* Return: the answer
*/

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
