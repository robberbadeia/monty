#include "monty.h"
/**
 * pall - print all nodes
 * @h: input
 * @line: input
 * Return: None
 */
void pall(stack_t **h, unsigned int line)
{
	stack_t *tmp = NULL;

	if (!h || !*h)
		return;
	(void) line;
	tmp = *h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
