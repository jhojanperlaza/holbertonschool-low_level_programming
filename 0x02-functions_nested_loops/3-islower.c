#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
* _islower - is a fuction to prints the lower character.
*@c: letter being tested
* Return: Always 0 (Success)
*/
int _islower(int c)

{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

