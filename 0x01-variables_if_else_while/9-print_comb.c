#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
	if (a < '9')
	{
	putchar(a);
	putchar(',');
	putchar(' ');
	}
	else
	{
	putchar(a);
	}
	}
	putchar('\n');

	return (0);
}
