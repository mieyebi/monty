#include "monty.h"

/**
* clean: closes files and frees malloc
* @stack: stack
*/

void clean(stack_t **stack)
{
	stack_t *a;

	a = *stack;

	while(a)
	{
		*stack = (*stack)->next;
		free(a);
		a = *stack;
	}
	fclose(global.fd);
	free(global.line);
}
