#include "monty.h"

/**
* pint: preints element at the top of the stack
* @stack: stack
* @line: line
*/

void _pint(stack_t **stack, unsigned int line)
{
	if (!*stack || !stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		clean(stack);
		exit(EXIT_FAILURE);
	}
	else
		fprintf(stdout, "%d\n", (*stack)->n);
}
