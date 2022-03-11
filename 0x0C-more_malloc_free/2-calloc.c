#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb:number of array elements
 * @size:size of the array variabel type
 *
 * Return: pointer to the allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *_calloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	_calloc = (char *)malloc(nmemb * size);
	if (_calloc == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		_calloc[i] = 0;

	return (_calloc);
}
