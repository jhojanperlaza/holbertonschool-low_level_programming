#include "main.h"
#include <stdio.h>
/**
* main - prints the number of arguments passed into it
*@argc:contains the number of arguments passed to the program
*@argv:is a one-dimensional array of strings.
* Return: the answer
*/
int main(int argc, char *argv[])
{
	int n;

	if (argc >= 1)
	{
		for (n = 0; n < argc; n++)
			printf("%s\n", argv[n]);
	}

	return (0);
}
