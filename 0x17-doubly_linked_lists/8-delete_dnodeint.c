#include "lists.h"

/**
 *delete_dnodeint_at_index - inserts a new node at a given position
 *@head:is the head of a  doubly linked list
 *@index:is the index
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p_aux = NULL;
	unsigned int cont = 0;

	if (*head == NULL)
		return (-1);
	p_aux = *head;
	if (index == 0 && p_aux->next)
	{
		p_aux->next->prev = NULL;
		*head = p_aux->next;
		free(p_aux);
		return (1);
	}
	if (index == 0 && !p_aux->next)
	{
		free(p_aux);
		*head = NULL;
		return (1);
	}
	while (p_aux)
	{
		if (cont == index && p_aux->next)
		{
			p_aux->prev->next = p_aux->next;
			p_aux->next->prev = p_aux->prev;
			free(p_aux);
			return (1);
		}
		else if (cont == index)
		{
			p_aux->prev->next = NULL;
			free(p_aux);
			return (1);
		}
		cont++;
		p_aux = p_aux->next;
	}
	return (-1);
}
