#include "lists.h"
/**
*free_listint2 - function that frees a list
*@head:is the pointer to head
*/
void free_listint2(listint_t **head)
{
	listint_t *p_aux = *head;
	listint_t *p_aux2 = NULL;

	if (!head)
		return;
	

	while (p_aux != NULL)
	{
		p_aux2 = p_aux;
		p_aux = p_aux->next;
		free (p_aux2);
	}
	*head =NULL;
}
