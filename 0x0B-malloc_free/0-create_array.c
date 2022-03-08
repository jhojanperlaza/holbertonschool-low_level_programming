#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates an array of chars.
*@size: is the size of the array
*@c: is the value of initializes
* Return: the answer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
	free(a);
}
