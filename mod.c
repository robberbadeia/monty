#include "monty.h"
/**
 * mod - Function to sub top two number
 * @h: input
 * @line: input
 * Return: None
*/
void mod(stack_t **h, unsigned int line)
{
	stack_t *_first, *_second = NULL;
	int _div = 0;

	_first = (*h);
	_second = (*h)->next;
	if (!_first || !_second)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	_div = _second->n % _first->n;

	_second->n = _div;
	_second->prev = NULL;
	(*h) = _second;

	free(_first);
}
