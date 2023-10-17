#include "monty.h"
/**
 *
 *
 *
 *
*/
void _print_pall(stack_t *head)
{
	int i = 0;
	if (!head)
	{
		printf("Stack is EMPTY\n");
		exit(EXIT_FAILURE);
	}
	while (i < 2)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return;
}