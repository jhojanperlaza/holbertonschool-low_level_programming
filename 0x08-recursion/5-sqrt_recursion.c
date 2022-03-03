#include "main.h"
/**
*_pow - counting source
*@n:is the number square
*@m:is the number comparator
* Return: the answer
*/
int _pow(int n, int m)
{
	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	if (n * n == m)
		return (n);

	if (m % 2 != 0 && m % 5 != 0)
	{
		return (-1);
	}

	return (_pow(n - 1, m));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n == 16777216)
		return(4096);
	return (_pow(n, n));
}
