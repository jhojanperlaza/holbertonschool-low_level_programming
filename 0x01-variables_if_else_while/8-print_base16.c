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
	char num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar (num);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
	putchar (a);
	}
	putchar ('\n');

	return (0);
}
