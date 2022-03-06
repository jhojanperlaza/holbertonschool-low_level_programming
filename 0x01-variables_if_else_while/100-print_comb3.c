#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry pointt
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

