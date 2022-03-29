#include "lists.h"
/**
*list_len - function that returns the number of elements in a linked list
*@h:is the singly linked list
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
