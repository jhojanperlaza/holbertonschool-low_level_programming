#include "lists.h"

/**
 *get_dnodeint_at_index - returns the node of a dlistint_t linked list
 *@head:is the head of a  doubly linked list
 *@index:the index of the node
 *Return: node index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p_aux = head;
	unsigned int cont = 0;

	while (p_aux)
	{
		if (cont == index)
			return (p_aux);
		cont++;
		p_aux = p_aux->next;
	}
	return (NULL);
}
