#include "main.h"
/**
* *_memset - Entry point
*@s: is a the pointer of in.
*@b: is a change
*@n: is a memory area
* Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	while (n > 0)
	{
		s[j] = b;
		j++;
		n--;
	}
	return (s);
}
