#include "monty.h"

/**
* new_node - creates a new node to push new element into the stack
* @n: new element
* Return: new node element
*/

stack_t *new_node(int n)
{
	stack_t *nnode = malloc(sizeof(stack_t));

	if (nnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	nnode->n = n;
	nnode->next = NULL;
	nnode->prev = NULL;
	return (nnode);
}
