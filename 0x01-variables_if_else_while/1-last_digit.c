#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (n > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, d);
	}
	if (n == 0)
	{
		printf("Last digit of %i is %d and is 0\n", n, d);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %i is %d and is 0\n", n, d);
	}
	return (0);
}
