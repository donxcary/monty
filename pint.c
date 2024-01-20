#include "monty.h"

/**
 * p_pint - prints the value at the top of the stack, followed by a new line
 * @head: pointer to the head of the stack
 * @number: line number
 *
 * Description: prints the top element of a stack_t list
 */

/* This function implements the pint opcode */
void p_pint(stack_t **head, unsigned int number)
{
	/* Check if the stack is empty */
	if (*head == NULL)
	{
		/* Print the error message and exit with failure */
		fprintf(stderr,
			"L%d: can't pint, stack empty\n",
				number);
		exit(EXIT_FAILURE);
	}

	/* Print the value at the top of the stack */
	printf("%d\n", (*head)->n);
}
