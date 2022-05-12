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
	dlistint_t *p_aux = NULL;
	unsigned int cont = 0;
	dlistint_t *new_node = NULL;

	if (!h)
		return (NULL);
	p_aux = *h;
	while (p_aux)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (cont + 1 == idx)
		{
			new_node = add_dnodeint(&p_aux->next, n);
			p_aux->next->prev = p_aux;
			return (new_node);
		}
		cont++;
		p_aux = p_aux->next;
	}
	return (NULL);
}
