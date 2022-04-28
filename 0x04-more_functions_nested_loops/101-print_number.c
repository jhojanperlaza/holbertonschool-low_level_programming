#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: the number of printek
 */
void print_number(int n)
{
	unsigned int i, k, p = 1;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
		i = n;
	k = i;
	while (k > 9)
	{
		k /= 10;
		p *= 10;
	}

	for (; p >= 1; p /= 10)
		_putchar(((i / p) % 10) + 48);
}
