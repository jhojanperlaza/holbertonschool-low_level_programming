#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
*print_last_digit - is a fuction to prints last digit of a number.
*@n: letter being tested
*digit: letter being tested
* Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		_putchar(-last + '0');
		return (-last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}

}
