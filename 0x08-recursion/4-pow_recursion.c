#include "main.h"
/**
*_pow_recursion - Write a function that returns the factorial of a given number
*@x:is the number base
*@y:is the number pow
* Return: the answer
*/
int _pow_recursion(int x, int y)
{
	if (x == 1 || y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
