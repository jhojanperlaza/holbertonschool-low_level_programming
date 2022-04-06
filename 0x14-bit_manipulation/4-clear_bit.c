#include "main.h"
/**
* clear_bit - function that sets the value of a bit to 0
*@n: is a integer number
*@index: is the index
* Return: 1 if is correct
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num1;
	unsigned long int num2;
	unsigned long int num3;

	if (index <= sizeof(unsigned long) * 8)
	{
		num1 = *n >> index;
		num2 = *n << index;
		num3 = num1 | num2;
		*n = *n & num3;
		return (1);
	}
	return (-1);
}
