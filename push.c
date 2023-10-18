#include "monty.h"
/**
 * isnum - Function
 * @n: input
 * Return: int
*/
int isnum(const char *n)
{
		int i = 0;

	if ((*n) == '-')
		i = 1;
	for (; *(n + i) != '\0'; i++)
	{
		if (isdigit(*(n + i)) == 0)
			return (-1);
	}
	return (0);
}
/**
 * push - Function to puash a new node to a stack
 * @h: input
 * @line: input
 * @n: input
 * Return: None
*/
void push(stack_t **h, unsigned int line, const char *n)
{
	if (!h)
		return;
	if (isnum(n) == -1)
	{
		printf("L%u: usage: push integer\n", line);
		free_dlist(h);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (add_last_node(h, atoi(n)) == -1)
		{
			free_dlist(h);
			exit(EXIT_FAILURE);
		}
	}
}
