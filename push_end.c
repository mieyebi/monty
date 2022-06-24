#include "monty.h"
/**
 * push_end - adds a new item on top of stack
 * @stack: stack
 * @line_number: line of code in monty bytecode
 *
 *
 */
void push_end(stack_t **stack,
		__attribute__((unused)) unsigned int line_number)
{
	stack_t *item, *current = *stack;

	item = malloc(sizeof(stack_t));
	if (!item)
	{
		fprintf(stderr, "Error: malloc failed\n");
		if (*stack)
			free_(*stack);
		*stack = NULL;
		return;
	}

	item->n = num;
	item->next = NULL;
	if (!current)
	{
		item->prev = NULL;
		*stack = item;
		return;
	}
	while (current->next)
		current = current->next;

	item->prev = current;
	current->next = item;
}
