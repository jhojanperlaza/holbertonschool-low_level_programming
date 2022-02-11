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
	if (n == 0)
	{
		printf("Last digit of %i is %d and is 0\n", n, d % 10);
	}
	else if (n > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, d % 10);
	}
	else 
	{
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, d % 10);
	}
	return (0);
}
