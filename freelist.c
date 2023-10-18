#include "monty.h"
/**
 *_freelist - frees a doubly linked list with only int data, no strings
 *@h: pointer to head of list
 *Return: None
 */
void _freelist(stack_t *h)
{
	stack_t *tmp;
	/* return if empty list */
	if (!h)
		return;
	while (h && h->next)
	{
		h = h->next;
		free(h->prev);
	}
	free(h);
}
