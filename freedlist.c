#include "monty.h"
/**
 *free_dlist - Function to free the douple linked list
 *@h: input
 *Return: None
*/
void free_dlist(stack_t **h)
{
	stack_t *tmp;
	if (!h)
		return;
	while ((*h) && (*h)->next)
	{
		(*h) = (*h)->next;
		free((*h)->prev);
	}
	free((*h));
}
