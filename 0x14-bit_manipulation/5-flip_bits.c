#include "main.h"
/**
* flip_bits - Count number of bits to be flipped
* @n:first number
* @m:second number
* Return: #flips
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;

	while (n > 0 || m > 0)
	{
		unsigned int t1 = (n & 1);
		unsigned int t2 = (m & 1);

		if (t1 != t2)
			flips++;
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
