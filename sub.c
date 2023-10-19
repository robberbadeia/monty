#include "monty.h"
/**
 * sub - Function to sub top two number
 * @h: input
 * @line: input
 * Return: None
*/
void sub(stack_t **h, unsigned int line)
{
	stack_t *_first, *_second = NULL;
	int _sub = 0;

	_first = (*h);
	_second = (*h)->next;
	if (!_first || !_second)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	if (_first->n > _second->n)
		_sub = _first->n - _second->n;
	else
		_sub = _second->n - _first->n;

	_second->n = _sub;
	_second->prev = NULL;
	(*h) = _second;

	free(_first);
}
