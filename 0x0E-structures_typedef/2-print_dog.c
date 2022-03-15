#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer pointing to structure
 */
void print_dog(struct dog *d)
{
	if (d[0].name == NULL)
		d->name = "(nil)";
	if (d[0].owner == NULL)
		d->owner = "(nil)";
	if (d != NULL)
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
