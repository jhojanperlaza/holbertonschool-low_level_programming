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
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
