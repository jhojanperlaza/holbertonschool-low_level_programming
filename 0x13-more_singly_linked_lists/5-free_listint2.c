#include "lists.h"
/**
*free_listint2 - function that frees a list
*@head:is the pointer to head
*/
void free_listint2(listint_t **head)
{
	listint_t *p_aux = NULL;

	if(!head)
		return;

	while (*head != NULL)
	{
		p_aux = *head;
		*head = (*head)->next;
		free(p_aux);
	}
	*head = NULL;
}
