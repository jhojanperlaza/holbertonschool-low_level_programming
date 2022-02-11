#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 26;
	char letra = 'a';

	do {
	putchar(letra);
	letra++;
	x--;
	} while (x != 0);
	putchar('\n');

	return (0);
}
