#include "monty.h"

/**
 * _opcode - handles opcode
 * @stack: stack
 * @arg: argument
 * @item: item
 * @n: count
 */
int _opcode(stack_t **stack, char *arg, char *item, int n)
{
        int i = 0;

        instruction_t op[] = {
                {"push", pushh},
                {"pall", palll},
                {"pint", pintt},
                {"pop", popp},
                {"swap", swapp},
                {"add", addd},
                {"sub", subb},
                {"nop", nopp},
                {NULL, NULL}
        };

        while (op[i].opcode)
        {
                if (!strcmp(arg, op[i].opcode))
                {
                        if (!strcmp(arg, "push"))
                        {
                                if (_isdigit(item) == 1)
                                        value = atoi(item);
                                else
                                        return (1);
                        }
                        op[i].f(stack, (unsigned int)n);
                        break;
                }
                i++;
        }
        if (!op[i].opcode)
                return (2);

        return (0);
}
