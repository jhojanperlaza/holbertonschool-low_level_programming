#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *_strcpy - this function reset n for the value 98
* @dest: a char value
* @src : a char value
* Return: nothing.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
/**
* _strlen - this function returns the lenght of string
* @s: is a integer of input
*
* Return: nothing.
*/
int _strlen(char *s)
{
	int cont = 0;

	while (*s != '\0')
	{
		s++;
		cont++;
	}
	return (cont);
}
/**
**_strdup - returns a pointer to a newly allocated space in memory.
*@str: a new string which is a duplicate of the string.
* Return: the answer
*/
char *_strdup(char *str)
{
	char *d;

	if (str == 0)
		return (NULL);

	d = malloc(_strlen(str) + 1);
	if (d == NULL)
		return (NULL);
	_strcpy(d, str);
	return (d);
}
