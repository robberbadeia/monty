#include "monty.h"
/**
 *swap - Function to swap first two element in the stack
 *@h: input
 *@line: input
 *Return: None
*/
void swap(stack_t **h, unsigned int line)
{
	stack_t *node1, *node2 = NULL;

	if (!(*h) || !(*h)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	node1 = (*h);
	node2 = (*h)->next;
	node1->next = node2->next;
	node1->prev = node2;
	node2->next = node1;
	node2->prev = NULL;
	(*h) = node2;
}
