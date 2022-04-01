#include "lists.h"
/**
*pop_listint - function that deletes the head node of a list
*@head:is the head of singly linked list
* Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	int tmp = 0;
	listint_t *p_aux = *head;

	if (!head)
		return;
	tmp = (*head)->n;
	*head = (*head)->next;
	free(p_aux);
	return (tmp);

}
