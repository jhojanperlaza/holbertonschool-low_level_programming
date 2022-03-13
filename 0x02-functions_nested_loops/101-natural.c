#include <stdio.h>
#include "main.h"
/**
* main - is a fuction to prints the alphabet.
*
* Return: Answer
*/
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j = j + 1;
	}
	printf("%i\n", j);

	return (0);
}
