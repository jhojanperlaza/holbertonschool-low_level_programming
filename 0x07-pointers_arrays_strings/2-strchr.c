#include "main.h"
#include <stddef.h>
/**
* *_strchr - Entry point
*@s: is a the pointer of in.
*@c: is a pointer for comparation
* Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
