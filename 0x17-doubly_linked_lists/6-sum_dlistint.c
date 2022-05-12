#include "lists.h"

/**
 *sum_dlistint - function that sums a containing the list
 *@head:is the head of a  doubly linked list
 *Return: the sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *p_aux = head;

	if (p_aux == NULL)
		return (0);
	while (p_aux)
	{
		sum += p_aux->n;
		p_aux = p_aux->next;
	}
	return (sum);
}
