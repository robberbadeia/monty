#include "monty.h"
/**
 *_check - Function to check the token and run the approbriate function
 *@token: input
 *Return: None
*/
int _check(char *token)
{
	stack_t *head = NULL;

	while (token)
	{
		if (!strcmp(token, "push"))
		{
			/*run push function*/
			token = strtok(NULL, " \n\t\a\r;:");
			head = _push(head, token);
			continue;
		}
		else if (!strcmp(token, "pall"))
		{
			/*print values of stack*/
			_print_pall(head);
		}
		token = strtok(NULL, " \n\t\a\r;:");
	}
	return (0);
}
