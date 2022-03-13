#include <stdio.h>
#include "main.h"
/**
* main - is a fuction to prints the serie of fibonacci.
*
* Return: Answer
*/
int main(void)
{
	int i, t1 = 0, t2 = 1, temp = 0;

	for (i = 0; i < 50; i++)
	{
		temp = t1;
		t1 = t2;
		t2 = t2 + temp;
	}
	printf("%i\n", t2);

	return (0);
}
