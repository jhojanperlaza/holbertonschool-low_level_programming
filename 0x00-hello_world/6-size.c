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
	long  typelongint;
	long long int typelonglong;
	float typelong;

	printf("Size of a char: %zu bytes(s)\n", sizeof(typechar));
	printf("Size of an int: %zu bytes(s)\n", sizeof(typeint));
	printf("Size of a long int: %zu byte(s)\n", sizeof(typelongint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(typelonglong));
	printf("Size of a float: %zu byte(s)\n", sizeof(typelong));
	return (0);
}
