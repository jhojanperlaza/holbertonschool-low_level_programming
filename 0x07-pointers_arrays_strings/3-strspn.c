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
	int k = 1;

	while (s[i] != '\0' && accept[i] != '\0')
	{
		if (s[i] != accept[i])
		{
			k++;
		}
		i++;
	}
	return (k);
}
