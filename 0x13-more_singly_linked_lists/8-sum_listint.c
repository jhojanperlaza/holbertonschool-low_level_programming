#include "lists.h"
/**
*sum_listint - function that sums all the contents of the list
*@head:is a pointer the singly linked list
* Return: returns the sum of all the data (n)
*/
int sum_listint(listint_t *head)
{
	unsigned int cont = 0;
	listint_t *p_aux = head;

	while (p_aux != NULL)
	{
		cont = cont + p_aux->n;
		p_aux = p_aux->next;
	}
	return (cont);
}
