#include "main.h"
#include <stdio.h>
/**
* print_diagsums - Entry point
*@a: is a the pointer of in.
*@size: is a "size" of matriz
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
	int i;
	int x = 0;
	int y = 0;
	int s = size * size;

	for (i = 0; i < s; i = i + (size + 1)) /**i += size + 1*/
	{
		x = x + a[i]; /**tl += a[i];*/
	}
	for (i = size - 1; i < s - 1; i = i + (size - 1)) /**i += size - 1*/
	{
		y = y + a[i];
	}
	printf("%d, %d\n", x, y);
}
