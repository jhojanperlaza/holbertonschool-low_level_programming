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
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		if (s[i] == '\0')
			return (s+i);
		i++;
	}
	return (NULL);
}
