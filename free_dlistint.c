#include "monty.h"

/**
* free_dlistint: frees the list
* *stack: stack
*/

void free_dlistint(stack_t *stack)
{
	stack_t *a = NULL;
	a = stack;

	if (a)
	{
		free_dlistint(a->next);
		free(a);
	}
}
