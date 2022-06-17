#include "monty.h"

glob_t global = {NULL, NULL};

/**
 * main - function
 * @argc: argument count
 * @argv: Argument vector
 * Return: number of arguments.
 */
int main(int argc, char **argv)
{
	if (argc == 2)
		command(argv[1]);
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
