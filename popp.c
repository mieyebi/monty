#include "monty.h"

/**
* popp: removes the top element of the stack
* @stack: stack
* @line: line
*/

void _pop(stack_t **stack, unsigned int line)
{
	stack_t *a = NULL;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		clean(stack);
		exit(EXIT_FAILURE);
	}

	a = *stack;

	*stack = a->next;
	if (a->next != NULL)
		a->next->prev = a->prev;
	free(a);
}
