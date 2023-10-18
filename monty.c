#include "monty.h"
stack_t *h = NULL;
void check_token(char *token)
{
	int ispush = 0;
	unsigned int line = 1;

	while (token)
	{
		if (ispush == 1)
		{
			push(&h, line, token);
			ispush = 0;
			token = strtok(NULL, "\n\t\a\r ;:");
			line++;
			continue;
		}
		else if (strcmp(token, "push") == 0)
		{
			ispush = 1;
			token = strtok(NULL, "\n\t\a\r ;:");
			continue;
		}
		else
		{
			if (get_op_func(token) != 0)
			{
				get_op_func(token)(&h, line);
			}
			else
			{
				free_dlist(&h);
				fprintf(stderr, "L%d: unknown instruction %s\n", line, token);
				exit(EXIT_FAILURE);
			}
		}
		line++;
		token = strtok(NULL, "\n\t\a\r ;:");
	}

}
/**
 *main - Function
 *@argc: input
 *@argv: input
 *Return: int
*/
int main(int argc, char *argv[])
{
	int fd = 0;
	char *buf, *token;
	ssize_t _read;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	buf = malloc(sizeof(char) * 1000);
	if (!buf)
	{
		return (0);
	}
	_read = read(fd, buf, 1000);
	if (_read == -1)
	{
		free(buf);
		close(fd);
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	token = strtok(buf, "\n\t\a\r ;:");

	check_token(token);

	free_dlist(&h);
	free(buf);
	close(fd);
	return (0);
}
