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
	if (argc > 1 || argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
