#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
* _strlen - Write a function that returns the length of a string.
*@s:is a pointer that contain one char
* Return: the answer
*/

int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (1 + _strlen(s + 1));
}
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
	{
		free(dog2);
		return (NULL);
	}
	dog2->name = malloc(_strlen(name) + 1);
	dog2->owner = malloc(_strlen(owner) + 1);
	if (dog2->name == NULL || dog2->owner == NULL)
	{
		free(dog2->owner);
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
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
