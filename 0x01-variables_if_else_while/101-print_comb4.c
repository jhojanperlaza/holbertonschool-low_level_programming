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
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			for (c = '2'; c <= '9'; c++)

				if (a != b && a != c && b != c && a < b && b < c)

				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7')
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

