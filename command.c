#include "monty.h"

glob_t global = {NULL, NULL};

/**
 * command - reads the file
 * @argv: Argument vector
 */

void command(char *argv)
{
        int i = 0, j = 0;
        size_t bufsize = 0;
        char *args = NULL, *item = NULL;
        stack_t *stack = NULL;

        global.fd = fopen(argv, "r");
        if (global.fd)
        {
                while (getline(&global.line, &bufsize, global.fd) != -1)
                {
                        i++;
                        args = strtok(global.line, " \n\t\r");

                        if (args == NULL)
                        {
                                free(args);
                                continue;
                        }
                        else if (*args == '#')
                                continue;
                        item = strtok(NULL, " \n\t\r");
                        j = _opcode(&stack, args, item, i);
                        if (j == 1)
                                push_error(global.fd, global.line, stack, i);
                        else if (j == 2)
                                ins_error(global.fd, global.line, stack, args, j);
                }
                free(global.line);
                free_dlistint(stack);
                fclose(global.fd);
        }
        else
        {
                fprintf(stderr, "Error: Can't open file %s\n", argv);
                exit(EXIT_FAILURE);
        }
}
