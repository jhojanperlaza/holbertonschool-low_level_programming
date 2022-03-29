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
*add_node_end - function that adds a new node at the end of a list
*@head:is the head of singly linked list
*@str:the string content
* Return: the new_node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	/* 1. declare the new node and allocate node */
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);
	/* 2. enter data to str and len */
	new_node->str = strdup(str);
	new_node->len = _strlen_recursion(str);
	/* 3. This new node is going to be the last node*/
	new_node->next = NULL;
	/* 4. If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* 5. Else traverse till the last node */
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	/* 6. Change the next of last node */
	last_node->next = new_node;
	return (new_node);
}
