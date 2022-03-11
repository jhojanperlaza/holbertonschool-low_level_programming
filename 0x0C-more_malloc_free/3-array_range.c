#include "main.h"
/**
 * array_range - that allocates memory using malloc
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the allocate memory
 */
int *array_range(int min, int max)
{
	int *array, i = min;

	if (min > max)
		return (NULL);

	array = malloc((max + 1 - min) * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (i <= max)
	{
		array[i] = i;
		i++;
	}
	return (array);
}
