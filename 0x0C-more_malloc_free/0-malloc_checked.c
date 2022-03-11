#include "main.h"
/**
 * malloc_checked - that allocates memory using malloc
 * @b: memory block size
 *
 * Return: pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
