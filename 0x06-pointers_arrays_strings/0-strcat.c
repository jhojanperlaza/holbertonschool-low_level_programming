#include "main.h"
/**
 * *_strcat - this function reset n for the value 98
 * @dest: a char value
 * @src : a char value
 * Return: nothing.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < j && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
