#include "variadic_functions.h"
/**
 * op_char - print a char
 * @c: char to print
 */
void op_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * op_int - print a integer
 * @i: int to print
 */
void op_int(va_list i)
{
	printf("%i", va_arg(i, int));
}
/**
 * op_flot - print a float
 * @f: float to print
 */
void op_flot(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * op_str - print a string
 * @s: char to print
 */
void op_str(va_list s)
{
	char *string = va_arg(s, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments
 */
void print_all(const char * const format, ...)
{
	op_t tipo[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_flot},
		{"s", op_str},
		{NULL, NULL},
	};
	unsigned int i = 0, j;
	va_list unknown_parameters;
	char *separator = "";

	va_start(unknown_parameters, format);

	while (format && format[i])
	{
		j = 0;
		while (tipo[j].tip != NULL)
		{
			if (*(tipo[j].tip) == format[i])
			{
				printf("%s", separator);
				tipo[j].f(unknown_parameters);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(unknown_parameters);
	printf("\n");
}
