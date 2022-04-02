#include "lists.h"
/**
*insert_nodeint_at_index - function that inserts a new node at a given position
*@head:is a pointer the singly linked list
*@idx:is the index of the list
*@n: is the new value
* Return:the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont = 1;
	listint_t *p_aux = *head;
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (p_aux != NULL)
	{
		if (cont == idx)
		{
			new_node->next = p_aux->next;
			p_aux->next = new_node;
			return (new_node);
		}
		cont++;
		p_aux = p_aux->next;
	}
	if (cont < idx)
		return (NULL);
	return (new_node);
}
