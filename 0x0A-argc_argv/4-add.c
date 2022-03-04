#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<stdbool.h>
/**
* main - program that adds positive numbers
*@argc:contains the number of arguments passed to the program
*@argv:is a one-dimensional array of strings.
* Return: the answer
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j = 0;
	bool x = false;

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				x = true;
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	if (!x)
		printf("%d\n", sum);
	return (0);
}
