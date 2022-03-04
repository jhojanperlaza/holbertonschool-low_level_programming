#include "main.h"
/**
*comparacion - compares from the ends to the center of the cedena of characters
*@der:pointer starts at the left corner and moves to the right
*@izq:pointer starts in the right corner and moves to left
* Return: 0 if it is not a polindrome, 1 if it is a polindrome
*/
int comparacion(char *der, char *izq)
{
	if (*der != *izq)
	{
		return (0);
	}
	if (der >= izq)
	{
		return (1);
	}
	return (comparacion(der + 1, izq - 1));
}
/**
*size - determines the character size
*@s:is a pointer
* Return: character size
*/
int size(char *s)
{
	int a;

	a = 0;
	if (*s == '\0')
	{
		return (0);
	}
	a = size(s + 1);
	a++;
	return (a);
}
/**
 * is_palindrome - function is a palindrome
 * @s:is a pointer
 * Return: 1 if is palindrome
 */
int is_palindrome(char *s)
{
	int a = size(s);
	char *der = s;
	char *izq = s + (a - 1);

	if (a == 0)
	{
		return (1);
	}
	return (comparacion(der, izq));
}
