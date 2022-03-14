#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: It is a pointer that has the address of the dog structure.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
