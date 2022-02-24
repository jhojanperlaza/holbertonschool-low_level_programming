#include "main.h"
/**
 * reverse_array - this function reset n for the value 98
 * @a: a char value
 * @n : a integher value
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int j;
	int x;
	int y = n - 1;
 
	for (j = 0; j < y; j++)
	{
		x = a[j]; 
		a[j] = a[y];
		a[y] = x;
		y--;
	}
}
