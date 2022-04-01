#include "lists.h"
/**
*add_nodeint_end - function that adds a new node at the end of a list
*@head:is the head of singly linked list
*@n: is a integer number
* Return: the new_node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *last_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	last_node = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (last_node == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (new_node);
}
