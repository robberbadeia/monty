#include "monty.h"
/**
 * nop - do nothing
 * @h: head of list
 * @line: bytecode line
 */
void nop(stack_t **h, unsigned int line)
{
	if (!h || !(*h))
	{
		fprintf(stderr, "L%u: can't npo an empty stack\n", line);
		free_dlist(h);
		exit(EXIT_FAILURE);
	}
	(void) h;
	(void) line;
}
