#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h:is the head of a  doubly linked list
 *@n:is the value of the node->n
 *@idx:is the index
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p_aux = *h;
	unsigned int cont = 0;

	while (p_aux)
	{
		if (cont + 1 == idx)
		{
			add_dnodeint(&p_aux->next, n);
			p_aux->next->prev = p_aux;
			return (p_aux->next);
		}
		cont++;
		p_aux = p_aux->next;
	}
	return (NULL);
}
