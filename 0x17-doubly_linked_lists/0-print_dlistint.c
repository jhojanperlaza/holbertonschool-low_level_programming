#include "lists.h"

/**
*print_dlistint - function that prints all the elements of a dlistint_t
*@h:is the head of a  doubly linked list
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node = 0;

	if (!h || !h->n)
		return (0);
	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		num_node++;
	}
	return (num_node);
}
