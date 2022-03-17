#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer
 * @array: pointer to the array
 * @size: array size
 * @cmp: pointer to the function
 * Return: answer;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || *action == NULL)
		return;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
