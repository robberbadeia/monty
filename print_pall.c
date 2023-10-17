#include "monty.h"
/**
 *
 *
 *
 *
*/
void _print_pall(stack_t *head)
{
	if (!head)
	{
		printf("Stack is EMPTY\n");
		exit(EXIT_FAILURE);
	}
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
	return;
}