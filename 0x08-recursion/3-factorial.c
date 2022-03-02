#include "main.h"
/**
*factorial - Write a function that returns the factorial of a given number
*@n:is the number of input
* Return: the answer
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (factorial(n - 1) * n);
}
