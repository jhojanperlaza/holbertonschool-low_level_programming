#include "main.h"
/**
* _isupper - is a one fuction to prints the lower character.
*@c: letter being tested
* Return: Always 0 (Success)
*/
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
