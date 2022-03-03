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
	_pow(n - 1, m);
}
/**
* _sqrt_recursion - Write a function that returns the natural square.
*@n:is the number from which we are going to take out the root.
*/
int _sqrt_recursion(int n)
{
	_pow(n, n);
}
