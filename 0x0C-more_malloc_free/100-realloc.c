#include "main.h"
/**
 * _realloc - that allocates memory using malloc
 * @ptr: pointer to the memory previously allocated
 * @old_size:size, in bytes, of the allocated space of ptr
 * @new_size:new size, in bytes, of the new memory block
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reall;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (reall == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	reall = (char *)malloc(new_size);
	if (reall == NULL)
		return (NULL);

	return (reall);
}
