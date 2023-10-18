#include "monty.h"
/**
 * pint - print last node
 * @h: input
 * @line: input
 * Return: None
 */
void pint(stack_t **h, unsigned int line)
{
	if (!h || !*h)
	{
		printf(stderr, "L%u: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*h)->n);
}
