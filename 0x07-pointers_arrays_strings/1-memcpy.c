#include "main.h"
/**
* *_memcpy - Entry point
*@dest: is a the pointer of in.
*@src: is a pointer for comparation
*@n: is a memory area
* Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;

	while (n > 0)
	{
		dest[j] = src[j];
		j++;
		n--;
	}
	return (dest);
}
