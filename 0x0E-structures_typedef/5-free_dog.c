#include "dog.h"
/**
 * free_dog - Write a function that frees dogs.
 * @d: It is a pointer that has the address of the dog structure.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
