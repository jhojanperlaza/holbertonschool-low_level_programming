#include "3-calc.h"
/**
* main - this function is a basic calculator
*@argc:contains the number of arguments passed to the program
*@argv:is an array containing the two numbers and the operator
* Return: the answer
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*x)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	x = get_op_func(argv[2]);
	if (x == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", x(num1, num2));
	return (0);
}
