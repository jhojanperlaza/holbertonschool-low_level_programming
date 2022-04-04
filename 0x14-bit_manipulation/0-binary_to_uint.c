#include "main.h"
/**
* _strlen - this function returns the lenght of string
* @s: is a char of input
* Return: the size of the character string
*/
int _strlen(const char *s)
{
	int cont = 0;

	if (s == NULL)
		exit(0);
	while (*s != '\0')
	{
		s++;
		cont++;
	}
	return (cont);
}
/**
*binary_to_uint - unction that converts a binary number to an int
*@b: is a char of input
* Return: integer number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int base2 = 1;
	int len = _strlen(b);

	len = len - 1;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			result = result + base2;
	base2 = base2 * 2;
	len--;
	}
	return (result);
}
