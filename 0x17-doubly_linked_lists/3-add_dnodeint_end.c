#include "lists.h"

/**
*add_dnodeint_end - adds a new node at the end of a dlistint_t list
*@head:is the head of a  doubly linked list
*@n: is the value of n in each node
* Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = *head;
	dlistint_t *p_aux = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (p_aux->next != NULL)
	{
		p_aux = p_aux->next;
	}
	new_node->prev = p_aux;
	p_aux->next = new_node;
	return (new_node);
}
