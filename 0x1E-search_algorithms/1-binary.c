#include "search_algos.h"

/**
 * print_array - function that prints the array
 * @array: is a pointer to the first element of the array
 * @low: is the low index of the array
 * @high: is the high index of the array
 *
 * Return: Nothing
 */
void print_array(int *array, size_t low, size_t high)
{
	if (high == low)
		return;

	printf("Searching in array: ");

	while (low < high - 1)
	{
		printf("%d, ", array[low]);
		low++;
	}
	printf("%d\n", array[low]);
}
/**
 * binary_search - function that searches for a value in a sorted array
 * @array: is a pointer to the first element of the array
 * @size: size of the array
 * @value: the value to search
 *
 * Return: first index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0, mid = 0;

	print_array(array, low, high + 1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;

		print_array(array, low, high + 1);
	}

	return (-1);
}
