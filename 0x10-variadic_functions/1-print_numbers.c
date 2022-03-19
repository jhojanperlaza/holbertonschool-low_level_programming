#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n: is the number of integer
 * Return: prints numbers, followed by a new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list unknown_parameters;

	va_start(unknown_parameters, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return;
		printf("%d", va_arg(unknown_parameters, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(unknown_parameters);
	printf("\n");
}
