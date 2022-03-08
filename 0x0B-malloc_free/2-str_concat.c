#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *_strcat - this function reset n for the value 98
* @dest: a char value
* @src : a char value
* Return: answer.
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (i <= j && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/**
* _strlen - Write a function that returns the length of a string.
*@s:is a pointer that contain one char
* Return: the answer
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
**_strcpy - this function reset n for the value 98
* @dest: a char value
* @src : a char value
* Return: answer.
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
*str_concat - that concatenates two strings
*@s1: is the first char
*@s2: is the second char
* Return: the answer
*/
char *str_concat(char *s1, char *s2)
{
	char *d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	d = malloc((_strlen(s1)) + (_strlen(s2) + 1));

	if (d == NULL)
		return (NULL);
	_strcpy(d, s1);

	return (_strcat(d, s2));
}
