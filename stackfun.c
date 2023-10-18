#include "monty.h"
/**
 * add_last_node - add node the list
 * @h: pointer
 * @n: input
 * Return: 0 if success, -1 if failed
 */
int add_last_node(stack_t **h, int n)
{
	stack_t *new;

	if (!h)
		return (-1);

	new = malloc(sizeof(struct stack_s));
	if (!new)
	{
		printf("Error: malloc failed");
		return (-1);
	}
	new->n = n;

	if (*h == NULL)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	return (0);
}
/**
 * delete_last_node - deletes last node of the list
 * @h: pointer
 * Return: None
 */
void delete_last_node(stack_t **h)
{
	stack_t *tmp = NULL;

	tmp = *h;
	if ((*h)->next == NULL)
	{
		*h = NULL;
		free(tmp);
	}
	else
	{
		(*h) = (*h)->next;
		(*h)->prev = NULL;
		free(tmp);
	}
}
/**
 *free_dlist - Function to free the douple linked list
 *@h: input
 *Return: None
*/
void free_dlist(stack_t **h)
{
	if (!h)
		return;

	while (*h && (*h)->next)
	{
		(*h) = (*h)->next;
		free((*h)->prev);
	}
	free(*h);
}
