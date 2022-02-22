#include "main.h"
#include <stdio.h>
/**
 * rev_string - this function reset n for the value 98
 * @s: a char value
 *
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char x; /** variable auxiliar para hacer swap*/

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1; /** le resto uno para no coger el valor de \0 */
	for (j = 0; j < i; j++)
	{
		x = s[j]; /** guardo en ls variable x el valor de la deferenciacion s[j] */
		s[j] = s[i]; /**swap */
		s[i] = x;
		i--;
	}
}
