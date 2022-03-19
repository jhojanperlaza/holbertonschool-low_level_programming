#include "variadic_functions.h"
/**
 * print_strings - function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n: is the number of integer
 * Return: prints numbers, followed by a new line
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list unknown_parameters;

	va_start(unknown_parameters, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(unknown_parameters, char *);
		if (x != NULL)
		{
			printf("%s", x);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		if (x == NULL)
		{
			printf("(nil)");
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}  
	}
	va_end(unknown_parameters);
	printf("\n");
}
