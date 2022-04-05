#include "main.h"
/**
 * recursion_binary - convert an integer to binary
 * @n: integer
*/
void recursion_binary(unsigned long int n)
{
	if (n)
	{
		recursion_binary(n >> 1);
		_putchar ((n & 1) + '0');
	}
}
/**
 * print_binary - prints the binary representation of a number
 * @n: integer
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		recursion_binary(n);
}
