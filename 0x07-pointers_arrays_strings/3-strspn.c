#include "main.h"
/**
* _strspn - Entry point
*@s: is a the pointer of in.
*@accept: is a pointer for comparation
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (k);
		}
	}
}
