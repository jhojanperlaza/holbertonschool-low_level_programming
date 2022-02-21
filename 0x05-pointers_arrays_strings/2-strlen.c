/**
 * _strlen - this function returns the lenght of string
 * @s: is a integer of input
 *
 * Return: nothing.
 */

int _strlen(char *s)
{
	int cont = 0;

	while (*s != '\0')
	{
		s ++;
		cont ++;
	}

	return (cont);
}
