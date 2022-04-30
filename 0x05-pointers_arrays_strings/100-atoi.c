#include "main.h"
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * _atoi - this function convert a string to an integer
 * @s: a string value
 *
 * Return: number integer.
 */
int _atoi(char *s)
{
	int is_negative = 1, result = 0;
	char *num = "-2147483648";

	if (!s || !*s)
		return (0);
	if (strcmp(s, num) == 0)
		return (-2147483648);

	while (('0' > *s || *s > '9'))
	{
		if (*s == '+')
			is_negative *= +1;
		if (*s == '-')
			is_negative *= -1;
		if (*s == '\0')
			return (0);
		s++;
	}
	while (*s != '\0' && !('0' > *s || *s > '9'))
	{
		result = result * 10 + (*s++ - '0');
	}
	return (is_negative < 0 ? -result : result);
}
