#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
/**
* main - program that adds positive numbers
*@argc:contains the number of arguments passed to the program
*@argv:is a one-dimensional array of strings.
* Return: the answer
*/
int main(int argc, char *argv[])
{
	int sum;
	int n;
	bool x = false;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			if (atoi(argv[n]) <= 0)
			{
				printf("Error\n");
				return (1);
			}
			if (!isdigit(*argv[n]))
			{
				printf("Error\n");
				x = true;
				return (1);
			}
			sum += atoi(argv[n]);
		}
		if (!x)
			printf("%d\n", sum);
	}
	return (0);
}
