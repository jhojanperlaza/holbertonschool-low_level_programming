#include "lists.h"
/**
* _strlen_recursion - function that returns the length of a string.
*@s:is a pointer that contain one char
* Return: the answer
*/
int _strlen_recursion(const char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
/**
*add_node - function that adds a new node at the beginning of a list
*@head:is the head of singly linked list
*@str:the string content
* Return: the new_node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen_recursion(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
