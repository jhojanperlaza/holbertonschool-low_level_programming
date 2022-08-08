#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 * @array: is a pointer to the first element of the array
 * @size: size of the array
 * @value: the value to search
 *
 * Return: first index where value is located, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	for (index = 0; (index < size) && array; index++)
	{
		printf("Value checked array[%li] = [%i]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}

	return (-1);
}
