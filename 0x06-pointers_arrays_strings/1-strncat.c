#include "main.h"
/**
 * *_strncat - this function reset n for the value 98
 * @dest: a char value
 * @src : a char value
 * @n: a integer value
 * Return: nothing.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int x;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] !='\0')
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
