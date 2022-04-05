#include "main.h"
/**
* get_bit - returns the bit according to index
*@n: is a integer number
*@index: is the index
* Return: value of a bit at a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;
	unsigned long int num2;

	if (index <= sizeof(unsigned long) * 8)
	{
		num = n >> index;
		num2 = num & 1;
		return (num2);
	}
	return (-1);
}
