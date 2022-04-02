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

	if (*head == NULL || idx == 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
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
	return (NULL);
}
