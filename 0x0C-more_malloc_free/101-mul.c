#include "main.h"
/**
* _isdigit - is a one fuction to prints the lower character.
*@c: letter being tested
* Return: Always 0 (Success)
*/
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
* main - prints the number of arguments passed into it
*@argc:contains the number of arguments passed to the program
*@argv:is a one-dimensional array of strings.
* Return: the answer
*/
int main(int argc, char *argv[])
{
	int n;
	int m;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", n * m);
	}
	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}
	if (_isdigit(n) || _isdigit(m))
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
