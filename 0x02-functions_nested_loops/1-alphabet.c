#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_alphabet - is a fuction to prints the alphabet.
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int x = 26;
	char letra = 'a';

	do {
	_putchar(letra);
	letra++;
	x--;
	} while (x != 0);
	_putchar('\n');

}
