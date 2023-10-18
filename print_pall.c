#include "monty.h"
/**
 *_print_pall - Function
 *@head: input
 *Return: None
*/
int _print_pall(stack_t *head)
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
	return (0);
}
