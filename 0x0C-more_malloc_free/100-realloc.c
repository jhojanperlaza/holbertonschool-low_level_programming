#include "main.h"
/**
 * malloc_checked - that allocates memory using malloc
 * @b: memory block size
 *
 * Return: pointer to the allocate memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reall;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		reall = (char *)malloc(new_size);
		if (reall == NULL)
		{
			return (NULL);
		}
	}

	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}

	reall = (char *)malloc(new_size);
	if (reall == NULL)
		return (NULL);
	
	return (reall);
}
