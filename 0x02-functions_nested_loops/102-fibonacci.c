#include <stdio.h>
#include "main.h"
/**
* main - is a fuction to prints the serie of fibonacci.
*
* Return: Answer
*/
int main(void)
{
	long int i, t1 = 0, t2 = 1, temp;

	for (i = 0; i < 50; i++)
	{
		temp = t1 + t2;
		if (i > 48)
		{
			printf(" %ld", temp);
			break;
		}
		printf("%ld, ", temp);
		t1 = t2;
		t2 = temp;
	}
	return (0);
}
