#include "main.h"
/**
 * *string_toupper - this function reset n for the value 98
 * @str: a char value
 * i: a integher value
 * Return: nothing.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
