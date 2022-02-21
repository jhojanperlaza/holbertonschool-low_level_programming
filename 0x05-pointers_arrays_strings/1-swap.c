/**
 * swap_int - this function swap the values of two integers
 * @a: an integer pointer to an input integer of the function
 * @b: an integer pointer to an input integer of the function
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;

}
