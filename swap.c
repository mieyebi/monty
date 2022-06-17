#include "monty.h"

/**
 * swapp - swaps the top two elements of the stack.
 * @stack: Stack
 * @line: line
 */
void swapp(stack_t **stack, unsigned int line)
{
	stack_t *a = *stack;
	int temp = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		clean(stack);
		exit(EXIT_FAILURE);
	}
	temp = a->n;
	a->n = a->next->n;
	a->next->n = temp;
}
