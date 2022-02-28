#include "main.h"
#include <stddef.h>
/**
* _strspn - Entry point
*@s: is a the pointer of in.
*@accept: is a pointer for comparation
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int k = 1;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] != accept[i])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	return (k);
}
