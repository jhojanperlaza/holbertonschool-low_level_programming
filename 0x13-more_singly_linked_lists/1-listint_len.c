#include "lists.h"
/**
*listint_len - function that prints all the elements of a list
*@h:is a pointer the singly linked list
* Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
