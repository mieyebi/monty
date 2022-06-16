#include "monty.h"

/**
* pushh: adds element to the stack
* @stack: stack
* @line: line
*/

int value;

void pushh(stack_t **stack, unsigned int line)
{
	stack_t *new = NULL;
	(void)line;

	new = new_node(value);

	new->next = *stack;
	if (*stack)
		(*stack)->prev = new;
	*stack = new;
}
