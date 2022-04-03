#include "lists.h"
/**
*delete_nodeint_at_index - function that returns a specific node
*@head:is a pointer the singly linked list
*@index:is the index of the list
* Return: the nth node of a linked list
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cont = 1;
	listint_t *p_aux = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		p_aux->next = NULL;
		free(p_aux);
		return (1);
	}
	while (p_aux != NULL)
	{
		if (cont == index)
		{
			listint_t *del = p_aux->next;

			p_aux->next = p_aux->next->next;
			del->next = NULL;
			free(del);
			return (1);
		}
		cont++;
		p_aux = p_aux->next;
	}
	return (-1);
}
