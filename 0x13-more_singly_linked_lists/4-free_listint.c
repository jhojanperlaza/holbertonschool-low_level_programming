#include "lists.h"
/**
*free_listint - function that frees a list
*@head:is the pointer to head
*/
void free_listint(listint_t *head)
{
	listint_t *p_aux = NULL;

	while (head != NULL)
	{
		p_aux = head;
		head = head->next;
		free(p_aux);
	}
}
