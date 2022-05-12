#include "lists.h"

/**
 *free_dlistint - function that frees a dlistint_t list
 *@head:is the head of a  doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
