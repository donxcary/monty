#include "monty.h"

/**
 * execute - executes a function according to the opcode
 * @content: pointer to the line content
 * @head: pointer to the head of the stack
 * @counter: line number
 * @file: pointer to the monty file
 *
 * Return: 0 on success, 1 on failure
 */
int execute(char *content, stack_t **head, unsigned int counter, FILE *file)
{
	instruction_t instructions[] = {
		{"push", p_push},
		{"pall", p_pall},
		{"pint", p_pint},
		{"pop", p_pop},
		{"swap", p_swap},
		{"add", p_add},
		{NULL, NULL}
	};
	char *opcode, *arg;
	int i;

	opcode = strtok(content, " \t\n");
	arg = strtok(NULL, " \t\n");
	bus.arg = arg;
	bus.file = file;
	bus.content = content;
	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			instructions[i].f(head, counter);
			return (0);
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", counter, opcode);
	return (1);
}
