#include "monty.h"
/**
 *swap - Function to swap first two element in the stack
 *@h: input
 *@line: input
 *Return: None
*/
void swap(stack_t **h, unsigned int line)
{
	int _tmp = 0;
	stack_t *tmp = NULL;

	if (!(*h) || !(*h)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	_tmp = (*h)->n;
	(*h)->n = (*h)->next->n;
	(*h)->next->n = _tmp;
}
