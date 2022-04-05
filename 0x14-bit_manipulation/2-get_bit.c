#include "main.h"
/**
*
*@b: is a char of input
* Return: integer number
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;
	unsigned long int num2;

	if (index <= sizeof(unsigned long)*8)
	{
		num = n >> index;
		num2 = num & 1;
		return (num2)i;
	}
	return (-1);
}
