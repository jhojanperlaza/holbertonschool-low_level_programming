#include <stdio.h>
#include "main.h"
/**
* main - is a fuction to prints the serie of fibonacci.
*
* Return: Answer
*/
int main(void)
{
	long int i, t1 = 0, t2 = 1, temp = 0, j = 0;

	for (i = 0; i < 100 ; i++)
		if (temp < 4000000)
		{
			if (temp % 2 == 0)
			{
				j = j + temp;
			}
			temp = t1 + t2;
			t1 = t2;
			t2 = temp;
		}
	printf("%ld\n", j);
	return (0);
}

