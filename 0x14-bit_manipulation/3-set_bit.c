#include "main.h"
/**
*set_bit - function that sets the value of a bit to 1
*@n: is a pointer of number
*@index: is the index
* Return: 1 if is correct
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num2 = 1;

	if (index <= sizeof(unsigned long) * 8)
	{
		num2 = num2 << index;
		*n = *n | num2;
		return (1);
	}
	return (-1);
}
