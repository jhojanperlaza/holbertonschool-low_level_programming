#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - Write a function that creates a new dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: the answer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);

	dog2->name = malloc(strlen(name) + 1);
	if (dog2 == NULL)
		return (NULL);

	dog2->owner = malloc(strlen(owner) + 1);
	if (dog2 == NULL)
		return (NULL);

	while (name[i] != '\0')
	{
		dog2->name[i] = name[i];
		i++;
	}
	dog2->name[i] = '\0';
	dog2->age = age;
	while (owner[j] != '\0')
	{
		dog2->owner[j] = owner[j];
		j++;
	}
	dog2->owner[j] = '\0';

	return (dog2);
}
