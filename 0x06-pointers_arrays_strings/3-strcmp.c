#include "main.h"
/**
 * *_strcat - this function reset n for the value 98
 * @dest: a char value
 * @src : a char value
 * Return: nothing.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i]) 
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
