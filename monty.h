#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct glob_s - global and its funcs
 * @fd: File descriptor
 * @line: Line to getline
 *
 * Description: To handle the file and getline
 */
typedef struct glob_s
{
	FILE *fd;
	char *line;
} glob_t;

extern glob_t global;
extern int value;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void pushh(stack_t **stack, unsigned int line);
void palll(stack_t **stack, unsigned int line);
void pintt(stack_t **stack, unsigned int line);
void popp(stack_t **stack, unsigned int line);
stack_t *new_node(int n);
void clean(stack_t **stack);
void free_dlistint(stack_t *stack);

#endif