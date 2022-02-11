#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char typechar;
	int typeint;
	long int typelongint;
	long long int typelonglong;
	float typelong;

	printf("Size of a char: %zu bytes\n", sizeof(typechar));
	printf("Size of an int: %zu bytes\n", sizeof(typeint));
	printf("Size of a long int: %zu bytes\n", sizeof(typelongint));
	printf("Size of a long long int: %zu byte\n", sizeof(typelonglong));
	printf("Size of a float: %zu byte\n", sizeof(typelong));
	return (0);
}
