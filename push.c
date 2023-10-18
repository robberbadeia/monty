#include "monty.h"
/**
 *_push - Function to push new nod in stack
 *@head: input
 *@c: input
 *Return: pointer
*/
stack_t *_push(stack_t *head, char *c)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		printf("Faild to creat node");
		exit(EXIT_FAILURE);
	}

	new->n = atoi(c);
	new->prev = NULL;
	new->next = head;

	if (head != NULL)
		head->prev = new;
	head = new;

	return (head);
}
