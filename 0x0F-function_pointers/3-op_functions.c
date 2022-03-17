#include "3-calc.h"
/**
 * op_add - this function adds two integers
 * @a: is an integer
 * @b: is an integer
 * Return : a sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - this function subtracts two integers
 * @a: is an integer
 * @b: is an integer
 * Return : a sub of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - this function subtracts two integers
 * @a: is an integer
 * @b: is an integer
 * Return : a sub of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_sub - this function subtracts two integers
 * @a: is an integer
 * @b: is an integer
 * Return : a sub of two numbers
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}
/**
 * op_sub - this function subtracts two integers
 * @a: is an integer
 * @b: is an integer
 * Return : a sub of two numbers
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
