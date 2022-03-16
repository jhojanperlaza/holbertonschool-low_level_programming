#include "function_pointers.h"
/**
 * print_name - Write a function that prints a name
 * @name: the character string containing the name
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name); /** (*f)(name); */
}
