#include "lists.h"
/**
*reverse_listint - function that reverses a linked list
*@head:is a pointer the singly linked list
* Return:a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p_prev =  (*head)->next;
	listint_t *p_next =  p_prev->next;

	(*head)->next = NULL;
	while (p_prev != NULL)
	{
		p_prev->next = *head;
		*head = p_prev;
		p_prev = p_next;
		if (p_prev == NULL)
			return (*head);
		p_next = p_next->next;
	}
	return (*head);
}
