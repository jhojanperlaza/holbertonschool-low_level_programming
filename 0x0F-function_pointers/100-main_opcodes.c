#include <stdio.h>
#include <stdlib.h>

/**
 * main - Task 100.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
			exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
			exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcode[i] & 0xff);
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
