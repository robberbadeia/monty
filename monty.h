#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void (*get_op_func(char *token1))(stack_t **stack, unsigned int line_number);
void push(stack_t **h, unsigned int line, const char *n);
void pop(stack_t **h, unsigned int line);
void pint(stack_t **h, unsigned int line);
void pall(stack_t **h, unsigned int line);
int isnum(const char *n);
void nop(stack_t **h, unsigned int line);
void swap(stack_t **h, unsigned int line);
void add(stack_t **h, unsigned int line);
void sub(stack_t **h, unsigned int line);
void _div(stack_t **h, unsigned int line);
void _mul(stack_t **h, unsigned int line);
void mod(stack_t **h, unsigned int line);


/*Functions related to stack nodes*/
int add_last_node(stack_t **h, int n);
void delete_last_node(stack_t **h);
void free_dlist(stack_t **h);

#endif
