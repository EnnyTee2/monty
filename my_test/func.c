#include "monty.h"

void get_func(char *opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pop", pop},
		{"add", add},
		{"sub", sub},
		{NULL, NULL}
	}
	int i = 0;
	while (ops[i] != NULL)
	{
		if (ops[i].[0] == opcode)
		{
			(void) (*f)(stack, line_number);
		}
		i++;
	}
	fprintf(stderr, "L%i: unknown instruction %s\n", opcode);
	exit(EXIT_FAILURE);
	
}