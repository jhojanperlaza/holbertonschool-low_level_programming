#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - struct for Poppy
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: this is mu first struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
