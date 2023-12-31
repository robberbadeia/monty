#include "monty.h"
/**
 * add - Function to add top two number
 * @h: input
 * @line: input
 * Return: None
*/
void add(stack_t **h, unsigned int line)
{
	stack_t *_first, *_second = NULL;
	int _sum = 0;

	_first = (*h);
	_second = (*h)->next;
	if (!_first || !_second)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	_sum = _first->n + _second->n;

	_second->n = _sum;
	_second->prev = NULL;
	(*h) = _second;

	free(_first);
}
