#include "main.h"
#include <stddef.h>
/**
* *_strstr - Entry point
*@haystack: is a the pointer of in.
*@needle: is a pointer for comparation
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
