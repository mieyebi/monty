#include "monty.h"

/**
 * addd - adds two elements in the stack
 * @stack: Stack
 * @line: line
 */
void addd(stack_t **stack, unsigned int line)
{
	stack_t *a = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		clean(stack);
		exit(EXIT_FAILURE);
	}
	a = *stack;
	sum = a->n + a->next->n;
	a->next->n = sum;
	popp(stack, line);
}
