#include "monty.h"
/**
 * pop - removes node from list
 * @h: input
 * @line: input
 * Return: None
*/
void pop(stack_t **h, unsigned int line)
{
	if (h == NULL || *h == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line);
		free_dlist(h);
		exit(EXIT_FAILURE);
	}
	else
		delete_last_node(h);
}
