#include "lists.h"
/**
*add_nodeint - function that adds a new node
*@head:is a pointer the singly linked list
*@n: is the integer number
* Return: the number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
