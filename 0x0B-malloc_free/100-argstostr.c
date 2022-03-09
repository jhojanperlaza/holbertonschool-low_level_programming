#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
**argstostr - function that concatenates all the arguments.
*@ac:number of arguments.
*@av: matrix with the characters of the arguments.
* Return: the answer
*/
char *argstostr(int ac, char **av)
{
	int i, j, size;
	char *strconcat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	strconcat = malloc(sizeof(char) * (size));
	if (strconcat == NULL)
		return (NULL);
	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{	strconcat[size] = av[i][j];
			size++;
		}
		strconcat[size] = '\n';
		size++;
	}
	return (strconcat);
}
