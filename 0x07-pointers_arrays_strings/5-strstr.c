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
			if (needle[j] == haystack[i] && needle[j + 1] == haystack[i + 1]
					&& needle[j + 2] == haystack[i + 2] && needle[j + 3] == haystack[i + 3])
			{
				return (needle);
			}
		}
	}
	if (needle[0] == '\0')
		return (haystack);

	return ('\0');
}
