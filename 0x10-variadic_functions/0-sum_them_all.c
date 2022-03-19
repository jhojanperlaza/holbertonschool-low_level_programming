#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the character string containing the name
 * Return: add of two int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, cont = 0;
	va_list parametros_desconocidos;

	va_start(parametros_desconocidos, n);

	for (i = 0; i < n; i++)
	{
		cont = cont + va_arg(parametros_desconocidos, int);
	}
	va_end(parametros_desconocidos);
	return (cont);
}
