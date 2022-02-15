#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
*jack_bauer - is a fuction to prints last digit of a number.
*minutos is a conter
*horas is a conter
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int minutos;
	int horas;

	for (horas = 0 ; horas < 24; horas++)
	{
		for (minutos = 0 ; minutos < 60; minutos++)
		{
			_putchar((horas / 10) + '0');
			_putchar((horas % 10) + '0');
			_putchar(':');
			_putchar((minutos / 10) + '0');
			_putchar((minutos % 10) + '0');
			_putchar('\n');
		}
	}
}
