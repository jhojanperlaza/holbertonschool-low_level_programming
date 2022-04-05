#include "main.h"
/**
*binary_to_uint - unction that converts a binary number to an int
*@b: is a char of input
* Return: integer number
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;
	unsigned long int num2;

	num = n>>index;
	num2 = num&1;
	return (num2);
}
