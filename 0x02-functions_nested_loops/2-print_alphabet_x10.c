#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar (a);
		}
		putchar ('\n');
		i++;
	}

}
