#include "monty.h"
/**
 *main - Function
 *@argc: int
 *@argv: input
 *Return: int
*/
int main(int argc, char *argv[])
{
	int fd = 0;
	char *buf, *token;
	ssize_t _read;
	int line = 1;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	/*Fail to open the file*/
	if (fd == -1)
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	/*Buffer to store tokens*/
	buf = malloc(sizeof(char) * 1000);
	if (!buf)
	{
		return (0);
	}
	/*Read the content of file*/
	_read = read(fd, buf, 1000);
	if (_read == -1)
	{
		free(buf);
		close(fd);
		exit(EXIT_FAILURE);
	}

	/*start to tokenize what in the buffer*/
	token = strtok(buf, " \n\t\a\r;:");

	/*check the token and run the approbriate function*/
	_check(token);

	return (0);
}
