#include "main.h"
/**
*_pow2 - checks whether a number is prime or not prime
*@n: number being tested
*@m: number being tested
* Return: the function prime
*/
int _pow2(int n, int m)
{
	if (n / 2 < m)
		return (1);

	if (n % m == 0)
		return (0);

	return (_pow2(n, m + 1));
}
/**
* is_prime_number - returns 1 if the input integer is a prime number
*@n: number being tested
* Return: Always 0.
*/
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == 4)
		return (0);

	return (_pow2(n, 2));
}

