#include "main.h"
/**
* clear_bit - function that sets the value of a bit to 0
*@n: is a integer number
*@index: is the index
* Return: 1 if is correct
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= sizeof(unsigned long) * 8)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
