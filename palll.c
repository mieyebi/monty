#include "monty.h"

/**
* palll: prints all elements in a stack
* @stack: stack
* @line: line
*/

int value;
void palll(stack_t **stack, unsigned int line)
{
	stack_t *a;
	(void)line;

	a = *stack;

	while (a)
	{
		fprintf(stdout, "%d\n", a->n);
		a = a->next;
	}
}
