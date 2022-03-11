#include "main.h"
/**
* _strcat2 - concatenates two character strings
* @dest: a char value
* @src: a char value
* @n: concatenation limiting value
* Return: answer.
*/
char *_strcat2(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/**
* *_strcat - concatenates two character strings
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
**_strcpy - copies the value of one string into another.
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
* _strlen - function that returns the length of a string.
*@s:is a pointer that contain one char
* Return: the answer
*/
unsigned int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
*string_nconcat - function that concatenates two strings
*@s1: It is the first character string
*@s2:Is the second string of characters
*@n: concatenation limiting value
* Return: the answer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
	{
		str = (char *)malloc(_strlen(s2) + _strlen(s1) + 1);
		if (str == NULL)
			return (NULL);
		_strcpy(str, s1);
		return (_strcat(str, s2));
	}
	str = (char *)malloc(_strlen(s1) + (n + 1));
	if (str == NULL)
		return (NULL);
	_strcpy(str, s1);
	return (_strcat2(str, s2, n));
}
