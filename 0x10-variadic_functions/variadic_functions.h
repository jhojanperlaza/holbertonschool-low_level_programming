#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
/*
* File: variadic_functions.h
* Auth: Jhojan Perlaza
* Desc: Header file containing declarations for all functions
* used in the 0x10.
*/
typedef struct op
{
	char *tip;
	void (*f)(va_list);
}op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
