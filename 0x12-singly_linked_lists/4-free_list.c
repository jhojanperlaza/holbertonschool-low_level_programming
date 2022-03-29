#include "lists.h"
/**
*free_list - function that frees a list_t list
*@head:is the pointer to head
*/
void free_list(list_t *head)
{
	list_t *p_aux;

	while (head != NULL)
	{
		p_aux = head;
		head = head->next;
		free(p_aux->str);
		free(p_aux);
	}
}
