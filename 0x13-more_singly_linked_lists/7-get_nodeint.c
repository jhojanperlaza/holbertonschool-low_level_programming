#include "lists.h"
/**
*get_nodeint_at_index - function that returns a specific node
*@head:is a pointer the singly linked list
*@index:is the index of the list
* Return: the nth node of a linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont = 0;
	listint_t *p_aux = head;

	while (p_aux != NULL)
	{
		p_aux = p_aux->next;
		cont++;
		if (cont == index)
			return (p_aux);
	}
	if (p_aux == NULL || cont < index)
	{
		p_aux = head;
		return (p_aux);
	}
	return (NULL);
}
