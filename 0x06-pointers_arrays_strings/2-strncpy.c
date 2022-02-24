#include "main.h"
/**
 * *_strncpy - this function reset n for the value 98
 * @dest: a char value
 * @src : a char value
 * @n: a integer value
 * Return: nothing.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[x] = src[j];
		x++;
		j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}

	return (dest);
}
