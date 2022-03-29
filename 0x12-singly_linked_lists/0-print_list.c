#include "lists.h"
/**
*print_list - function that prints all the elements of a list_t list
*@h:is the singly linked list
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
			printf("\n");
		}
		else
			printf("[0] (nil)\n");
		h = h->next;
		cont++;
	}
	return (cont);
}
