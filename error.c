#include "monty.h"

/**
 * push_error - push error
 * @fd: file desciptor
 * @line: line
 * @stack: stack
 * @n: count
 */
void push_error(FILE *fd, char *line, stack_t *stack, int n)
{
	fprintf(stderr, "L%u: usage: push integer\n", n);
	fclose(fd);
	free(line);
	free_dlistint(stack);
	exit(EXIT_FAILURE);
}

/**
 * ins_error - insert error
 * @fd: file descriptor
 * @line: line
 * @stack: stack
 * @n: count
 * @item: number
 */
void ins_error(FILE *fd, char *line, stack_t *stack, char *n, int item)
{
	dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", item, n);
	fclose(fd);
	free(line);
	free_dlistint(stack);
	exit(EXIT_FAILURE);
}
