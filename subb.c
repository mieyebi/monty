#include "monty.h"

/**
 * subb - subtracts th top two elements in the stack.
 * @stack: Stack
 * @line:line
 */
void subb(stack_t **stack, unsigned int line)
{
	stack_t *a = *stack;
	int sub = 0;

	if (!a || !a->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		clean(stack);
		exit(EXIT_FAILURE);
	}
	sub = a->next->n - a->n;
	a->next->n = sub;
	popp(stack, line);
}
