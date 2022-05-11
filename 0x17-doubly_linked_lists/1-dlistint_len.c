#include "lists.h"

/**
*dlistint_len - function that counts the number of nodes
*@h:is the head of a  doubly linked list
* Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		h = h->next;
		num_node++;
	}
	return (num_node);
}
