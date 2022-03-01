#include "main.h"
#include <stddef.h>
/**
* *_strpbrk - Entry point
*@s: is a the pointer of in.
*@accept: is a pointer for comparation
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s +i);
			}
		}
	}
	return (NULL);
}
